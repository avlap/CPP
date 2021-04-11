#include "Simple_window.h"
#include "Graph.h"

//arrow, line with a arrow head

struct Arrow : Shape {
//	Arrow(Line l);
	Arrow(Point p1, Point p2);

	//void draw_lines() const;

	private:
		Point p1;
		Point p2;


};


Arrow::Arrow(Point p1, Point p2)
	//:p1{pp1},p2{pp2}
{
	add(p1);
	add(p2);
}
/*
void Arrow::draw_lines() const
{
	Line(p1, p2);

}
*/
int main()
{

	using namespace Graph_lib;

	Point tl{100,100};
	Point ln2{200,100};

	Simple_window win {tl,600,400,"Canvas"};

	Arrow a0 {Point{100,100}, Point{200,100}};
	//Line l {Point{100,100},Point{200,100}};
	
	win.attach(a0);
	
	win.wait_for_button();

}

