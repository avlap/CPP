
//
// This is example code from Chapter 17.4.5 "The null pointer" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//------------------------------------------------------------------------------

int main()
{
   double* p0 = nullptr;    // the null pointer

   if (p0 != nullptr) 
      {
         // consider p0 valid
      }

   if (p0)
      {
         // consider p0 valid; equivalent to p0!=0
      }
}

//------------------------------------------------------------------------------
