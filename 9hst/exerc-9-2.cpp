#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
	vector<string> name;
	vector<double> age;
	
	void read_names();
	//void read_ages();
	void print();
	//void sort();

};

void Name_pairs::read_names()
{
	cout << "Names: \n";
	for(string tmp; cin>>tmp;)
		name.push_back(tmp);

	for(string x:name)
		cout << x << '\n';

}

void Name_pairs::print()
{
	cout << "hallo! \n";
}

void f()
{
	//Name_pairs np;

}


int main () 
{
	Name_pairs np;	
	np.read_names();
	//np.name = {"dirk"};
	//np.print();
	//np.age = {18};
	//cout << np.name[0] << '\t' << np.age[0] << '\n';
	
}


