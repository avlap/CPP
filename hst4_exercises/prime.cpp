#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int> primes = {2};
	int n;

	for(int i=3; i < 100; ++i) {
		n = i;
		for (int j =0; j < primes.size(); ++j) {
			if (n % primes[j] == 0) {
				primes.push_back(n);
			}
			//write a function to check prime number
		}
	}

	for (int i=0; i < primes.size(); ++i) {
		cout << primes[i] << '\n';
	}
}

