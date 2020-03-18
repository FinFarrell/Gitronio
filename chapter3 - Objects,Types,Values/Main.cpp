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
	cout << "\n" << "Have you seen " << friend_name << " recently? I want to see how their new house is going";

	//step 4 - friend sex
	char friend_sex = 0;
	cout << "\n" << "What is you friends sex? m/f";
	cin >> friend_sex;

	//check which gender friend is
	if (friend_sex == 'm')
	{
		cout << "\n" << "If you see " << friend_name << ", please ask him to call me";
	}
	else if (friend_sex == 'f')
	{
		cout << "\n" << "If you see " << friend_name << ", please ask her to call me";
	}
	else
	{
		cout << "\n" << "You disobeyed meeeeee, HOW DARE YOUUUUU";
	}

	// step 5 - user age
	int age;
	cout << "\n" << "What is the person's age?";
	cin >> age;
	if (age > 110 || age < 0)
	{
		simple_error("You're kidding!");
	}
	else
	{
		cout << "\n" << "I hear that you just had a birthday and you're " << age << " years old!";
	}

	// step 6 - age comment
	if (age < 12)
	{
		cout << "\n" << "Next year you will be " << age + 1 << " !";
	}
	else if (age == 17)
	{
		cout << "\n" << "You can vote next year!";
	}
	else if (age > 70)
	{
		cout << "\n" << "Hope you are enjoying retirement!";
	}

	// all working!

	// step 7 - finishing off!
	cout << "\n" << "Your's Sincerely," << "\n\n\n" << "Finley";
	// final test! All working!

		


	return 0;
}

