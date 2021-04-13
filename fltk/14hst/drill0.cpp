#include "Simple_window.h"
#include "Graph.h"

struct B1 : Shape {
	B1(Point p1, Point p2);
	//virtual void vf();
	//void f();

	//void draw_lines() const;



};


B1::B1(Point p1, Point p2)
{
	add(p1);
	add(p2);
}



int main()
{
	Point tl{100,100};
	Simple_window win1 {tl,600,400,"two lines"};
	B1 b0 {Point{100,100}, Point{100,50}};

	win1.attach(b0);


	win1.wait_for_button();

}

