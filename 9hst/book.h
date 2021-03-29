class Book {
	//isbn, title, author, copyright-date. checked in or out,.
	//
	public:
		
		bool checked();
		string title() {return title;}
		string author() {return author;}
	private:
		string title;
		string author;
		string isbn;

};
