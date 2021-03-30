#include "../include/std_lib_facilities.h"

namespace Library {

	enum class Genre {
		fiction, nonfiction, thriller, children
	};

	class Book {
		//isbn, title, author, copyright-date. checked in or out,.
		public:
			Book(string i);
			class Invalid{};

			void is_checked() { cout << "checked: " << checked << '\n'; }
			void check_in() { checked = true; }
			void check_out() { checked = false; }
			void print_isbn() { cout << isbn() << '\n'; }

			string author() { return a; }
			string isbn() { return i; }
		private:
			//	string t;
			string a;
			string i;
			bool checked = false;

			bool is_isbn_valid();
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
		//Tokenize?
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

	bool operator==(Book& a, Book& b)
	{
		return a.isbn()==b.isbn();
	}

	bool operator!=(Book& a, Book& b)
	{
		return a.isbn()!=b.isbn();
	}

	ostream& operator<<(ostream& os, Book& a)
	{
		return os << "ISBN: " << a.isbn() << '\n';
	}

} //namespace Library

using namespace Library; 

int main()
	try{
		Book a("0-0-0-0"); //n-n-n-x,
		Book b("0-0-0-n");
		if(a!=b)  
			cout << "a != b" << '\n';
		else if(a==b)
			cout << "a == b" << '\n';

		//b.print_isbn();
		cout << a;
		cout << b;
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
catch(Book::Invalid) {
	error("Invalid isbn");
}

