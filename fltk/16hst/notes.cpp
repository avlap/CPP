#include "Simple_window.h"
#include "Graph.h"

struct Simple_window : Graph_lib::Window {
	Simple_window(Point xy, int w, int h, const string& title);

	void wait_for_button();
	private:
	Button next_button;
	bool button_pushed;

	static void cb_next(Address, Address);
	void next();
};

Simple_window::Simple_window(Point xy, int w, int h, const string& title)
	:Window{xy,w,h,title},
	next_button(Point{x_max()-70,0},70,20,"Next", cb_next},
	button_pushed{false}
	{
			attach(next_button);

	}

void Simple_window::cb_next(Address, Address pw)
{
	reference_to<Simple_window>(pw).next();

}

void Simple_window::wait_for_button()
{
	while(!button_pushed)FL::wait();
	button_pushed = false;
	FL::redraw();
}

class Button : public Widget{
	public:
		Button(Point xy, int ww, int hh, const string& s, Callback cb)
			:Widget{xy,ww,hh,s,cb} {}

		void attach(Window& win);
};

//unsigned can only hold positive integers

int main()
{
}

