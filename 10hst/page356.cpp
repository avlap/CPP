// 1 2 3 4 5 *

void fill_vector(istream& ist, vector<int>& v, char terminator)
	//read integers from ist into v until we reach enf() or terminator
{
	for(int i; ist>>i;) v.push_back(i);
	if(ist.eof()) return; //fine we found the end of file.

	if(ist.bad()) error("ist is bad"); //stream corrupted; let's go out of here!
	if(ist.fail()) { //clean up the mess as best we can and report the problem
		ist.clear(); //clear stream state
					 //so that we can look for terminator
		char c;
		ist>>c; //read a character, hopefully terminator
		if(c != terminator) { //unexpected character
			ist.unget();  //put that character back
			ist.clear(ios_base::failbit); //set the state to fail();
		}
	}
}

// ist.exceptions(ist.exeptions()|ios_base::badbit);
//
// ignoring bad

