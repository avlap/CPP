#include "../include/std_lib_facilities.h"




int main()
{
	//bool = is_ok = false;
	//read words into a string vector
	vector<string> s;
	for(string tmp_s; cin >>tmp_s;) 
		s.push_back(tmp_s);



	for(string x:s)
		cout << x << ' ';
	
	cout << '\n';

	
}

//The birds fly and fish swim .
