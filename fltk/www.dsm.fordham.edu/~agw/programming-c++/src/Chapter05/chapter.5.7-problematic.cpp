
//
// This is example code from Chapter 5.7 "Logic Errors" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{
   vector<double> temps; // temperatures 

   double sum = 0;
   double high_temp = 0;
   double low_temp  = 0;

   for (double temp; cin>>temp;)      // read and put into temps
      temps.push_back(temp);

   for (int x: temps) {
      if (x > high_temp) high_temp = x;  // find high
      if (x < low_temp)  low_temp  = x;  // find low
      sum += x;      // compute sum
   }

   cout << "High temperature: "    << high_temp        << endl;
   cout << "Low temperature: "     << low_temp         << endl;
   cout << "Average temperature: " << sum/temps.size() << endl;
}

//------------------------------------------------------------------------------
