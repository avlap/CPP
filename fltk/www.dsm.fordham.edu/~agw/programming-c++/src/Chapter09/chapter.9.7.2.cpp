
//
// This is example code from Chapter 9.7.2 "Copying" of 
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

// simple Date (use Month type):
enum class Month {
   jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
      };

class Date {
public:
   Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd) // check for valid date and initialize
      {
         // ...
      }

   friend ostream& operator<<(ostream& os, const Date& d)
      {
         return os << '(' << d.y << ',' << int(d.m) << ',' << d.d << ')';
      }

private:
   int   y; // year
   Month m;
   int   d; // day
};

//------------------------------------------------------------------------------

int main()
{
   Date holiday{1978, Month::jul, 4};     // initialization
   Date d2 = holiday;
   Date d3 = Date{1978, Month::jul, 4};

   holiday = Date{1978, Month::dec, 24};  // assignment
   d3 = holiday;

   cout << Date{1978, Month::dec, 24};
   return 0;
}

//------------------------------------------------------------------------------
