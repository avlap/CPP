
#include "../include/std_lib_facilities.h"

void bullcow()
{

	vector<int>numbers = {5,2,7,1};
	vector<int>guess_numbers;
	//int g;

	cout << numbers.size() << '\n';

	cout << "Enter 4 numbers please: \n";
	//for(int i =0; i < guess_numbers.size(); ++i) 
	//for(int i = 0; i < 4; ++i)
	for(int g; cin >> g;)
		guess_numbers.push_back(g);

	if(guess_numbers.size() -1 > numbers.size()) error("You entered more then 4 values!\n");
	//why -1?
//	cout << guess_numbers.size() << '\n';

	if(numbers == guess_numbers)
		cout << "Congrats!\n";
	else
		cout << "not equal!\n";

	for(int x:numbers)
		cout << x << '\n';

	cout << "guess_numbers: \n";

	for(int x:guess_numbers)
		cout << x << '\n';


}

int main()
{

	bullcow();

}


