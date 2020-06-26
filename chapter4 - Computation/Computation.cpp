#include "std_lib_facilities.h";

int main()
{
	// dril time, learnt about basic statements which is pretty simple and about vectors, essentially the same as arrays from python

	// Step 1 - while loop reading 2 ints and writing them
	// Step 2 and 3 - writing out the smaller value then the larger one, and checking if they are equal
	// Steo 4 - changing all to doubles
	// Step 5 - changed checks for similar nubmers and equal numbers
	// Step 6 - overhaul to make one double be added and that being checked for smallest and largest
	double a;
	double smallest = 10000000;
	double largest = 0;
	bool a_larger;
	cout << "enter 2 integers, then they will be printed, when you wish to exit, enter |" << "\n";
	while (cin >> a)
	{
		// basic logic see if the number is bigger or smaller
		if (a > largest)
		{
			cout << "largest so far, bigger than " << largest << "\n";
			largest = a;
		}
		else if (a < smallest)
		{
			cout << "smallest so far, smaller than " << smallest << "\n";
			smallest = a;
		}
		else
		{
			cout << "nothing special about this number";
		}
		


	}




}