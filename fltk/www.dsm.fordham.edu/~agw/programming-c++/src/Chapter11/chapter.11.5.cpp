
//
// This is example code from Chapter 11.5 "Line-oriented input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

//------------------------------------------------------------------------------

using namespace std;

int main()
{
   string name;
   cout << "Name? ";
   cin >> name;            // input: Dennis Ritchie
   cout << name << '\n';   // output: Dennis

   cout << "Name? ";
   getline(cin,name);      // input: Dennis Ritchie
   cout << name << '\n';   // output: Dennis Ritchie

   string first_name;
   string second_name;
   stringstream ss{name};
   ss>>first_name;         // input Dennis
   ss>>second_name;        // input Ritchie
   cout << first_name << "|" << second_name << endl;

   {
      string command;
      cout << "Enter a line: ";
      getline(cin,command);   // read the line

      stringstream ss{command};
      vector<string> words;
      for (string s; ss >> s; ) 
         words.push_back(s);    // extract the individual words
      for (string s: words)
         cout << s << "|";
      cout << endl;
   }
}

//------------------------------------------------------------------------------
