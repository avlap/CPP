#include "../include/std_lib_facilities.h"
int main ()
{

	string previous = " ";
	string current;
	int repeated_words = 0;

	while (cin>>current){
		++repeated_words;

		if (previous == current)
			cout<< "repeated word "<<repeated_words<<": "<<current<<'\n';
		previous = current;
	}

}


