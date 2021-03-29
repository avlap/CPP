#include "../include/std_lib_facilities.h"

class Book {
	//isbn, title, author, copyright-date. checked in or out,.
	//
	public:
		Book(string i);
		bool checked = false;
		void is_checked();
		void check_in();
		void check_out();
		void set_title();
		void print_isbn() {cout << isbn() << '\n';}
;

		string new_title(string n);
		string author() {return a;}
		string isbn() {return i;}
	private:
		string t;
		string a;
		string i;
};

Book::Book(string ii)
	:i{ii}
{
}


void set_title()
{

}

string Book::new_title(string n)
{
	t = n;
	return t;

	//cout << new_title(t) << '\n';

}


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
	Book b("Ik ga leven");
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

