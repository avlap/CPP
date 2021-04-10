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


int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,600,400,"Canvas"};

	Circle c1 {Point{100,200},50};

	win.attach(c1);





	//fl_arc


	win.wait_for_button();

}
