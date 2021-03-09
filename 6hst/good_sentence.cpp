#include "../include/std_lib_facilities.h"

int main()
{
	//read words into a string vector
	//vector<string> s;
	string s;
	for(char tmp_s; cin >>tmp_s;) 
		s.push_back(tmp_s);
	//}
	//
	//second test
	//string s;
	//cin >> s;

	//print out content of s
	//for(string x:s)
		cout << s << '\n';
}
