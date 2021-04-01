
#include "../include/std_lib_facilities.h"

struct Reading { //temperature reading
	int hour; //hour after midnight
	double temperature; //in fahrenheit

};

int main()
{
	cout << "Please enter input file name: ";
	string iname;
	cin>>iname;
	ifstream ist {iname}; //ist reads from the file named iname
	if(!ist) error("Can't open input file ", iname);

	string oname;
	cout<<"Please enter name of output file: ";
	cin>>oname;
	ofstream ost {oname}; //ost writes t o a file named oname
	if(!ost) error("Can't open output file ", oname);

	vector<Reading>temps; //store the readings here
	int hour;
	double temperature;
	while(ist>>hour>>temperature) {
		if(hour<0||23<hour) error("hour out of range");
		temps.push_back(Reading{hour,temperature});
	}

	for(int i=0; i<temps.size(); ++i)
		ost<<'('<<temps[i].hour<<','
			<<temps[i].temperature<<")\n";

}

