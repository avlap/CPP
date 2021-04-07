#include "Simple_window.h"
#include "Graph.h"

int main()
{
	//y_max-bottom_margin
    using namespace Graph_lib;

    Point tl {100,100};

    Simple_window win {tl,600,400,"Canvas"};

	Function sine {sin,0,100,Point{20,150},1000,50,50};

	//axis

	Axis xa {Axis::x, Point{20,300},280,10,"x axis"};
	Axis ya {Axis::y, Point{20,300},280,10,"y axis"};

	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);
	
	win.attach(sine);
	win.set_label("Canvas #4");
  	win.attach(ya);
	win.attach(xa);
	win.set_label("VANVAS");
    win.wait_for_button();
}
