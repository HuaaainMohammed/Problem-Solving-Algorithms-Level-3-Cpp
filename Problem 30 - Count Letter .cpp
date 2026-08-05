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

char ReadChar()
{
	char Letter;
	cout << "\nPleas enter a charcter ?\n ";
	cin >> Letter;
	return Letter;
}

short CountLetter(string s1, char Letter)
{
	short count = 0;
	for (int i = 0; i <= s1.length(); i++)
	{
		if (s1[i] == Letter)
		{
			count++;
		}
	}
	return count;
}

int main()
{

	string s1 = ReadString();
	char Ch1 = ReadChar();
	cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(s1, Ch1);
	return 0;
}
	