#include "../include/std_lib_facilities.h"

double factorial(double f) 
{
	double factorial = f;
	for(int i = f -1; i >= 1; --i)
		f *= i;
	
	cerr << "factorial " << factorial << " -> " << f << '\n';

	return f;
}


double permutation(double a, double b) 
{
	double fact_a = factorial(a);
	double a_minus_b = (a-b); //can't be <= 0?
	double fact_a_minus_b = factorial(a_minus_b);
	double outcome = fact_a/fact_a_minus_b;

	return outcome;
}

double combination(double a, double b)
{
	double permu_a_b = permutation(a, b);
	double fact_b = factorial(b);
	double result = permu_a_b/fact_b;

	return result;
}

void permu_or_combi()
{
	char input;
	double a, b;
	double result;

	string welcome = "This application does permutations (p) or combinations (c). Please enter two values first, value 'a' and value 'b':\n";
	string c_or_p = "Do you want permuations 'p' or combinations 'c'? Please enter 'p' or 'c':\n";


	cout << welcome; 
	//should a > b?
	cin >> a >> b;
	cout << c_or_p;
	cin >> input;

	cerr << a << '\t' << b << '\t' << input << '\n';

	if(!a)
		error("Something went wrong when you entered value a");
	if(!b)
		error("Something went wrong when you entered value b");

	switch(input) {
		case 'p':
			result = permutation(a, b);
			break;
		case 'c':
			result = combination(a, b);
			break;
		default:
			error("You didn't enter 'p' or 'c'");

	}

	cout << "Result: " << result << '\n';

}



int main()
{

	permu_or_combi();

	return 0;

}
