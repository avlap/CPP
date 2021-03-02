#include "../include/std_lib_facilities.h"

int main ()
{
	vector<double>distances;
	double sum, mean, large, small;

	for(double distance; cin >> distance;)
		distances.push_back(distance);


	for(double x:distances) sum+=x;

	mean = sum / distances.size();

	sort(distances);

	small = distances[0];
	large = distances[distances.size() - 1];

	for(double x:distances)	cout << x << '\n';

	cout << "Sum: " << sum << '\n';
	cout << "Mean: " << mean << '\n';
	cout << "Largest: " << large << '\n';
	cout << "Smallest: " << small << '\n';


}

 
