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

void PrintFirstLetterOfEachWord(string s)
{
	bool IsFirtsLetetr = true;

	cout << "\nFirst letter of this string \n";
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] != ' '&& IsFirtsLetetr)
		{
			cout << s[i] << endl;
		}
		IsFirtsLetetr = (s[i] == ' ' ?  true : false);
	}
}

int main() 
{

	PrintFirstLetterOfEachWord(ReadString());

	return 0;
}