#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int>primes = {2, 3};
	int n;
	int prime = 0;

	for(int i=0; i < 100; ++i) {
		if (i > 3) {
			for (int j =0; j < primes.size(); ++j) {
				if (i % primes[j] == 0) {
					prime = 1;	
				}
				//write a function to check prime number
			}
			if (prime == 0) {
				primes.push_back(i);
			} else
				prime = 0;

		}
	}

	for (int i=0; i < primes.size(); ++i) {
		cout << primes[i] << '\n';
	}
}

