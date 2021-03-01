#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int>primes = {2};
	int n;
	bool not_prime = false;

	for(int i=3; i < 100; ++i) {
		for(int j=0; j < primes.size(); ++j) {
			if(i % primes[j] == 0) {
				not_prime = true;	
			}
		}

		if(not_prime == false) 
			primes.push_back(i);
		else
			not_prime = false;
	}

	for(int i=0; i < primes.size(); ++i) {
		cout << primes[i] << '\n';
	}
}

