#include "../include/std_lib_facilities.h"




int main()
{
	//bool = is_ok = false;
	//read words into a string vector
	vector<string> s;
	for(string tmp_s; cin >>tmp_s;) 
		s.push_back(tmp_s);

	for(int i=0; i < s.size(); ++i) {
		switch(s[i]) {
			case 'the':
				if(s[i+1] = is_noun()) {
					sentence = ok;
				else
					sentence != ok;
				}
				break;
			case 'fly': 'swim':
					if (s[i-1] != is_noun()) {
						sentence = ok;
					else
						sentence != ok;
					}
				break;
			case 'bird': 'fish':
					if (s[i+1] != is_verb()) {
						sentence != ok;
					else
						sentence = ok;
					}
				break;
			case 'and': 'or': 'but':
						if (s[i +1] == is_sentence())

		}
	}


	for(string x:s)
		cout << x << ' ';
	
	cout << '\n';

	
}

//The birds fly and fish swim .
