#include <iostream>

using namespace std;

int main()
{

	string a;	

	cin >> a;

	for(char& x:a) 
		x = toupper(x);

	cout << a << '\n';

	return 0;

}
