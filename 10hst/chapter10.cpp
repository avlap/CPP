#include "../include/std_lib_facilities.h"

cout << "Please enter input file name: ";
string iname;
cin>> iname;
ifstream ist {iname}; //ist is an input stream for the file named name
if(!ist) error("can't open input file ");


