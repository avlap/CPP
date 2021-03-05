#include "../include/std_lib_facilities.h"

bool bullcow()
{

	bool gameon = true;
	

//	int bull = 4;
//	if(bull >= 4){
//		gameon = true;
//		bull = 0;
//	} else
//		gameon = false;

	
//	int bull = 4;	
	if(gameon) {
		int a, b, c, d;
		a = randint(10);
		b = randint(10);
		c = randint(10);
		d = randint(10);
		int bull=0;
		int cow=0;
		vector<int>numbers = {a,b,c,d};
		vector<int>guess_numbers;
		gameon = false;
	}

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

	//check for bulls and cows
	for(int i=0; i < numbers.size(); ++i) {
		for(int j=0; j < numbers.size(); ++j) {
			if(i == j){
				if(guess_numbers[i] == numbers[j]) ++bull;
			} else {
				if(guess_numbers[i] == numbers[j]) ++cow;
			}
		}
	}

	//Print the amount of cows and bulls
	cout << "Cow: " << cow << " Bull: " << bull << '\n';	

	//Check if 4 bulls
	if(bull == 4) {
		cout << "Four bulls! Congratulations!\n";
		gameon = true;
	}

	
	return gameon;

}

int main()
{

	bullcow();

}


