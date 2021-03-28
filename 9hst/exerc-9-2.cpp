#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
	vector<string> name;
	vector<double> age;
	
	void read_names(Name_pairs& np);
	//void read_ages();
	void print();
	//void sort();

};

void Name_pairs::read_names(Name_pairs& np)
{
	for(string tmp; cin>>tmp;)
		np.name.push_back(tmp);

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
	np.name = {"dirk"};
	np.print();
	//np.age = {18};
	//cout << np.name[0] << '\t' << np.age[0] << '\n';
	
}


