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
		int h = rand() % 24;
		double t = rand() % 45; //gives integers, 0 - 45 C?
		r.push_back(Reading{h, t});
	}

}

//write to file
void write_to_file_raw(const vector<Reading>& r, const string& t)
{
	
	ofstream ost {t};
	if(!ost) error("can't open outputfile ", t);

	for(int i=0; i <r.size(); ++i) 
		ost << '(' << r[i].hour << ','
			<< r[i].temperature << ")\n";

}

istream& operator>>(istream& is, vector<Reading>& rr)
//read Readings from file
//page 365
{
	int h;
	double t;
	char ch0, ch1, ch2;
	is>>ch0>>h>>ch1>>t>>ch2;
	if(!is) return is;
	if(ch0!='('||ch1!=','||ch2!=')') {
		is.clear(ios_base::failbit);
		return is;
	}

	rr.push_back(Reading{h,t});
	return is;
}


void calculate_mean(const vector<Reading>& r)
{
	double sum;
	for(Reading x:r)
		sum += x.temperature;

	double mean = sum/r.size();

	cout << "Mean: " << mean << '\n';
}



int main()
{

	//string oname_raw = "raw_temps";
	string oname_new = "new_temps";

	//vector<Reading>readings;
	vector<Reading>rr;
	//is >> rr;
	//make_temps(readings);
	write_to_file_raw(readings, oname_new);

}
