
//
// This is example code from Chapter 9.5 "Enumerations" of 
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

enum Month {
   jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

enum Day {
   monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

void do_something();
void do_something_else();

void my_code(Month m)
{
   if (m == 17) do_something();          // huh: 17th month?
   if (m == monday) do_something_else(); // huh: compare month to Monday?
}

int main()
{
   Month m = feb;         // ok: feb in scope
   Month m2 = Month::feb; // also ok
//   m = 7;               // error: can't assign an int to a Month
   int n = m;             // ok: we can assign a Month to an int
   Month mm = Month(7);   // convert int to Month (unchecked)
}
