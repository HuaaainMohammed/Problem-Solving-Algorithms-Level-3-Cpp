#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

string ReadString()
{
	string s;
	cout << "Enter your full name : ";
	getline(cin, s);
	return s;
}

string UpperFirstLetterOfEachWord(string s1)
{
	bool IsFirtsLetetr = true;

	for (int i = 0; i <= s1.length(); i++)
	{
		if (s1[i] != ' ' && IsFirtsLetetr)
		{
			 s1[i] = toupper(s1[i]);
		}

		IsFirtsLetetr = (s1[i] == ' ' ? true : false);
	}
	return s1;
}

int main()
{
	string s1 = ReadString();
	cout << "\nString after conversion:\n";
	s1 = UpperFirstLetterOfEachWord(s1);
	cout << s1 << endl ;
	return 0;
}