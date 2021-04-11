
//
// This is example code from Chapter 18.2.1 "Initialization" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>

// using namespace std;
using std::cout;
using std::copy;
using std::initializer_list;

//------------------------------------------------------------------------------

class vector {
   int sz;
   double* elem;
public:
   vector(int s)     // constructor (s is the element count)
      :sz{s}, elem{new double[sz]} // uninitialized memory for elements
      {
         for (int i = 0; i < sz; i++) elem[i] = 0.0;  // initialize
      }

   ~vector()                            // destructor
      { delete[] elem; }                // deallocates memory

   vector(initializer_list<double> lst)  // initializer-list constructor
       // uninitialized memory for elts
       :sz{static_cast<int>(lst.size())}, elem{new double[sz]} 
      {
         copy(lst.begin(), lst.end(), elem); // initialize (using
         // std::copy(); Sect. B.5.2)
      }
// ...
};

//------------------------------------------------------------------------------

int main()
{
   vector v1 = {1.2,7.89,12.34};  // works!
}

//------------------------------------------------------------------------------
