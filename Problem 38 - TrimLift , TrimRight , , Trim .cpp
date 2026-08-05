#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string TrimLeft(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i , S1.length() -i);
		}
	}
	return "";
}

string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		return S1.substr(0, i + 1);
	}
	return "";
}

string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}

int main()
{

	string S1 = "   Hussain Noor Mohammed   ";
	cout << "\nString         = " << S1 << endl;
	cout << "\nTrim Left      = " << TrimLeft(S1) << endl;
	cout << "\nTrim Right     = " << TrimRight(S1) << endl;
	cout << "\nTrim           = " << Trim(S1) << endl;

	return 0;
}
