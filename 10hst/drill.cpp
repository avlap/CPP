#include "../include/std_lib_facilities.h"

struct Point {
	int x;
	int y;
};


void fill_point(vector<Point>& orig_p)
{
	cout << "Give us 7 points: \n";
	while (cin) {
		for(Point p; cin>> p.x >>p.y;) 
			orig_p.push_back(Point{p.x,p.y});
	}
}

void print_point_cout(const vector<Point>& p)
{
	for(Point z : p)
		cout << z.x << '\t' << z.y << '\n';
}

void print_point_file(const vector<Point>& p, string name)
{
	//string name;
	//cout << "please enter name output file: \n";
	//cin >> oname;
	ofstream ost{name}; //ost write to a file named oname
//	if (!ost) error("can't open output file ", oname);
	for(Point z:p)
		ost << z.x << '\t' << z.y << '\n';
}

int main()
{
	string s = "out_file";
	vector<Point>original_points;

	fill_point(original_points);
	//print_point_cout(original_points);
	print_point_file(original_points, s);
}
