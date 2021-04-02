
#include "../include/std_lib_facilities.h"

//program that creates a file of data in the form of the temperature Reading type .
//raw_temps
//50 readings
struct Reading {
	int hour; //0-23
	double temperature;

};

void make_temps(vector<Reading>& r)
{
	for(int i =0; i <= 50; ++i) {
		double t = rand() % 100;
		r.push_back(Reading{i, t});
	}

}

//write to file
void write_to_file(const vector<Reading>& r, const string& t)
{
	
	ofstream ost {t};
	if(!ost) error("can't open outputfile ", t);

	for(int i=0; i <r.size(); ++i) 
		ost << '(' << r[i].hour << ','
			<< r[i].temperature << ")\n";

}


int main()
{
	string oname = "temps";
	vector<Reading>readings;
	make_temps(readings);
	write_to_file(readings, oname);

}
