
//
// This is example code from Chapter 4.6.3 "A numeric example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// read some temperatures into a vector
int main()
{
   vector<double> temps;         // temperatures
   for (double temp; cin>>temp;) // read into temp
      temps.push_back(temp);    // put temp into vector
   // ... do something ...
}

//------------------------------------------------------------------------------
