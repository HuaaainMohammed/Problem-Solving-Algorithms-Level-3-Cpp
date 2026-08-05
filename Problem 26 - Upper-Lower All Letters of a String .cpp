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

string ToUpperAllString(string s1)
{

	for (int i = 0; i <= s1.length(); i++)
	{
			s1[i] = toupper(s1[i]);
	}
	return s1;
}

string ToLowerAllString(string s1)
{

	for (int i = 0; i <= s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}
	return s1;
}

int main()
{
	string s1 = ReadString();
	cout << "\nString after Upper:\n";
	s1 = ToUpperAllString(s1);
	cout << s1 << endl;

	cout << "\nString after Lower:\n";
	s1 = ToLowerAllString(s1);
	cout << s1 << endl;

	return 0;
}