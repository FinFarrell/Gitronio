#include "std_lib_facilities.h";

int main()
{
	// dril time, learnt about basic statements which is pretty simple and about vectors, essentially the same as arrays from python

	// Step 1 - while loop reading 2 ints and writing them
	// Step 2 and 3 - writing out the smaller value then the larger one, and checking if they are equal
	// Steo 4 - changing all to doubles
	// Step 5 - changed checks for similar nubmers and equal numbers
	double a;
	double b;
	bool a_larger;
	cout << "enter 2 integers, then they will be printed, when you wish to exit, enter |" << "\n";
	while (cin >> a, cin>>b)
	{
		// basic logic to print them out in order of size
		if (a < b) 
		{
			cout << a << "\n" << b << "\n";
			a_larger = false;
		}
		else if (b < a)
		{
			cout << b << "\n" << a << "\n";
			a_larger = true;
		}

		// checking if they are similar
		if (a_larger && a - b <= 1.0 && a-b != 0 || !a_larger && b - a <= 1.0 && b-a != 0)
		{
			cout << "SIMILAR NUMBERS" << "\n";
		}
		else if (a - b == 0)
		{
			cout << "EQUAL" << "\n";
		}

	}




}