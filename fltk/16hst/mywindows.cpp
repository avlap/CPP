#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"

struct My_window : Graph_lib::Window {
	My_window(Point xy, int w, int h, const string& title);

private:
//	Open_polyline lines;

	Button next_button; //add (next_x next_y) to lines
	Button quit_button; 

//	void change(Color c) { lines.set_color(c); }
	void quit() { hide(); }
	void next() {}

//the actions 
//	void red_pressed() { change(Color::red); hide_menu(); }
	static void cb_next(Address, Address);
	static void cb_quit(Address, Address);

};

//Lines_window constructor, with lambdas
My_window::My_window(Point xy, int w, int h, const string& title)
	:Window{xy,w,h,title},
	next_button{Point{x_max()-150, 0}, 70, 20, "Next point", [](Address, Address pw) {reference_to<My_window>(pw).next();}},
	quit_button{Point{x_max()-50, 0}, 70, 20, "Quit", [](Address, Address pw) {reference_to<My_window>(pw).quit();}}
		{
			attach(next_button);
			attach(quit_button);
		}



int main()
try {
	My_window win {Point{100,100},600,400,"my"};
	return gui_main();
}
catch(exception& e) {
	cerr << "exception: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "some exception\n";
	return 2;
}




