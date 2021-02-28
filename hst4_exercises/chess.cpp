#include "../include/std_lib_facilities.h"

int main ()
{
	double grain = 1.0;
	double totalgrain = 0.0;
	for(int square = 1; square <= 64;  ++square) {
		if (square > 1){
			grain = grain * 2;
			totalgrain += grain;
			cout << "square: " << square << '\t' << "grain: " << grain << '\t' << '\t' << "totalgrain: " << totalgrain << '\n';
		} else {
			totalgrain += grain;
			cout << "square: " << square << '\t' << "grain: " << grain << '\t' << '\t' << "totalgrain: " << totalgrain << '\n';
		}

	}

}


