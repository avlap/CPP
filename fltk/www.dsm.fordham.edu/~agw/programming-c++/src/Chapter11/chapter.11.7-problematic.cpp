
//
// This is example code from Chapter 11.7 "Using non-standard separators" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------

int main()
{
   string line;
   getline(cin,line);            // read into line
   for (char& ch: line)  // replace each punctuation character by a space 
      switch(ch) {
      case ';': case '.': case ',': case '?': case '!':
         ch = ' ';
      }

   stringstream ss{line};        // make an istream ss reading from line
   vector<string> vs;
   string word;
   while (ss>>word)            // read words without punctuation characters
      vs.push_back(word);
   for (string s: vs)
      cout << s << endl;
}

//------------------------------------------------------------------------------
