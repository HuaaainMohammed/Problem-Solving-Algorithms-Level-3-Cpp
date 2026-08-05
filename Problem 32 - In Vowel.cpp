#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

char ReadChar()
{
	char Letter;
	cout << "\nPleas enter a charcter ?\n ";
	cin >> Letter;
	return Letter;
}

bool IsVowel(char Ch)
{
	Ch = tolower(Ch);

	return ((Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'));
}

int main()
{

	char Ch1 = ReadChar();

	if (IsVowel(Ch1))
		cout << "\nYes Leeter \'" << Ch1 << "\' is vowel ";
	else
		cout << "\nNo Leeter \'" << Ch1 << "\' is NOT vowel ";
	return 0;
}
