#include "Simple_window.h"
#include "Graph.h"
void print_point(const Rectangle& r)
{
	cout << r.point(0).x << '\n';
	

}

int main()
{
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Rectangle r {Point{150,100}, 200, 100};

	print_point(r);

	win.attach(r);

	win.wait_for_button();




}

