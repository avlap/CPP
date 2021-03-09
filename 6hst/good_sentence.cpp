#include "../include/std_lib_facilities.h"

int main()
{
	//read words into a string vector
	vector<string> s;
	for(string tmp_s; cin >>tmp_s;) {
		if(tmp_s == "fish") error("fish"); 
		s.push_back(tmp_s);
	}

	//print out content of s
	for(string x:s)
		cout << x << '\n';
}
