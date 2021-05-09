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
	// 8 - reject illegal units such as gallons
	// 9 - keep sum of values and print it all out when the program ends

	bool running = true;
	double topNum{};
	double smallNum{};
	vector <double> numList = {};

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
		else if (unit == "cm") {
			
		}
		else {
			cout << "please enter a correct unt (cm, ft, in or m)";
		}

		numList.push_back(currentNum);

		if (currentNum > topNum) {
			cout << "the larger number is  " << currentNum << " the previous largest number was " << topNum << "\n";
			topNum = currentNum;
		}
		else if (currentNum == topNum) {
			cout << "the number " << currentNum << " is equal to " << topNum << "\n";
		}
		else if (currentNum < smallNum) {
			smallNum = currentNum;
		}
		else {
			cout << "the number you entered, " << currentNum << ", is smaller than " << topNum << "but bigger than "<< smallNum <<"\n";
		}

		string quit;
		cout << "press | to quit " << "\n";
		cin >> quit;
		if (quit == "|") {

			double addedNums{};
			for (int i = 0; i < size(numList); ++i) {
				addedNums += numList[i];
			}

			cout << "the highest number you entered was " << topNum << "\n";
			cout << "the smallest number you entered was " << smallNum << "\n";
			cout << "you entered " << size(numList) << "numbers" << "\n";
			cout << "the total of your added numbers in cm was " << addedNums << "\n";
			running = false;
		}


	}
		
}