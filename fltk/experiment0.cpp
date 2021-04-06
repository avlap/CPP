#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Radio_Round_Button.H>

int main(int argc, char **argv)
{
	int x1 = 60; //width of the topbar buttons
	int h1 = 20; //height of the topbar buttons
	Fl_Window *window = new Fl_Window(600,400);
	//Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
	//box->box(FL_UP_BOX);
	//box->:labelfont(FL_BOLD+FL_ITALIC);
	//box->labelsize(36);
	//box->labeltype(FL_SHADOW_LABEL);
	Fl_Button *button0= new Fl_Button(0,0,x1,h1,"Quit");
	Fl_Button *button1 = new Fl_Button(x1,0,x1,h1,"Refresh");
	Fl_Button *button2 = new Fl_Button(x1*2,0,x1,h1,"Open");
	Fl_Button *button3 = new Fl_Button(x1*3,0,x1,h1,"Close");

//	button->type(FL_RADIO_BUTTON);
//	button->set();
//	button->clear();
	window->end();
	window->show(argc, argv);
	return Fl::run();
}
