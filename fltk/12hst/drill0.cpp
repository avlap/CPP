#include "Simple_window.h"
#include "Graph.h"

int main()
{
	//y_max-bottom_margin
    using namespace Graph_lib;
   
    Point tl {100,100};
   
    Simple_window win {tl,600,400,"Canvas"};

	//axis

	Axis xa {Axis::x, Point{100,300},280,10,"x axis"};

	Axis ya {Axis::y, Point{20,300},280,10,"y axis"};
	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);
		//win.set_label("Canvas #3");
	//win.wait_for_button();

	
   
  //polygon 
    Polygon poly;
   
    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});
   
    poly.set_color(Color::red);

	
  	win.attach(ya);

	win.attach(xa);
	win.set_label("VANVAS");

    win.attach (poly);
   
    win.wait_for_button();
}
