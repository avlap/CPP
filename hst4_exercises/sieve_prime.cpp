#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int>primes = {2};
	vector<int>not_primes;
	vector<int>temp_primes;
	vector<int>temp2_primes;

	int next_prime;
	bool not_prime = false;

	//first round of two's
	for(int i=primes[0]; i < 100; i+=primes[0]) {
		not_primes.push_back(i);
	}

	//could be primes. To select next prime or integer which is not in the list
	for(int i = (primes[0] + 1); i < not_primes.size(); ++i) {
		if(i != not_primes[i])
			temp_primes.push_back(i);
		primes.push_back(i);
		i = not_primes.size();
	}

	//second round of thirds
	next_prime = primes[primes.size() - 1];
	for(int i = next_prime; i < 100; i+=next_prime) {
		if (i > next_prime)
			not_primes.push_back(i);
	}


	//	next_prime = temp_primes[0] +1;
	//copy next round
	next_prime = (primes[(primes.size() -1)] +1);
	for(int i = next_prime; i < not_primes.size(); ++i) {
		for (int j = next_prime ; j < not_primes.size(); ++j) { 
			if(i != not_primes[j])
				temp_primes.push_back(i);
			primes.push_back(i);
			i = not_primes.size();
			j = not_primes.size();
		}
	}


	for(int i =0; i < primes.size(); ++i)
		cout << "primes: " << primes[i] << '\t' << "not_primes: " << not_primes[i] << '\n';

	//	sort(not_primes);

	//	for( int i =0; i < not_primes.size(); ++i)
	//		cout << not_primes[i] << '\n';

}



