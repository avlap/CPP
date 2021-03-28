#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
	vector<string> name;
	//vector<double> age;
	
	//void read_names(Name_pairs& np, string name);
	//void read_ages();
	//void print();
	//void sort();

};




int main () 
{
	Name_pairs np;
	np.name = {"dirk"};
	cout << np.name[0] << '\n';
	
}


