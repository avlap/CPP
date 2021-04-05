#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

int main(int argc, char **argv)
{
	Fl_Window *win = new Fl_Window(380, 180, "FLTK example 1");
	win->color(FL_WHITE);
	win->begin();
		Fl_Button *button1 = new Fl_Button(25,15,140,40,"OK");
		button1->color(FL_RED);
	win->end();
	win->show();
	return Fl::run();
}
