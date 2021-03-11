#include "../include/std_lib_facilities.h"

double factorial(int f) 
{
	int factorial = f;
	for(int i = f -1 ; i >= 1; --i)
		f *= i;
	
	cerr << "factorial " << factorial << " -> " << f << '\n';


}


double permutation(int a, int b) 
{

}

double combination(int a, int b)
{
	//x = permutation(a, b);

	//Pab / b!
}

int permu_or_combi()
{
	char input;
	int a, b;
	double outcome;

	cout << "This application does permutations (p) or combinations (c). Please enter two values first, value 'a' and value 'b': \n";
	cin >> a >> b;
	cout << "Do you want permuations 'p' or combinations 'c'? Please enter 'p' or 'c':\n";
	cin >> input;

	cerr << a << '\t' << b << '\t' << input << '\n';

	if(!a)
		error("Something went wrong when you entered value a");
	if(!b)
		error("Something went wrong when you entered value b");

	switch(input) {
		case 'p':
			outcome = permutation(a, b);
			break;
		case 'c':
			outcome = combination(a, b);
			break;
		default:
			error("You didn't enter 'p' or 'c'");

	}

}



int main()
{

	permu_or_combi();

	return 0;



}
