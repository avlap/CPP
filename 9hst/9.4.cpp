#include "../include/std_lib_facilities.h"

class Date{
	public: 
	class Invalid{};	
	Date(int y, int m, int d);
	void add_day(int n);
	int year() {return y;}
	int month() {return m;}
	int day() {return d;}
	private:
	int y, m, d;
	bool is_valid();
};

Date::Date(int yy, int mm, int dd)
	:y{yy},m{mm},d{dd}
{
	//constructor
	if(!is_valid()) throw Invalid{};
}

bool Date:is_valid()
{
	if(m<1||12<m) return false;

}

//void init_day(Date& dd, int y, int m, int d)
void Date::add_day(int n)
{
	//
}

void f(int x, int y)
try{
	Date dxy {2004,x,y};
	cout << dxy

}


int main()
{
	//f();
	Date today{1978,6,25};
	//Date tomorrow;

	//add_day(today, 1);

	cout << today.month() << '\n';


}
