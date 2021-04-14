#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"

struct Lines_window : Graph_lib::Window {
	Lines_window(Point xy, int w, int h, const string& title);

private:
	Open_polyline lines;

	Button next_button; //add (next_x next_y) to lines
	Button quit_button;
	In_box next_x;
	In_box next_y;
	Out_box xy_out;
	Menu color_menu; //menu
	Button menu_button;
	Menu style_menu; //linestyle menu
	Button style_menu_button; //linestyle button

	void change(Color c) { lines.set_color(c); }
	void change_style(Line_style ls) { lines.set_style(ls); } 

	void hide_menu() { color_menu.hide(); menu_button.show(); }
	void hide_style_menu() { style_menu.hide(); style_menu_button.show(); } //linestyle menu

	//the actions 
	void red_pressed() { change(Color::red); hide_menu(); }
	void blue_pressed() { change(Color::blue); hide_menu(); }
	void black_pressed() { change(Color::black); hide_menu(); }
	void menu_pressed() { menu_button.hide(); color_menu.show(); }
	//linestyle actions
	void solid_pressed() { change_style(solid); hide_style_menu(); }
	void dash_pressed() { change_style(dash); hide_style_menu(); }
	void dot_pressed() { change_style(dot); hide_style_menu(); }
	void style_menu_pressed() { style_menu_button.hide(); style_menu.show(); }

	void next();
	void quit();

	static void cb_red(Address, Address); //callback
	static void cb_blue(Address, Address); 
	static void cb_black(Address, Address); 
	static void cb_menu(Address, Address); 
	static void cb_next(Address, Address); 
	static void cb_quit(Address, Address); 

	static void cb_solid(Address, Address); //callback
	static void cb_dash(Address, Address); 
	static void cb_dot(Address, Address);
	static void cb_style_menu(Address, Address);




};

//Lines_window constructor, with lambdas
Lines_window::Lines_window(Point xy, int w, int h, const string& title)
	:Window{xy,w,h,title},
	next_button{Point{x_max()-150, 0}, 70, 20, "Next point", [](Address, Address pw) {reference_to<Lines_window>(pw).next();}},
	quit_button{Point{x_max()-70, 0}, 70, 20, "Quit", [](Address, Address pw) {reference_to<Lines_window>(pw).quit();}},
	next_x{Point{x_max()-310, 0}, 50, 20, "Next x:"},
	next_y{Point{x_max()-210, 0}, 50, 20, "next y:"},
	xy_out{Point{100, 0}, 100, 20, "current (x,y):"},
	color_menu{Point{x_max()-70, 40}, 70, 20, Menu::vertical,"color"}, // menu
//	menu_button{Point{x_max()-80,30},80, 20, "color menu", cb_menu}
 	menu_button{Point{x_max()-80, 30}, 80, 20, "color menu", [](Address, Address pw) {reference_to<Lines_window>(pw).menu_pressed();}}
	style_menu{x_min(), 40}, 70, 20, Menu::vertical, "linestyle"},
	style_menu_button{x_min(), 30}, 80, 20,"linestyle", [](Address, Address pw) {reference_to<Lines_window>(pw).style_menu_pressed();}}

		{
			attach(next_button);
			attach(quit_button);
			attach(next_x);
			attach(next_y);
			attach(xy_out);
			xy_out.put("no point");
			color_menu.attach(new Button{Point{0,0},0,0,"red", [](Address, Address pw) {reference_to<Lines_window>(pw).red_pressed();}});
			color_menu.attach(new Button{Point{0,0},0,0,"blue", [](Address, Address pw) {reference_to<Lines_window>(pw).blue_pressed();}});
			color_menu.attach(new Button{Point{0,0},0,0,"black", [](Address, Address pw) {reference_to<Lines_window>(pw).black_pressed();}});
			attach(color_menu);
			color_menu.hide();
			attach(menu_button);
			style_menu.attach(new Button{Point{0,0},0,0,"solid", [](Address, Address pw) {reference_to<Lines_window>(pw).solid_pressed();}});
			style_menu.attach(new Button{Point{0,0},0,0,"dash", [](Address, Address pw) {reference_to<Lines_window>(pw).dash_pressed();}});
			style_menu.attach(new Button{Point{0,0},0,0,"dot", [](Address, Address pw) {reference_to<Lines_window>(pw).dot_pressed();}});
			attach(style_menu);
			style_menu.hide();
			attach(style_menu_button);
			attach(lines); //lines?? -> Open_polyline

	}

void Lines_window::quit()
{
	hide();
}

void Lines_window::next()
{
	int x = next_x.get_int();
	int y = next_y.get_int();

	lines.add(Point{x,y});

	//update current position readout
	ostringstream ss;
	ss << '(' << x << ',' << y << ')';
	xy_out.put(ss.str());

	redraw();
}

int main()
try {
	Lines_window win {Point{100,100},600,400,"lines"};
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




