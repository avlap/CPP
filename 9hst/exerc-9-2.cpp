#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
	vector<string> name;
	vector<double> age;
	void read_names();
	void read_ages();
	void print();
	void sort();

};

void Name_pairs::read_names()
{
	cout << "Enter names: " << '\n';
	for(string tmp; cin>>tmp;)
		name.push_back(tmp);
}

void Name_pairs::print()
{
	for(string x:name)
		cout << x << '\n';
}


int main () 
{

}
