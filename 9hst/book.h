class Book {
	//isbn, title, author, copyright-date. checked in or out,.
	//
	public:
		
		bool checked;
		bool check_in();
		bool check_out();

		string title() {return title;}
		string author() {return author;}
		string isbn() {return isbn;}
	private:
		string title;
		string author;
		string isbn;

};


bool Book::check_in()
{
	checked = true;
	return checked;

}


int main()
{

}
