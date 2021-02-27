
#include "../include/std_lib_facilities.h"

int main ()
{
	vector<double> temps;
	for (double temp; cin>>temp;)
		temps.push_back(temp);

	double sum = 0;
	for (double x : temps) sum += x;
	cout << "Average temperature: " << sum/temps.size() << '\n';

	sort(temps);
	if (temps.size % 2 == 0) 
		cout << "Median temperature: " << temps[temps.size()/2] << '\n';
	else {
		double median = (temps[temps.size()/2] + temps[(temps.size()/2) + 1])/2.0;
		cout << "Median temperature: " << median << '\n';
	}
	
//	cout << "Temps size: " << temps.size()/2 << '\n';
}

 
