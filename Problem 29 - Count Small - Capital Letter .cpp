#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

enum enWhatToCount {SmallLetters=0 , CapitalLetter=1 , All=3};

string ReadString()
{
	string s;
	cout << "Enter your full name : ";
	getline(cin, s);
	return s;
}

int CountLetter(string s1, enWhatToCount WhatToCount = enWhatToCount::All)
{
	short Counter = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::All)
		{
			return s1.length();
		}

		if (WhatToCount == enWhatToCount::CapitalLetter && isupper(s1[i]))
		{
			Counter++;
		}

		if (WhatToCount == enWhatToCount::SmallLetters && islower(s1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}

int CountCapitalLetter(string s1)
{
	short Counter = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (isupper(s1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}

int CountSmallLetter(string s1)
{
	short Counter = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (islower(s1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}

int main()
{
	string s1 = ReadString();


	cout << "\nMethod 1 : \n";
	cout << "\nString Length = " << s1.length() <<"\n";
	cout << "\nCapital Letters Count " << CountCapitalLetter(s1) << "\n";
	cout << "\nSmall Letters Count " << CountSmallLetter(s1) << "\n";

	cout << "\n-------------------------------------------------------\n";

	cout << "\nMethod 2 : \n";
	cout << "\nString Length = " << CountLetter(s1) << "\n";
	cout << "\nCapital Letters Count " << CountLetter(s1 ,enWhatToCount::CapitalLetter) << "\n";
	cout << "\nSmall Letters Count " << CountLetter(s1 , enWhatToCount::SmallLetters) << "\n";


	return 0;
}