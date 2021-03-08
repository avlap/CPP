#include "../include/std_lib_facilities.h"

double primary()
{
	Token t = get.token();
	switch(t.kind) {
		case '(':
			{
				double d = expression();
				t = get.token();
				if(t.kind != ')') error("')' expected");
				return d;
			}
		case '8':
			return t.value;
		default
			error("primary expected");
	}
}


double term()
{
	double left = primary();
	Token t = get.token();
	while(true) {
		switch(t.kind) {
			case '*':
				left *= primary();
				t = get.token();
				break;
			case '/':
				{ double d = primary();
					if(d == 0) error("divide by zero");
					left /=d;
					t=get.token();
					break;

				}
				default
					return left;
		}
	}
}





double expression()
{
	double left = term();
	Token t = get.token();
	while(true) {
		switch(t.kind) {
			case '+':
				left += term();
				t = get.token();
				break;
			case '-':
				left -= term();
				t = get_token();
				break;
			default:
				return left;
		}
	}
}






int main()

	try {

	while(cin)
		cout << expression() << '\n';
	keep_window_open();
}

catch (exception& e) {
	cerr << e.what() << '\n';
	keep_window_open();
	return 1;
}

catch(...) {
	cerr << "exception \n";
	keep_window_open();
	return 2;
}



//Expression: a mathematical or logical symbol or a meaningful combination of symbols
//
//Term: In Algebra a term is either a single number or variable, or numbers and variables multiplied together. Terms are separated by + or − signs, or sometimes by divide.
//
//Primary: elementair?
