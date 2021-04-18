#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item total;

	if(cin >> total) {
		Sales_item trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				cout << total << '\n';
				total = trans; //total now refers to the next book
			}
		}
		cout << total << '\n';
	} else {
		cerr << "No data" << '\n';
		return -1;
	}
		return 0;
}
