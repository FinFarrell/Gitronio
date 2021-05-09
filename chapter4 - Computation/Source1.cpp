#include "std_lib_facilities.h"

int main()
{
	// 1 - while loop reading in two numbers and printing them out
	// 2 - add logic so prints out smaller value then larger value
	// 3 - logic so an equal number is accounted for 
	// 4 - change to doubles
	// 5 - add logic so that if numbers are within 1 then they are almost equal
	// 6 - change loop so it is continuous
	// 7 - add units (m, ft, in)
	bool running = true;
	double topNum{};

	while (running){
		double currentNum;
		string unit;

		cout << "enter a number" << "\n";
		cin >> currentNum;
		cout << "enter the unit" << "\n";
		cin >> unit;

		if (unit == "m") {
			currentNum *= 100;
		}
		else if (unit == "in") {
			currentNum *= 2.54;
		}
		else if (unit == "ft") {
			currentNum *= 30.48;
		}

		if (currentNum > topNum) {
			cout << "the larger number is  " << currentNum << " the previous largest number was " << topNum << "\n";
			topNum = currentNum;
		}
		else if (currentNum == topNum) {
			cout << "the number " << currentNum << " is equal to " << topNum << "\n";
		}
		else {
			cout << "the highest current number, " << topNum << ", was higher than " << currentNum << "\n";
		}

		string quit;
		cout << "press | to quit " << "\n";
		cin >> quit;
		if (quit == "|") {
			running = false;
		}


	}
		
}