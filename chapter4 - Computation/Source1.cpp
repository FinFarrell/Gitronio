#include "std_lib_facilities.h"

int main()
{
	// 1 - while loop reading in two numbers and printing them out
	// 2 - add logic so prints out smaller value then larger value
	// 3 - logic so an equal number is accounted for 
	// 4 - change to doubles
	// 5 - add logic so that if numbers are within 1 then they are almost equal
	// 6 - change loop so it is continuous
	bool running = true;

	while (running){
		double num1;
		double num2;

		cout << "enter two numbers" << "\n";
		cin >> num1;
		cin >> num2;

		if (num1 - num2 < 1 || num2 - num1 < 1) {
			cout << "the larger number is  " << num2 << " and the smaller number is " << num1 <<  " but they are almost equal" << "\n";
		}
		else if (num1 - num2 < 0) {
			cout << "the larger number is  " << num2 << " and the smaller number is " << num1 << "\n";
		}
		else if (num1 == num2) {
			cout << "the number " << num1 << " is equal to " << num2 << "\n";
		}
		else {
			cout << "the larger number is  " << num1 << " and the smaller number is " << num2 << "\n";
		}

		string quit;
		cin >> quit;
		if (quit == "|") {
			running = false;
		}


	}
		
}