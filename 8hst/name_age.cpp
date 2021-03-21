#include "../include/std_lib_facilities.h"

void read_names()
{
	string name0, name1, name2, name3, name4;
	vector<string> names;

	"Please enter 5 names: \n";
	///while(cin) {
		cin >> name0 >> name1 >> name2 >> name3 >> name4;


	names.push_back(name0);
	names.push_back(name1);
	names.push_back(name2);
	names.push_back(name3);
	names.push_back(name4);


	cout << "names size: " << names.size() << '\n';

	if(!(names.size() == 5)) error("Please enter 5 names");

	for(string x:names)
		cout << x << '\n';
	
	//for(string tmp_name; cin >> tmp_name;)
	//	name.push_back(tmp_name);

}


int main()
{
	read_names();


}


