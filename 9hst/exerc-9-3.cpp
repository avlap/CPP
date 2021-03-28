#include "../include/std_lib_facilities.h"

class Name_pairs {
	public:
		vector<string> name;
		vector<double> age;

		void read_names();
		void read_ages();
		//void print();
		void sort_now();
	private:

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
	vector<string>name_orig = name;
	vector<double>age_orig = age;
	//sort(name_new);
	sort(name.begin(), name.end());


	for(int i =0; i < name.size(); ++i) {
		for(int j=0; j < name.size(); ++j) {
			if(name[j] == name_orig[i]) age[j] = age_orig[i];
		}
	}
}

//void Name_pairs::print()
iostream& operator<<(ostream& os, Name_pairs np)
{
	//for(string x:name)
	//		cout << x << '\n';
	for(int i=0; i < np.name.size(); ++i)
		return os << np.name[i] << '\t' << np.age[i] << '\n';
}

int main () 
{
	Name_pairs np;	
	np.read_names();
	np.read_ages();
	np.sort_now();
	print(np);
}


