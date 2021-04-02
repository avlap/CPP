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
	//print vector Point to file
{
	//string name;
	//cout << "please enter name output file: \n";
	//cin >> oname;
	ofstream ost{name}; //ost write to a file named oname
	//	if (!ost) error("can't open output file ", oname);
	for(Point z:p)
		ost << z.x << '\t' << z.y << '\n';
}

void read_file(vector<Point>& pp, string name)
{
	//string iname;
	//cin >> iname;
	int x, y;
	ifstream ist {name};
	while(ist >> x >> y) 
		pp.push_back(Point{x, y});
}

void compare_vector(vector<Point> p, vector<Point> pp)
{
	for(int i=0; i < p.size(); ++i)
		if(p[i].x != pp[i].x || p[i].y != pp[i].y) cout << "Something is wrong!\n";
}

int main()
{

	string s = "out_file";
	
	vector<Point>original_points;
	vector<Point>processed_points;

	fill_point(original_points);
	//print_point_cout(original_points);
	print_point_file(original_points, s);
	read_file(processed_points, s); 
	print_point_cout(processed_points);

	compare_vector(original_points, processed_points);

}
