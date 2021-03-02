#include "../include/std_lib_facilities.h"

int main ()
{
	double a_val;
	double b_val;
	double c_val;
	double a_val1;
	double b_val1;
	double c_val1;
	double a_val2;
	double b_val2;
	double c_val2;

	double r_val=0.0;
	double val_3;
	


	cout <<  "ax² + bx + c = 0\n";
	cout << "Enter a, b and c: \n";
	cin >> a_val >> b_val >> c_val;
	cout << a_val << "x² + " << b_val << "x + " << c_val << " = 0\n";

	cout << "1. Divide each side by a\n";
	b_val1 = b_val / a_val;
	c_val1 = c_val / a_val;
	a_val1 = a_val / a_val;

//	r_val = r_val + abs(c_val1);

	cout << a_val1 << "x² + " << b_val1 << "x " << "+ " << c_val1 << " = " << r_val << '\n';
	
	cout << "2. Subtract the constant term c/a from both sides.\n";
//	a_val2 -=c_val1;
//	b_val2 -=c_val1;
	c_val2 = c_val1 - c_val1;
	
	//l_val =
	r_val -=c_val1;

	cout << a_val1 << "x² + " << b_val1 << "x + " << c_val2 << " = " << r_val << '\n';

	cout << "3. Add the square of one-half of b/a, the coefficient of x, to both sides. This completes the square, converting the left side into a perfect square.\n";

	val_3 = 0.5 * (b_val1);
	val_3 = val_3 * val_3;

	r_val = r_val + val_3;
	c_val2 = c_val2 + val_3;
	
	cout << a_val1 << "x² + " << b_val1 << "x + " << c_val2 << " = " << r_val << '\n';

	cout << "5. Produce two linear equations by equating the square root of the left side with the positive and negative square roots of the right side.\n";
}

 
