struct Date {
	int y;
	int m;
	int d;
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
