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
		class Invalid{};
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

//helper functions
void init_day(Date& dd, int y, int m, int d)
{
	//chec that (y,m,d) is a valid date
	//if it is, use it to initiate dd

}

void add_day(Date& dd, int n)
{
	//increase dd by n days
	//
}

void f()
{
	Date today;
	int_day(today, 12, 24, 2005); // oops! (no day 2005 in year 12)
	add_day(today,1);
}

Date birthday {1970,12,30};
cout 

