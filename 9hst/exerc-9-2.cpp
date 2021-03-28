#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
		vector<string> name;
		vector<double> age;

		void read_names();
		void read_ages();
		void print();
		//void sort();
};

void Name_pairs::read_names()
{
	cout << "Names: \n";
	for(string tmp; cin>>tmp;){
		if(tmp=="q") break;
		name.push_back(tmp);
	}
}

void Name_pairs::read_ages()
{
	cout << "Enter ages: \n";
	for(int i=0; i<name.size(); ++i) {
		cout << name[i] << ": \n";
		for(double d; cin>>d;)
			age.push_back(d);
	}
}

void Name_pairs::print()
{
	//for(string x:name)
	//		cout << x << '\n';
	for(int i=0; i < name.size(); ++i)
		cout << name[i] << '\t' << age[i] << '\n';
}

int main () 
{
	Name_pairs np;	
	np.read_names();
	np.read_ages();
	np.print();
}


