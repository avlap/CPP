//#include "fltk.h"
#include "Simple_window.h"
#include "Graph.h"

/*
struct Circle : Shape { //Circle has Shape as base
	Circle(Point p, int rr); //center and radius

	void draw_lines() const; //const it can't be changed

	Point center() const; //center is a function
	int radius() const { return r; } //function radius is a int and returns r;
	void set_radius(int rr) //not only declaration but also statement
	{
		set_point(0,Point{center().x-rr,center().y-rr}); //maintain the center

		r = rr; //r is private
	}
	private:
		int r;
};

*/

/*
void fl_arc(int	x, int y, int w, int h, double a1, double a2 )
	 
*/
//can we use functions of Ellipse? Just a other constructer and additions?
/*
struct Arc : Shape {
	Arc(Point p, int w, int h, double a1, double a2); //center, max and min distance from center. Degrees for a1 and a2. A2 should be larger then a1 (function to check?);

	//copy from Ellipse class
	//void draw_lines() const;
void draw_arc() const
{
	if(color().visibility())
		fl_arc(point(0).x,point(0).y,w,h,a1,a2);

}

	Point center() const;
//	Point focus1() const;
//	Point focus2() const;

	void set_major(int ww)
	{
		set_point(0,Point{center().x-ww,center().y-h}); //maintain the center, copied

		w = ww;
	}

	int major() const { return w; }

	void set_minor(int hh)
	{
		set_point(0,Point{center().x-w,center().y-hh}); //maintain te center copied

		h = hh;
	}

	int degrees_a() const { return a1; }
	int degrees_b() const { return a2; }

	//void operator>=a2_larger_a1 //pseudocode

	private:
		int w;
		int h;
		double a1;
		double a2;
};
*/
//copy from Ellipse
struct Arc : Shape {
	Arc(Point p, int w, int h, double a, double b);

//	void draw_lines() const;
Point center() const;

void draw_lines() const
{
	if(color().visibility())
		fl_arc(point(0).x,point(0).y,w,h,a,b);
}

	private:
	int x, y;
	int w;
	int h;
	double a;
	double b;
};

Arc::Arc(Point p, int ww, int hh, double aa, double bb)
	:w{ww},h{hh},a{aa},b{bb}
{
	if(b<a) error("a larger then b");
}


int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Arc a1 {Point{100,200},50,60,0.0,333};

	win.attach(a1);





	//fl_arc


	win.wait_for_button();

}
