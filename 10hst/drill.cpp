#include "../include/std_lib_facilities.h"

struct Point {
	int x;
	int y;
};


void fill_point(vector<Point>& orig_p)
{

	cout << "Give us 7 points: \n";
		for(Point p; cin>> p.x >>p.y;)
			orig_p.push_back(Point{p.x,p.y});
	

}

void print_point(const vector<Point>& p)
{
	for(Point z : p)
		cout << z.x << '\t' << z.y << '\n';

}


int main()
{
	vector<Point>original_points;

	fill_point(original_points);
	print_point(original_points);

}
