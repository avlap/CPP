#include "../include/std_lib_facilities.h"

class Book {
	//isbn, title, author, copyright-date. checked in or out,.
	//
	//is valid function to check isbn?
	public:
		Book(string i);
		class Invalid{};
		
		void is_checked();
		void check_in() { checked = true; }
		void check_out() { checked = false; }
		void print_isbn() { cout << isbn() << '\n'; }

		bool is_isbn_valid();
		
		string author() { return a; }
		string isbn() { return i; }
	private:
		string t;
		string a;
		string i;
		bool checked = false;

};

Book::Book(string ii)
	:i{ii}
{
	//check for valid
	if(!is_isbn_valid()) throw Invalid{};

}

bool Book::is_isbn_valid()
{
	//isbn should be a string
	//n-n-n-x, where n is integer and x is a digit or a letter
	for(int j=0; j<=4; j+=2) {
		if(!isdigit(i[j])) return false; 
	}

	for(int j = 1; j <= 5; j+=2) {
		if(i[j] != '-') return false; 
	}

	if(isdigit(i[i.length() -1]) || isalpha(i[i.length() -1])) {
		//do nothing
	} else { 
		return false; 
	}

	return true;
}

void Book::is_checked()
{
	//return checked;
	if(checked == true) cout << "checked in" << '\n';
	else if (checked == false) cout << "checked out" << '\n';

	else error("something wrong with the check");
}

int main()
{
	Book b("0-0-0-0"); //n-n-n-x,
	b.print_isbn();
	//cout << b.isbn() << '\n';
	//b.i="mooi niet";
	//string t = "Ik ga leven";
	//b.new_title(t);
	b.is_checked();
	b.check_in();
	b.is_checked();
	b.check_out();
	b.is_checked();
}

