
#include "../include/std_lib_facilities.h"

int main ()
{
	vector<int>numbers;

	while(true) {
		int n;
		for(int tmp; cin >> tmp;)
			numbers.push_back(tmp);
		if(!cin) break;
	}

	for(int x:numbers)
		cout << x << '\n';


}
