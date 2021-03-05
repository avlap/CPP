
#include "../include/std_lib_facilities.h"

void sum_doubles(double x, double y)
{
	//funtion for calculating sum from entered integers
	//exercises chapter 5
	
	cout << "Please enter the number of values you want to sum: \n";
	cin >> x; //enter number from console

	vector<double>doubles;
	cout << "Please enter some numbers (press '|' to stop): \n";
	for(y; cin >> y;)
		doubles.push_back(y); //add integers to a vector

	if(x>doubles.size()) error("You didn't enter enough numbers!\n"); //if there are not enough integers, error

	double sum = 0;
	for(int i =0; i<x; ++i) 
		sum +=doubles[i]; //calculate the sum

	//calculate difference adjacent values and store them in a vector
	vector<double>differences;
	for(int i = 1; i < doubles.size(); ++i){
		double difference = abs(doubles[i] - doubles[i-1]);
		 differences.push_back(difference);
	}


	cout << "The sum of the first " << x << " numbers is: " << sum << '\n'; //print out the sum

	cout << "Differences: \n"; 
	for(double x:differences)
		cout <<  x << ", "; 

	cout << '\n';


}


int main()
{
	double x, y;
 	sum_doubles(x, y);
	

}


