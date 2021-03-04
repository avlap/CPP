
#include "../include/std_lib_facilities.h"

void sum_integers(int x, int y)
{
	//funtion for calculating sum from entered integers
	//exercises chapter 5
	
	cout << "Please enter the number of values you want to sum: \n";
	cin >> x; //enter number from console

	vector<int>integers;
	cout << "Please enter some integers (press '|' to stop): \n";
	for(y; cin >> y;)
		integers.push_back(y); //add integers to a vector

	if(x>integers.size()) error("You didn't enter enough integers!\n"); //if there are not enough integers, error

	int sum = 0;
	for(int i =0; i<x; ++i) 
		sum +=integers[i]; //calculate the sum


	cout << "The sum of the first " << x << " numbers is: " << sum << '\n'; //print out the sum

}


int main()
{
	int x, y;
 	sum_integers(x, y);

}


