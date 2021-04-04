#include "../include/std_lib_facilities.h"

void print_column()
{
	cout << '|' << setw(8) << "Henk" << '|'<< "Oosterhuis" << '|'<< "20-02-1977" << "| \n";

}

void print_number(const double& nr)
{
	cout << nr << '\t' 
		<< fixed << nr << '\t'
		<< scientific << nr << '\t'
		<< defaultfloat << nr << "\t\n";
}

int main()
{
	const double number {1234.879866};
	print_number(number);
	print_column();
//	cout << "moi" << '\n';

}
