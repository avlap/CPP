#include "../include/std_lib_facilities.h"

//write a program that read integers from a file, seperated by spaces and calculate the sum
//function that read integers
//report errors
//add integers to a vector?
//function which calculate the sum

void fill_vector(istream& ist, vector<int>& v, char terminator)
	//read integers from ist into v until we reach eof() or terminator
{
	ist.exceptions(ist.exceptions()|ios_base::badbit);

	for(int i; ist>>i;) v.push_back(i);
	if(ist.eof()) return; //fine we found the end of file

	//not good() and not bad() and not eof(), ist must be fail()
	ist.clear(); //clear stream state

	char c;
	ist>>c; //read a character, hopefully terminator
	if(c != terminator) {
		ist.unget();
		ist.clear(ios_base::failbit); // set the state to fail()
	}

}

int calculate_sum(const vector<int>& v)
{
	int sum=0;
	for(int x:v) sum += x;

	return sum;

}

int main()
{
	int sum;
	vector<int>numbers;
	string iname = "integers";

	ifstream ist {iname};
	fill_vector(ist, numbers, '|');
	//print_vector(numbers);
	sum = calculate_sum(numbers);
	cout << "Sum: " << sum << '\n';
}
