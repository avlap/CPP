#include "../include/std_lib_facilities.h"

void read_names()
{
	string name0, name1, name2, name3, name4;
	double age0, age1, age2, age3, age4;
	vector<string> names;
	vector<double>ages;

	vector<string>names_orig;
	vector<double>ages_orig;

	"Please enter 5 names: \n";
	///while(cin) {
	cin >> name0 >> name1 >> name2 >> name3 >> name4;

	names.push_back(name0);
	names.push_back(name1);
	names.push_back(name2);
	names.push_back(name3);
	names.push_back(name4);

	cout << "Enter the age of the persons: \n";

	cin >> age0 >> age1 >> age2 >> age3 >> age4;

	ages.push_back(age0);
	ages.push_back(age1);
	ages.push_back(age2);
	ages.push_back(age3);
	ages.push_back(age4);

	names_orig = names;		
	ages_orig = ages;

	sort(names.begin(), names.end());

	for(int i =0; i < names.size(); ++i) {
		for(int j=0; j < names.size(); ++j) {
			if(names_orig[j] == names[i]) ages[i] = ages_orig[j];
		}
	}

	for(int i=0; i < ages.size(); ++i)
		cout << names[i] << ':' << ages[i] << '\n';
}


int main()
{
	read_names();
}


