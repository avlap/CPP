#include "Simple_window.h"
#include "Graph.h"

int main()
{
	//y_max-bottom_margin
    using namespace Graph_lib;

    Point tl {100,100};

    Simple_window win {tl,600,400,"Canvas"};

	Function sine {sin,0,100,Point{20,150},1000,50,50};
	sine.set_color(Color::blue);
	win.attach(sine);

	//axis

	Axis xa {Axis::x, Point{20,300},280,10,"x axis"};
	win.attach(xa);

	Axis ya {Axis::y, Point{20,300},280,10,"y axis"};
	win.attach(ya);

	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);

	Polygon poly;
	poly.add(Point{300,200});
	poly.add(Point{350,10});
	poly.add(Point{400,200});

	poly.set_color(Color::red);
	poly.set_style(Line_style::dash);
	win.attach(poly);


	Rectangle r {Point{200,200},100,50};
	win.attach(r);

	r.set_fill_color(Color::yellow);
	poly.set_style(Line_style(Line_style::dash,8));
//	poly_rect.set_style(Line_style(Line_style::dash,2));
//	poly_rect.set_fill_color(Color::green);

	win.set_label("Canvas #7");
	//	win.set_label("Canvas #4");
    win.wait_for_button();
}
