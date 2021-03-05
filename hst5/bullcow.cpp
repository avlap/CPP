#include "../include/std_lib_facilities.h"

void bullcow()
{

	int bull=0;
	int cow=0;
	int a, b, c, d;

	bool newgame = true;
	
	if(newgame) {
		a = randint(10);
		b = randint(10);
		c = randint(10);
		d = randint(10);
		newgame = false;
	}

	


	vector<int>numbers = {a,b,c,d};
	vector<int>guess_numbers(0);

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
	if(bull == 4)
		cout << "Four bulls! Congratulations!\n";
		newgame = true;

	


}

int main()
{

	bullcow();

}


