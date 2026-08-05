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

char InvertCharcterCase(char s1)
{
	return isupper(s1) ? tolower(s1) : toupper(s1); // With short hand if 
}


short CountLetter(string s1, char Letter, bool MatchCase = true)
{
	short counter = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (MatchCase)
		{
			if (s1[i] == Letter)
				counter++;
		}
		else
		{
			if (tolower(s1[i]) == tolower(Letter))
				counter++;
		}
	}
	return counter;
}

int main()
{

	string s1 = ReadString();
	char Ch1 = ReadChar();

	cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(s1, Ch1);
	
	cout << "\nLetter \' " << Ch1 << "\' ";
	cout << "Or \'" << InvertCharcterCase(Ch1) << "\' Count = " << CountLetter(s1, Ch1 , false);
	
	return 0;
}
