#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int>primes = {2, 3};
	int n;

	for(int i=0; i < 100; ++i) {
		if (i > 3) {
			for (int j =0; j < i/2; ++j) {
				if (i / primes[j] != 0) {
					primes.push_back(i);
				}
				//write a function to check prime number
			}
		}
	}

	for (int i=0; i < primes.size(); ++i) {
		cout << primes[i] << '\n';
	}
}

