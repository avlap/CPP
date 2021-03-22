#include "../include/std_lib_facilities.h"

void read_names()
{
	//string name0, name1, name2, name3, name4;
	//string name;
	//double age0, age1, age2, age3, age4;
//	double age;
	
	vector<string> names;
	vector<double>ages;

	vector<string>names_orig;
	vector<double>ages_orig;

	cout << "Please enter names: \n";
	///while(cin) {
	for(string temp; cin>>temp;)
		names.push_back(temp);

	int length = names.size();

	cout << "Please enter " << length << " names: \n";

	for(double temp; cin>>temp;)
		ages.push_back(temp);

	if(names.size() != ages.size()) error("Amount of age numbers doesn't match, names");

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


