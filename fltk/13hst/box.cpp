#include "Simple_window.h"
#include "Graph.h"

struct Arc : Shape {
	Arc(Point p, int w, int h, double a, double b);
	Arc(int x, int y, int w, int h, double a, double b);

void draw_lines() const
{
	if(color().visibility())
		fl_arc(x,y,w,h,a,b);
}

	private:
	int x, y;
	int w;
	int h;
	double a;
	double b;
};

Arc::Arc(int xx, int yy, int ww, int hh, double aa, double bb)
	:x{xx},y{yy},w{ww},h{hh},a{aa},b{bb}
{
	if(b<a) error("a larger then b");
}

Arc::Arc(Point p, int ww, int hh, double aa, double bb)
	:x{p.x},y{p.y},w{ww},h{hh},a{aa},b{bb}
{
	if(b<a) error("a larger then b");
	add(p);
}

//box, 4 lines, 4 arcs.
//Try to make a box, with one full arc first

struct Box : Shape {


};

int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};
	Point bx{200,220};

	Simple_window win {tl,600,400,"Canvas"};

	Rectangle rect0 {bx,70,80};

	Arc a1 {bx,70,80,0.0,333.0};
	//Arc a2 {300, 100, 70, 80, 22.0, 229.0};
	//Arc a2 {100,220,50,60,0.0,333.0};

	win.attach(rect0);
	win.attach(a1);
	//win.attach(a2);

	win.wait_for_button();

}
