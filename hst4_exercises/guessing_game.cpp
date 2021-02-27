

#include "../include/std_lib_facilities.h"

int main ()
{
	int in_number;
	int out_number;
	cout "Please Enter a number between 1 and 100: \n";
	cin >> in_number;
	if (in_number > 50)
		out_number = 51;
		if (in_number > 75)
			out_number = 76;
			if (in_number > 87)
				out_number = 88;
				if (in_number > 94)
					out_number = 95;
					if (in_number > 97)
						out_number = 98;
						if (in_number > 99)
							out_number = 100;
						else if (in_number < 99)
							out_number = 98;
						else
							out_number = 99; 
					else if (in_number < 97)
						out_number = 95;
						if (in_number > 95)
							out_number = 96;
						else
							out_number = 95;
					else 
						out_number = 97;
				else if (in_number < 94)
					out_number = 88;
					if (in_number > 91)
						out_number = 92;
						if (in_number > 92)
							out_number = 93;
						else
							out_number = 92;
					else if (in_number < 91)
						out_number = 88;
						if (in_number > 89)
							out_number = 90;
						else if (in_number < 89)
							out_number = 88;
						else
							out_number = 89;
					else
						out_number = 91;
				else
					out_number = 94;

			else if (in_number < 87)
				out_number = 76;
			else
				out_number = 87;
		else if (in_number < 75)
			out_number = 51;
		else
			out_number = 75;
	else if (in_number < 50)
		out_number = 1;
	else
		out_number = 50;









	if(in_number >= 50)
		out_number = 50;
		if(in_number >= 75) 
			out_number = 75;
			if (in_number >= 87)
				out_number = 87;
				if (in_number => 94)
					out_number = 94;
					if (in_number >= 97)
						out_number = 97;
						if (in_number >= 98)
							out_number = 98;
							if (in_number >= 99)
								out_number = 99;
							else 
								out_number = 98;jkk
						else
							out_number = 97;
							if (in_number > 98)
								out_number = 99
					else
						out_number = 94;
				else
					out_number = 87;
					
			else
				out_number = 75;
		else
			out_number = 50;
	else
		out_number = 1;


}

 
