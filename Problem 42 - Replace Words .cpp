#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string ReplaceWords(string S1 , string StringToReplace , string ReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo); // (11,6,ReplaceTo)

		pos = S1.find(StringToReplace); // Find text
	}
	return S1;
}

int main()
{
	string S1 = "Welcome to KSA , KSA is a nice country ";
	string StringToReplace = "KSA";
	string ReplaceTo = "USA";

	cout << "\nOrginal string \n" << S1;
	cout << "\nString after replace :";
	cout << "\n" << ReplaceWords(S1, StringToReplace, ReplaceTo);
	return 0;
}
