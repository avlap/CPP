#include "../include/std_lib_facilities.h"

bool is_noun(string s)
{
	if(s == "birds" || s == "fish") 
		return true;
	else
		return false;
	

}

bool is_verb(string s)
{
	if(s == "fly" || s == "swim") 
		return true;
	else
		return false;
	

}


int main()
{
	bool sentence = false;
	//read words into a string vector
	vector<string> s;
	for(string tmp_s; cin >>tmp_s;) 
		s.push_back(tmp_s);

	for(int i=0; i < s.size(); ++i) {
		switch(s[i]) {
			case "the":
				if(is_noun(s[i+1])) {
					sentence = true;
				else
					sentence = false; error("sentence is not OK");
				}
				break;
			case "fly": "swim":
					if !(is_noun(s[i-1])) {
						sentence = true;
					else
						sentence = false; error("sentence is not OK");
					}
				break;
			case "birds": "fish":
					if !(is_verb(s[i+1] )) {
						sentence = false; error("sentence is not OK");

					else
						sentence = true;
					}
				break;
			case "and": "or": "but":
				break;
					//	if (s[i +1] == is_sentence())
			default:
						error("wrong word");

		}
	}


	if(sentence)
		cout << "Sentence is OK!\n";


	
}

//The birds fly and fish swim .
