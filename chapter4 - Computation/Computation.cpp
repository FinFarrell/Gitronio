#include "std_lib_facilities.h";

int main()
{
	// dril time, learnt about basic statements which is pretty simple and about vectors, essentially the same as arrays from python

	// Step 1 - while loop reading 2 ints and writing them
	// Step 2 and 3 - writing out the smaller value then the larger one, and checking if they are equal
	// Steo 4 - changing all to doubles
	// Step 5 - changed checks for similar nubmers and equal numbers
	// Step 6 - overhaul to make one double be added and that being checked for smallest and largest
	// step 7 and 8 - add units and illegalify bad ones
	// step 9 10 and 11 keeping track of the numbers entered in a vector, having a little summary at the end

	 vector<double> total;
	double a;
	double sum = 0;
	string units;
	//string listoo;
	double smallest = 10000000;
	double largest = 0;
	bool a_larger;
	cout << "enter a number, followed by the unit that is in, being in cm, m, ft, in. To exit enter |" << "\n";
	while (cin >> a, cin >> units)
	{
		// converts numbers to right units
		if (units == "m")
		{
			a *= 100;
		}
		else if (units == "in")
		{
			a *= 2.54;
		}
		else if (units == "ft")
		{
			a *= 12;
			a *= 2.54;
		}
		else if (units == "cm")
		{
			cout << "poop" << "\n";
		}
		else
		{
			cout << "ILLEGAL UNIT BAD" << "\n";
		}

		// basic logic see if the number is bigger or smaller
		if (a > largest)
		{
			cout << "largest so far, bigger than " << largest << "cm" <<"\n";
			largest = a;
		}
		else if (a < smallest)
		{
			cout << "smallest so far, smaller than " << smallest << "cm" << "\n";
			smallest = a;
		}
		else
		{
			cout << "nothing special about this number" << "\n";
		}

		total.push_back(a);


	}


	int size = total.size() - 1;
	for (int i = 0; i<size; i++)
	{
		sum += total[i];
	}

	sort(total);

	
	


	cout << "the largest value you entered was the equivalent of " << largest / 100 << "m" << ", the smallest was, in metres " << smallest / 100 << "m" << ", you entered " << total.size() ;
	cout << " values and the total of all of these is " << sum/100 << " m" << ". The total list of numbers you entered, in cm is " <<"\n";

	list_print(total, total.size());



}