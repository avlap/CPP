#include "../include/std_lib_facilities.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>


class MyWindow : public Fl_Window
{
	public:
				MyWindow(int width, int height, const char* title=NULL) :
			Fl_Window(width, height,title)
	{
		color(FL_WHITE);
		begin();
			Fl_Button *button1 = new Fl_Button(25,15,140,40,"OK");
			button1->color(FL_RED);
		end();
		show();
	}
};

int main()
{
	MyWindow win (340,180,"FLTK");
	return Fl::run();
}
