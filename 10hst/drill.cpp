
#include "../include/std_lib_facilities.h"

struct Point {
	int x;
	int y;
};


void fill_point()
{
	vector<Point>original_points;
	int x;
	int y;
	
	cout << "Give us 2 points: \n";
	for(int i=0; i<2; ++i) {
	for(Point p; cin>> x >>y;)
		original_points.push_back(Point{x,y});
	}

}

int main()
{

	fill_point();
	
}
