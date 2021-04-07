#include "Simple_window.h"
#include "Graph.h"

int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Rectangle r {Point{200,200},100,50};
	win.attach(r);
	win.set_label("Rectangle");

	win.wait_for_button();

}
