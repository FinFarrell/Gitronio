#include "std_lib_facilities.h";

int main()
{
	// dril time, learnt about basic statements which is pretty simple and about vectors, essentially the same as arrays from python

	// Step 1 - while loop reading 2 ints and writing them
	// Step 2 and 3 - writing out the smaller value then the larger one, and checking if they are equal
	int a;
	int b;
	cout << "enter 2 integers, then they will be printed, when you wish to exit, enter |" << "\n";
	while (cin >> a, cin>>b)
	{
		if (a < b) 
		{
			cout << a << "\n" << b << "\n";
		}
		else if (b > a)
		{
			cout << b << "\n" << a << "\n";
		}
		else
		{
			cout << "Numbers are equal" << "\n";
		}
		
	}




}