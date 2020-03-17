#include "std_lib_facilities.h"

int main()
{
	// the drill is to create a letter based on user input

	// step 1 - getting the recipitent of the letter from the user
	string first_name;
	cout << "Who are you writing too?";
	cin >> first_name;
	cout << "Dear " << first_name << ", " << "\n ";

	return 0;
}

