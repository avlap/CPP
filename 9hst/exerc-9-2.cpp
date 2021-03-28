#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
		vector<string> name;
		vector<double> age;

		void read_names();
		void read_ages();
		void print();
		void sort_now();
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
	for(int i=0; i<name.size(); ++i) 
		cout << name[i] << ": \t";
	//for(string x:name) {
	cout << '\n';

	for(double d; cin>>d;)
		age.push_back(d);
}

void Name_pairs::sort_now()
{
	//copy age
	//copy names
	//sort names
	//if names_orig == names_new -> ages_orig = ages_new
	vector<string>name_new = name;
	//sort(name_new);
	sort(name_new.begin(), name_new.end());

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


