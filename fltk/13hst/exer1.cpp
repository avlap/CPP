#include "Simple_window.h"
#include "Graph.h"

int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Rectangle r {Point{200,200},100,50};
	r.set_color(Color::blue);
	win.attach(r);

	win.set_label("Rectangle");

	Polygon poly;
	poly.add(Point{100,100});
	poly.add(Point{200,100});
	poly.add(Point{100,200});
	poly.add(Point{200,200});

	poly.set_color(Color::yellow);

	win.attach(poly);


	win.wait_for_button();

}
