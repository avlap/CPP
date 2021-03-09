#include "../include/std_lib_facilities.h"


//class with names and values
class Name_value {
	public:
		string name;
		int value;

	private:

};

int main()
{

	//Name_value n = {"henk", 7};
	vector<Name_value> v = {{"henk", 7}, {"piet", 8}, {"Jo", 27}, {"Kees", 28}};

	for(int i =0; i < v.size(); ++i) {
		for(int j=0; j<v.size(); ++j)
			if(v[i].name == v[j].name) error("Same name");
	}

	//compare names and check if unique
	//

	//write out all the pairs on a line
	for(int x:v)
		cout << v[x].name << '\t' << v[x].value << '\n';

}


