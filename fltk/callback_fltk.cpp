#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void button1_cb(Fl_Widget* buttonptr) 
{
	if (buttonptr->color() == FL_BLUE) {
		buttonptr->color(FL_RED);
	} else {
		buttonptr->color(FL_BLUE);
	}
}

int main(int argc, char **argv)
{
	Fl_Window *win = new Fl_Window(340,180, "FLTK");
	win->color(FL_WHITE);
	win->begin();
		Fl_Button *button1 = new Fl_Button(25,15,140,40,"Click Me1");
		button1->color(FL_RED);
		button1->callback(button1_cb);
	win->end();
	win->show();
	return Fl::run();

}
