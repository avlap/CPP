
#include "../include/std_lib_facilities.h"

int main ()
{
	vector<double> distances;
	for (double temp; cin>>temp;)
		distances.push_back(temp);

	double sum = 0;
	for (double x : distances) sum += x;

	sort(distances);
	double smallest = distances[0];
	double largest = distances[distances.size()-1];
	double mean = sum/distances.size();

	cout << "Average distance: " << mean << '\n';
	cout << "Smallest distance: " << smallest << '\n';
	cout << "Largest distance: " << largest << '\n';
	cout << "Total distance: " << sum << '\n';

//	cout << "Temps size: " << temps.size()/2 << '\n';
}

 
