//struct Date {
//	int y;
//	int m;
//	int d;
//};
class Date{
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int month() {return m;}
	int day() {return d;}
	int year() {return y;}
private:
	int y,m,d;
};



void Date::add_day(int n)
{

}

//////////////////////////////////////////////

//simple Date (prevent invalid dates)

class Date{
	public: 
		class Invalid{}; //to be used as exception
		Date(int y, int m, int d);
	private:
		int y, int m, int d;
		bool is_valid();
};

		
Date::Date(int yy, int mm, int dd) //constructor of a object
	:y{yy},m{mm},d{dd} //initialize members
{
	if(!is_valid()) throw Invalid{};

}

bool Date::is_valid()
{
	if(m<1||12<m) return false;
}

void f(int x, int y)
	try{
		Date dxy {2004, x,y};
		cout << dxy << '\n';
		dxy.add_day(2);
	}
catch(Date::Invalid) {
	error("Invalid date");
}
