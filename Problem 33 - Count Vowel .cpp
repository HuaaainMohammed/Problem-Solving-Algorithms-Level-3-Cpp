#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

string ReadString()
{
	string s;
	cout << "\nEnter your string ?\n ";
	getline(cin, s);
	return s;
}

bool IsVowel(char Ch)
{
	Ch = tolower(Ch);

	return ((Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'));
}

int CountVowel(string S1)
{

	short Counter = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();
	cout << "\nNumber of vowels is : " << CountVowel(S1);

	return 0;
}
