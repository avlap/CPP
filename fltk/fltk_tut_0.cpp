#include <FL/Fl.H>
#include <FL/Fl_Window.H>

int main()
{
	Fl_Window win(400, 400, "FLTK example 1");
	Fl_Window win1(20, 20, "other");
	win.show();
	win1.show();
	return Fl::run();
}
