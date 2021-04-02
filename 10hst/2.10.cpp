#include "../include/std_lib_facilities.h"

//program that creates a file of data in the form of the temperature Reading type .
//raw_temps
//50 readings
struct Reading {
	int hour; //0-23
	int temperature;

};

void make_temps(vector<Reading>& r)
{
	for(int i =0; i <= 50; ++i) {
		int h = rand() % 24;
		int t = rand() % 45; //gives integers, 0 - 45 C?
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

istream& operator>>(istream& is, Reading& r)
{
	char ch0;
	if(is>>ch0 && ch0!='(') {
		is.unget();
		is.clear(ios_base::failbit);
		return is;
	}

	char ch1, ch2;
	int h;
	int t;
	is >> h >> ch1 >> t >> ch2;
	if(!is||ch1!=','||ch2!=')') error("bad reading");
	r.hour = h;
	r.temperature = t;
	return is;
}


void calculate_mean(const vector<Reading>& r)
{
	int sum;
	for(Reading x:r)
		sum += x.temperature;

	int mean = sum/r.size();

	cout << "Mean: " << mean << '\n';
}



int main()
{
	//open input file

	//string oname_raw = "raw_temps";
	string iname = "raw_temps";

	ifstream ifs {iname};
	if(!ifs) error("Can't open input file", iname);

	ifs.exceptions(ifs.exceptions()|ios_base::badbit);

	//open output file
	string oname = "new_temps";
	//ofstream ofs {oname};
	//if(!ofs) error("can't open output file", oname);

	//vector<Reading>readings;
	vector<Reading>rr;
	while(true) {
		Reading r;
		if(!(ifs>>r)) break;
		rr.push_back(r);
	}

	//is >> rr;
	//make_temps(readings);
	//read readings
	
	write_to_file_raw(rr, oname);

}
