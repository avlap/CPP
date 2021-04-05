#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

class VlapWindow : public Fl_Window
{
	public:
		VlapWindow(int width, int height, const char* title=0) :
			Fl_Window(width,height,title)
	{
		//set color of window to white
		color(FL_WHITE);
		//begin adding children to this window
		begin();
			Fl_Button *button1 = new Fl_Button(25,15,140,40,"OK");
			button1->color(FL_RED);
		//stop adding children to this window
		end();
		//Display the window
		show();
	}
};

int main()
{
	VlapWindow win(340,180,"EXAMPLE");
	return Fl::run();
}
