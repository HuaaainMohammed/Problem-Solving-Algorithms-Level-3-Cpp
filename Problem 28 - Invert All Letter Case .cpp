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

char InvertCharcterCase(char s1)
{
	return isupper(s1) ? tolower(s1) : toupper(s1); // With short hand if 
}

string InvertAllStringLetterCase(string s1)
{

	for (int i = 0; i <= s1.length(); i++)
	{
		s1[i] = InvertCharcterCase(s1[i]);
	}
	return s1;
}

int main()
{
	string s1 = ReadString();
	cout << "\nString after Inverting All Letters case :\n";
	s1 = InvertAllStringLetterCase(s1);
	cout << s1 << endl;


	return 0;
}