#include "std_lib_facilities.h"

int main()
{
	// exercise 1 - miles to km converter
	float miles;
	float km;
	float conversion = 1.609;

	cout << "enter miles ";
	cin >> miles; 
	km = miles * conversion;
	cout << "That in kilometers is " << km << "km";

}

