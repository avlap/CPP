#include "../include/std_lib_facilities.h"

//write function, takes a vector<string> returns a vector<int>, containing the numbers of characters in a string
//
//read each entry in the vector<string> as characters. (function?!)
//make a vector of ints with the lengts of
//

vector<string> makestring()
{

	vector<string>v;
	vector<int>s;

	for(string temp; cin>> temp;){
	    int x = temp.size();	
		//cout << x << '\n';
		v.push_back(temp);
		s.push_back(x);
	}

	for(string x:v)
		cout << x << '\n';

	for(int z:s)
		cout << z << '\n';


}

void num_char_in_string(vector<string> v)
{

	//for(string x:v)
	string x = v[0];
	char y;

		




}



int main ()
{
	//vector<string> s = {"one", "two", "three", "zeven"};

	//num_char_in_string(s);
	makestring();
}
