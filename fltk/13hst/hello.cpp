#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main(int argc, char **argv)
{
	Fl_Window *window = new Fl_Window(340,180);
	window->end();
	window->show(argc, argv);
	return Fl::run();
}
