
#include "../include/std_lib_facilities.h"

struct Point {
	int x;
	int y;
};


void fill_point(vector<Point>& orig_p)
{
	int x;
	int y;

	cout << "Give us 2 points: \n";
	for(int i=0; i<2; ++i) {
		for(Point p; cin>> x >>y;)
			orig_p.push_back(Point{x,y});
	}

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
