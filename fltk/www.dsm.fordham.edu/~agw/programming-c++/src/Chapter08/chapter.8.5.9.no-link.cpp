//
// This is example code from Chapter 8.5.9 "constexpr functions" of
// "Programming -- Principles and Practice Using C++" by Bjarne
// Stroustrup
//

constexpr double xscale = 10;           // scaling factors
constexpr double yscale = 0.8;

struct Point {                          // 2D point with cartesian coordinates
   double x;
   double y;
};

constexpr Point scale(Point p) { return {xscale*p.x,yscale*p.y}; };

void user(Point p1)
{
   constexpr Point p2 {10, 10};

   Point p3 = scale(p1);     // OK: p3 == {100,8}; run=time evaluation is fine
   constexpr Point p4 = scale(p2);     // p4 == {100, 8}'

//   constexpr Point p5 = scale(p1); // error: scale(p1) is not a constant expression
   constexpr Point p6 = scale(p2); // p6 = {100, 8}
}
