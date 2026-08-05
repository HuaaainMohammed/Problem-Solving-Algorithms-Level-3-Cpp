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

void PrintVowels(string S1)
{

	cout << "\nVowels ins string are : ";
	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			cout << S1[i] << "  ";
		}
	}
	
}

int main()
{
	string S1 = ReadString();
	PrintVowels(S1);

	return 0;
}
