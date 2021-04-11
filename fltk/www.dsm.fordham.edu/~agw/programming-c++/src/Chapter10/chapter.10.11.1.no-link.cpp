
//
// This is example code from Chapter 10.11.1 "In-memory representation" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <vector>

using namespace std;

//------------------------------------------------------------------------------

const int not_a_reading = -7777;    // less than absolute zero
const int not_a_month = -1;

//------------------------------------------------------------------------------

struct Day {
   vector<double> hour {vector<double>(24, not_a_reading)};
};

//------------------------------------------------------------------------------

struct Month {               // a month of temperature readings
   int month {not_a_month};  // [0:11] January is 0
   vector<Day> day;      // [1:31] one vector of readings per day
};

//------------------------------------------------------------------------------

struct Year {             // a year of temperature readings, organized by month
   int year;             // positive == A.D.
   vector<Month> month {12};  // [0:11] January is 0
};

//------------------------------------------------------------------------------
