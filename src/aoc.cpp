#include <iostream>
#include <day1/Day1.h>

int main() {
	using namespace std;
	int day;
	cout << "Which day would you like to run? ";
	cin >> day;
	cout << "\n";

	try {
		switch(day){
		case 1:
			// Brackets are apparently necessary to allow a scope
			// for the variables here
		    {
				Day1 day1;
			}
			break;
		default:
			cout << "That day hasn't been implemented yet. Look up the code for more info on what is implemented." << endl;
			return -1;
		}
	}catch(const char *error){
		cerr << "Whoops: "
		     << error << endl;
		return -2;
	}
}
