#include "Simple_window.h"
#include "Graph.h"

struct Lines : Shape {
	Lines() {}
	Lines(initializer_list<pair<Point,Point>>lst);

	void draw_lines() const;
	void add(Point p1, Point p2);
};

int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,1000,800,"Canvas"};

	int x_size = win.x_max();

	cout << xsize << '\n';


	Lines x;

	
	win.wait_for_button();

}
