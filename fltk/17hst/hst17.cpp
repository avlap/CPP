#include "Simple_window.h"
#include "Graph.h"

void sizes(char ch, int i, int* p)
{
	cout << "size char" << sizeof(char) << ' ' << sizeof(ch) << '\n';
	cout << "size char" << sizeof(int) << ' ' << sizeof(i) << '\n';
	cout << "size char" << sizeof(int*) << ' ' << sizeof(p) << '\n';
}

int main()
{
	char c = 'c';
	int i = 1;
	int* p = &i;
	sizes(c, i, p);
}

