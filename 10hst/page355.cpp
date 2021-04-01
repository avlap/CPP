int i=0;
cin>>i;
if(!cin) { //we only get here if an input operation failed
	if(cin.bad() error("cin is bad"); //stream corrupted: let's get out of here
			if(cin.eof()) {
			//no more input
			// this is often how we want a sequence of input operations to end
			}
			if(cin.fail()) { //stream encountered something unexpected
			cin.clear();
			//somehow recover
	}
}
