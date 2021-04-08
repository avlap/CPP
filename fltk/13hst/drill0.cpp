#include "Simple_window.h"
#include "Graph.h"


int main()
{
	//y_max-bottom_margin
	using namespace Graph_lib;

	Point tl{100,100};

	Simple_window win {tl,1000,800,"Canvas"};

	int x_size = win.x_max();
	int y_size = win.y_max();
	int x_grid = 100;
	int y_grid = 100;

//	cout << x_size << '\n';


	Lines grid;
	for(int x=x_grid;x <(x_size-x_grid); x+=x_grid)
		grid.add(Point{x,0},Point{x,x_size});

	for(int y=y_grid;y<(y_size-y_grid);y+=y_grid)
		grid.add(Point{0,y},Point{x_size,y});

	win.attach(grid);

	//Rectangle rect;
	
	//Rectangle rect (Point{i, i}, Point{x_grid+i, y_grid+i});
	Vector_ref<Rectangle> vr;

	for(int i=0; i<(x_size-x_grid); i+=x_grid) {
		vr.push_back(new Rectangle(Point{i, i}, Point{x_grid +i, y_grid + i}));
		vr[vr.size()-1].set_fill_color(Color::yellow);
		win.attach(vr[vr.size()-1]);
		}

	win.wait_for_button();

}
