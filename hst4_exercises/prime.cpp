#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int> primes = {2};
	int n;

	for (int i = 2; i<100; ++i)
		n = i;
	{
		for (int i =0; i <= n; ++i) {
			if (n % primes[i] != 0)
				primes.push_back(n);
		}
		cout << primes[n] << '\n';
	}

}	
//write a function to check prime number


