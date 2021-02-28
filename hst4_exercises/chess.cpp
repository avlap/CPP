#include "../include/std_lib_facilities.h"

int main ()
{
	int grain = 1;
	int totalgrain = 0;
	for(int square = 1; square <= 64;  ++square) {
		if (square > 1){
			grain = grain * 2;
			totalgrain += grain;
			if (totalgrain >= 1000)
				cout << "Square: " << square << '\t' << '\t' << "Grain: " << totalgrain << '\n';
		} else {
			totalgrain += grain;
		}

	}

}


