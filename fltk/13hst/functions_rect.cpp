#include "Simple_window.h"
#include "Graph.h"
Point north_west(const Rectangle& r)
{
	//cout << "Point{" << r.point(0).x << ',' << r.point(0).y << "}\n";
	Point p {r.point(0).x, r.point(0).y};

	return p;
}

Point north(const Rectangle& r)
{
	Point p {r.point(0).x + (r.width()/2), r.point(0).y};

	return p;

}

int main()
	try {
		using namespace Graph_lib;

		Point tl{100,100};

		Simple_window win {tl,600,400,"Canvas"};

		Rectangle r {Point{150,100}, 200, 100};

		Point pnw;
		Point pn;

		pnw = {north_west(r)};
		pn = {north(r)};
		//	cout << p.point(0).x << '\n';
		Rectangle rnw {pnw, 200, 100};
		Rectangle rn{pn, 100, 100};

		win.attach(rn);
		win.attach(rnw);

		win.wait_for_button();
	} 
catch(exception& e) {
	// some error reporting
	return 1;
}
catch(...) {
	// some more error reporting
	return 2;
}
