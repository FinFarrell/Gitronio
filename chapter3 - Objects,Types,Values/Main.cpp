#include "std_lib_facilities.h"

int main()
{
	// the drill is to create a letter based on user input

	// step 1 - getting the recipitent of the letter from the user
	string first_name;
	cout << "Who are you writing too?";
	cin >> first_name;
	cout << "Dear " << first_name << ", " << "\n ";

	// step 2 - filler text
	cout << "	Hello! I have missed you tons, how are you doing? I havent spoken too you in ages and I though we needed to catch up a bit. I am doing just fine.";

	// step 3 - user inputs other friends name
	string friend_name;
	cout << "\n" << "Enter name of friend";
	cin >> friend_name;
	cout << "\n" << "Have you seen " << friend_name << "recently? I want to see how his new house is going";


	return 0;
}

