#include "../include/std_lib_facilities.h"

class Date{
	public: 
	
	Date(int y, int m, int d);
	void add_day(int n);
	int year() {return y;}
	int month() {return m;}
	int day() {return d;}

	private:
	int y, m, d;
};

Date::Date(int yy, int mm, int dd)
	:y{yy},m{mm},d{dd}
{
	//constructor
}

//void init_day(Date& dd, int y, int m, int d)
void Date::add_day(int n)
{
	//
}


int main()
{
	//f();
	Date today{1978,6,25};
	//Date tomorrow;

	//add_day(today, 1);

	cout << today.month() << '\n';


}
