#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int> primes = {2};

	int root = sqrt(8);
	cout << root << '\n';

	for (i = 2; i<100; ++i)
	{
		for (int n =2; i <= sqrt(n); ++n) {
			if (i % primes[n] != 0)
				primes.push_back(n);
	}

}	
//write a function to check prime number



