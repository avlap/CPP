
/*
   calculator08buggy.cpp

   Helpful comments removed.

   We have inserted 3 bugs that the compiler will catch and 3 that it won't.
   */

#include "../include/std_lib_facilities.h"

//Make a class Token to tokenize input numbers and characters.
//Define different Token types
//User defined types
//Now you're able to define your own types for the calculator, like '+' '-' etc.

class Token {
	public:
		char kind; //we need chars
		double value; 
		string name;
		Token(char ch) :kind(ch), value(0) { } //Token type for chars only. Kind / value pair.
		Token(char ch, double val) :kind(ch), value(val) { } //Token type for a char with a double value. Kind / value pair.
		Token(char ch, string n) :kind(ch), name(n){} //Token type for a string of chars. Kind / name pair
};


//A first option would be to add tokens to a vector.
//Token stream is needed, to putback tokens which aren't used right away.

class Token_stream {
	public:
		bool full; //we place one token at the time in the stream
		Token buffer; //we store the token in the buffer

		Token_stream() :full(0), buffer(0) { } //full and buffer are false

		Token get(); //function to read a token from cin
		void unget(Token t) { buffer = t; full = true; } //putback token to the token stream, buffer = t and full is true.

		void ignore(char); //ignore print to be able to clean up buffer after a error and not run into a second error.
};

const char let = 'L'; //let is the keyword we choose, which people have to use when defining a variable: let pi = 3.14... let var = ...
const char quit = 'q'; //use quit to make reading code more easy
const char print = ';';
const char number = '8'; //we need to specify type of character, we do it with setting '8'. It's a digit.
const char name = 'a';
const string declkey = "let";

//function get() part of Token_stream. Get 'gets' a new token from cin. The tokens are selected using case. The functions gives back a Token.
//It first checks if the buffer has a token already, if so, it will remove it first.
Token Token_stream::get()
{
	if (full) { full = false; return buffer; } //empty the buffer and return
	char ch;
	cin >> ch;
	switch (ch) {
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case ';':
		case '=':
			return Token(ch); //for all these cases, return chars as themselves.
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			{	cin.unget(); //c input unget... putback. 
				//Attempts to decrease the current location in the stream by one character, making the last character extracted from the stream once again available to be extracted 
				//by input operations.
				//
				//we read a digit, put it back in the stream and read it back in again as a double. This way we can read all the incoming digits as one number (123).
				double val;
				cin >> val;
				return Token{number, val}; //what is number val.. Number is a const to set kind to numbers. Val comes from cin. So this returns the incoming number as double.
				//Token(char ch, double val) :kind(ch), value(val) { }
			}
		default:
			if (isalpha(ch)) { //checks if alpha, not all characters are allowed for a name
					string s;
					s += ch;
					while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s += ch;
					cin.putback(ch);
					if(s==declkey) return Token{let};
					return Token{name, s}; //define a name, return that name, which is string s.
			}
			error("Bad token");
	}
}

//function implemented to be able to remove tokens from stream after a error.
//function searches for a specific character and returns when character is found. Why void then? 
void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) { //if char c and if it is a buffer.
		full = false; //empty buffer first
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return; //search for a specific character and return.
}

//access the value, given the name
class Variable { //struct is a certain type of class? In newer versions this is class?
	public:
		string name;
		double value;
		Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> var_table; //strange place? a vector of Variables, called var_table. We store names in a vector.

//double get_value(string s) //make a function, return a double, input is a string
//{
//	for (int i = 0; i < names.size(); ++i)
//		if (names[i].name == s) return names[i].value; //make it possible to define names
//	error("get: undefined name ", s);
//}
//
double get_value(string s)
	//return the value of the Variable named s
{
	for(const Variable& v:var_table)
		if(v.name==s) return v.value;
	error("get: undefined variables",s);

}


//void set_value(string s, double d) //make it possible to change value of defined names
//{
//	for (int i = 0; i <= names.size(); ++i)
//		if (names[i].name == s) {
//			names[i].value = d;
//			return;
//		}
//	error("set: undefined name ", s);
//}
//
void set_value(string s, double d)
{
	for(Variable& v:var_table)
		if(v.name==s) {
			v.value =d;
			return;
		}
	error("set: undefined variable", s);

}

bool is_declared(string s) //check if it's not a duplicate name
{
	for (int i = 0; i < var_table.size(); ++i)
		if (var_table[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double primary()
{
	Token t = ts.get();
	switch (t.kind) {
		case '(':
			{	double d = expression();
				t = ts.get();
				if (t.kind != ')') error("'(' expected");
			}
		case '-':
			return -primary();
			//no break?
		case number:
			return t.value;
		case name:
			return get_value(t.name);
		default:
			error("primary expected");
	}
}

double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
			case '*':
				left *= primary();
				break;
			case '/':
				{	double d = primary();
					if (d == 0) error("divide by zero");
					left /= d;
					break;
				}
			default:
				ts.unget(t);
				return left;
		}
	}
}

double expression()
{
	double left = term();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
			case '+':
				left += term();
				break;
			case '-':
				left -= term();
				break;
			default:
				ts.unget(t);
				return left;
		}
	}
}

double declaration()
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	var_table.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
		case let:
			return declaration();
		default:
			ts.unget(t); 
			return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print); //ignore print message. Why? To prevent running in another error.
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (cin) 
		try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << '\n'; //endl is endline?
	}
	catch (runtime_error& e) {
		cerr << e.what() << '\n';
		clean_up_mess();
	}
}

int main()

	try {
		calculate();
		return 0;
	}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
