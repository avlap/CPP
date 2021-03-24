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
		


//helper functions
//
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

