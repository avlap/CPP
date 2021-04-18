#include <iostream>

using namespace std;

int main()
{

	string a;	
	while(getline(cin, a)) {
	for(char x:a)
		cout << x << '\n';
		}

	return 0;

}
