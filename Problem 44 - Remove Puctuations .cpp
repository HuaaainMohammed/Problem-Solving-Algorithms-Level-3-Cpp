#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string RemovePanctuationsFromString(string S1)
{
	string S2 = "";

	for (int i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}

int main()
{
	string S1 = "Welcome to KSA, KSA is a nice country; it's amazing.";
	
	cout << "\nOrginal string :\n" << S1 ;
	cout << "\n\nPanctuations Removed :\n ";
	cout << RemovePanctuationsFromString(S1) << endl;

	return 0;
}
