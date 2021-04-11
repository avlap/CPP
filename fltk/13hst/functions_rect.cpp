#include "Simple_window.h"
#include "Graph.h"
Point print_point(const Rectangle& r)
{
	//cout << "Point{" << r.point(0).x << ',' << r.point(0).y << "}\n";

	Point p {r.point(0).x + 50, r.point(0).y + 50};
	
	return p;

}

int main()
{
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Rectangle r {Point{150,100}, 200, 100};

	Point p;


	p = print_point(r);
//	cout << p.point(0).x << '\n';
	Rectangle r1 {p, 200, 100};

	win.attach(r);
	win.attach(r1);

	win.wait_for_button();




}

