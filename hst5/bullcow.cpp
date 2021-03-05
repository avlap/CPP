
#include "../include/std_lib_facilities.h"

void bullcow()
{

	vector<int>numbers = {5,2,7,1};

	int g;
	vector<int>guess_numbers(4);
	cout << "Enter 4 numbers please: \n";
	//for(int i =0; i < guess_numbers.size(); ++i) 
	for(int x:guess_numbers)
		cin >> g; guess_numbers.push_back(g);

}

int main()
{

	bullcow();

}


