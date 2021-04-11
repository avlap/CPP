
//
// This is example code from Chapter 18.2 "Initialization" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>

using std::cout;
//using namespace std;

//------------------------------------------------------------------------------

class vector {
   int sz;
   double* elem;
public:
   vector(int s)                        // constructor
      :sz{s}, elem{new double[s]} { }   // allocates memory
   ~vector()                            // destructor
      { delete[] elem; }                // deallocates memory

   // ...
};

//------------------------------------------------------------------------------

int main()
{
   vector v1 = {1.2,7.89,12.34};  // won't work
}

//------------------------------------------------------------------------------
