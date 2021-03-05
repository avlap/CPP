
#include "../include/std_lib_facilities.h"

void bullcow()
{

	vector<int>numbers = {5,2,7,1};
	vector<int>guess_numbers;

	//cout << numbers.size() << '\n';

	cout << "Enter 4 different numbers please, followed with a '|' sign: \n";

	for(int g; cin >> g;) {
		if(g < 0 || g > 9) error("Only numbers between 0 - 9 please!\n");
		guess_numbers.push_back(g);
	}

	//check for too many numbers
	if(guess_numbers.size()  > numbers.size()) error("You entered more then 4 values!\n");

	cout << "Numbers size: " << numbers.size() << '\n';
	cout << "Guess numbers size: " << guess_numbers.size() << '\n';

	//check for the same numbers 
	// try the for range loop!
	for(int i=0; i < guess_numbers.size(); ++i) {
		for(int j=0; j <guess_numbers.size(); ++j){
			if (i != j) 
				if (guess_numbers[i] == guess_numbers[j]) error("You should not enter the same value twice!\n");

		}
	}


	int bull=0;
	int cow=0;
	for(int i=0; i < numbers.size(); ++i) {
		for(int j=0; j < numbers.size(); ++j) {
			if(i == j){
				if(guess_numbers[i] == numbers[j]) ++bull;
			} else {
				if(guess_numbers[i] == numbers[j]) ++cow;
			}
		}
	}

	if(bull == 4)
		cout << "Four bulls! Congratulations!\n";


	//}
	//for(int j=0; j < guess_numbers.size(); ++j)
	//if(guess_numbers[i] == numbers[i]) ++bull;
	//	else if (guess_numbers[i] != numbers[i]) {
	//		if(guess_numbers[j] == numbers[i]) ++cow;
	//	} else
	//		++wrong;
	//	}


cout << "Cow: " << cow << " Bull: " << bull << '\n';	
}

int main()
{

	bullcow();

}


