#include "../include/std_lib_facilities.h"


double oppervlakte(double x, double y)
{
	if(x < 0 || y < 0) error("negative value");	
	return x*y;
}

char ask_user(string question)
{
	cout << question << "Yes or no!\n";
	string answer = " ";
	cin >> answer;
	if(answer == "y" || answer == "yes") return 'y';
	if(answer == "n" || answer == "no") return 'n';
	return 'b';
}



int main ()
{

	double x = 1.3;
	double y = 2.5;
	double oppervlak = oppervlakte(x,y);
	char a;

	cout << oppervlak << '\n';

	a = ask_user("Ben je wel helemaal lekker?!\n");
	
	cout << a << '\n';
	
	
}

 
