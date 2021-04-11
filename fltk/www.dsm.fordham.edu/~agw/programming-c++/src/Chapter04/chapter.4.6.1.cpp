
//
// This is example code from Chapter 4.6 "Vector" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{
   vector<int> v = {5, 7, 9, 5, 6, 8};
   vector<string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"} ;

   //philosopher[2] = 99;    // error: trying to assign an int to a string
   //v[2] = "Hume";          // error: trying to assign a string to an int

   vector<int> vi(6);              // vector of 6 ints, initialized to 0
   vector<string> vs(4);           // vector of 4 strings, initialized to ""
   vector<double> vd(1000,-1.2); // vector of 1000 doubles initialized to -1.2

   //vd[20000] = 4.7;        // run-time error
}

//------------------------------------------------------------------------------
