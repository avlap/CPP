struct Point {
	int x, y;
};

bool operator==(Point a, Point b) { return a.x==b.x && a.y==b.y;}
bool operator!=(Point a, Point b) { return !(a==b); }

struct Line : Shape {
	Line(Point p1, Point p2);
};

//line is a kind of shape. Shape is a base class, the base of line.
//

---------

constexpr Point x{100,100};

Simple_window win1 {x,600,400,"two lines"}; // simple window is class

Line horizontal {x, Point{200,100}};

win1.attach(horizontal);

win1.wait_for_button();

-------------------------


Line::Line(Point p1, Point p2)
{
	add(p1);
	add(p2);
};

-------------------
///Lines///

struct Lines : Shape { 
	Lines() {}
	Lines(initializer_list<pair<Point,Point>>Lst); //initialize from a list

	void draw_lines() const;
	void add(Point p1, Point p2);
};

lines x;
x.add(Point{100,100}, Point{200,100});
x.ad(Point{150,150},Point{150,150});

--------------
//working out functions as defined in the struct Lines
void Lines::add(Point p1, Point p2)
{
	Shape::add(p1);
	Shape::add(p2);
}

void Lines::draw_lines() const
{
	if(color().visibility())
		for(int i=1; i<number_of_points();i+=2)
			fl_line(point(i-1).x,point(i-1).y,point(i).x,point(i).y);
}

//////////////////////
//Lines() empty, lines are added

Lines x = {
	{{100,100}, {200,100},
	{{150,50},{150,150}
};

//initializer list constructor
void Lines::Lines(initializer_list<pair<Point,Point>>Lst)
{
	for(auto p : Lst) add(p.first,p.second);
}

//the auto is a placeholder for the type pair<Point,Point>
struct Open_polyline : Shape {
	using Shape::Shape; //use Shape's constructors
	void add(Point p) {Shape::add(p);}
};


