#include "../include/std_lib_facilities.h"

class Book {
	//isbn, title, author, copyright-date. checked in or out,.
	//
	public:

		bool checked = false;
		void is_checked();
		void check_in();
		void check_out();

		string title() {return t;}
		string author() {return a;}
		string isbn() {return i;}
	private:
		string t;
		string a;
		string i;

};


void Book::check_in()
{
	checked = true;
	//return checked;
}

void Book::check_out()
{
	checked = false;
	//return checked;
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
	Book b;
	b.is_checked();
	b.check_in();
	b.is_checked();
	b.check_out();
	b.is_checked();
}

