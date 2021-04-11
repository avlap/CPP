//
// This is example code from Chapter 9.5 "Enumerations" of 
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

enum class Month {
   jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
      };

//------------------------------------------------------------------------------

enum class Day {
   monday, tuesday, wednesday, thursday, friday, saturday, sunday
      };
 
//------------------------------------------------------------------------------

void error(const char* errmsg)
{
   cerr << errmsg << endl;
}

//------------------------------------------------------------------------------

Month int_to_month(int x)
{
   if (x<int(Month::jan) || int(Month::dec)<x) error("bad month");
   return Month(x);
}

//------------------------------------------------------------------------------

void f(int m)
{
   Month mm = int_to_month(m);
   // ...
}

//------------------------------------------------------------------------------

int main()
   try
      {
         Month m = Month::feb;
         //m = 7;             // error: can't assign int to Month
         //int n = m;           // error: can't assign as Month to an int
         Month mm = Month(7); // convert int to Month (unchecked)

         //Month bad = 9999;  // error: can't convert an int to a Month
         f(4);
         f(99);               // run-time error: bad month
      }
   catch (exception& e) {
      cerr << "error: " << e.what() << '\n'; 
      return 1;
   }
   catch (...) {
      cerr << "Oops: unknown exception!\n"; 
      return 2;
   }

//------------------------------------------------------------------------------
