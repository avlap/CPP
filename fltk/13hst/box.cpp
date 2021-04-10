//#include "fltk.h"
#include "Simple_window.h"
#include "Graph.h"
/*
/copy from Ellipse
struct Arc : Shape {
	Arc(int x, int y, int w, int h, double a, double b);

//	void draw_lines() const;
void draw_lines() const
{
	if(color().visibility())
		fl_arc(x,y,w,h,a,b);
}
//	private:
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
*/

int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	//Arc a1 {100,200,50,60,0.0,333};

	//win.attach(a1);





	//fl_arc


	win.wait_for_button();

}
