#include "../include/std_lib_facilities.h"

string first_name;
string friends_name;
char friend_sex = 0;
int age;

int main ()
{

	cout << "Please enter your first name (followed by 'enter'):\n";
	//string first_name;
	cin >> first_name;
	cout << "Your friends name please:\n";
	cin >> friends_name;
	cout << "What is the sex of your friend (m for male, f for female):\n";
	cin >> friend_sex;
	cout << "What is the age of your friend:\n";
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("You're kidding!");

	cout<<"Dear "  << first_name <<",\n"
		<< '\n'
		<< "How are you? I'm fine, but I do miss you. How is your holiday in France? I'm really sorry I couldn't join."
		<< " Have you seen " << friends_name << " lately?";

	if (friend_sex == 'm') {
		cout << " If you see " << friends_name << ", please ask him to call me.\n";
	} else if (friend_sex == 'f') {
		cout << " If you see " << friends_name << ", please ask her to call me.\n";
	}
	cout << "I hear you just had a birthday and you are " << age << " old. ";

	if (age < 12)
		cout << "Next year you'll be " << ++age << ".\n";
	else if (age == 17)
		cout << "Next year you'll be able to vote!\n";
	else if (age > 70)
		cout << "I hope you enjoy retirement!\n";
	cout << '\n' << "Yours sincerely,\n\n\n\n\n";

}
