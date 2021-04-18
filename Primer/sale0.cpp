#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item item1, item2;
	//{0-201-78345-X,2,25.00};
	cout << "enter item1 and item2 \n";

	cin >> item1 >> item2; 

	cout << item1 + item2 << '\n';

	return 0;
}
