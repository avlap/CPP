


#include "../include/std_lib_facilities.h"

int main()
{

	cout << "Please enter expression: ";
	int lval = 0;
	int rval;
	char op; //operator
	int res; //result
	cin>>lval>>op>>rval;

	if(op=='+')
		res = lval + rval;
	else if(op=='-')
		res = lval - rval;
	else
		error("We only know '+' and '-'");

	cout<<"Result: "<< res<<'\n';
	keep_window_open();
	return 0;



}

//Expression: a mathematical or logical symbol or a meaningful combination of symbols
//
//Term: In Algebra a term is either a single number or variable, or numbers and variables multiplied together. Terms are separated by + or − signs, or sometimes by divide.
//
//Primary: elementair?
