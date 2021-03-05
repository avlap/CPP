
#include "../include/std_lib_facilities.h"

void bullcow()
{

	vector<int>numbers = {5,2,7,1};
	vector<int>guess_numbers;

	cout << numbers.size() << '\n';

	cout << "Enter 4 different numbers please, followed with a '|' sign: \n";

	for(int g; cin >> g;) {
		if(g < 0 || g > 9) error("Only numbers between 0 - 9 please!\n");
		guess_numbers.push_back(g);
	}
	

	if(guess_numbers.size()  > numbers.size()) error("You entered more then 4 values!\n");

	for(int i=1; i < guess_numbers.size(); ++i)
		for(int x:guess_numbers)
			if(guess_numbers[i] == guess_numbers[x]) error("You should not enter the same value twice!\n");

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


