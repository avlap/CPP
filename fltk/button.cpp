#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

int main(int argc, char **argv)
{
	Fl_Window *win = new Fl_Window(340,180,"FLTK Tutorial");
	win->color(FL_GREEN);
	win->begin();
		Fl_Button *button1 = new Fl_Button(25,15,140,40,"OK");
		button1->color(FL_RED);
		button1->labelfont(FL_BOLD+FL_ITALIC);
		button1->labeltype(FL_SHADOW_LABEL);
	win->end();
	win->show();
	return Fl::run();
}

