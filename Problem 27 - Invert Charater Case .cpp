#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

char ReadChar()
{
	char s;
	cout << "Pleas enter a charcter ?\n ";
	cin >> s;
	return s;
}

char InvertCharcterCase(char s1)
{
	return isupper(s1) ? tolower(s1) : toupper(s1); // With short hand if 
}

int main()
{
	char s1 = ReadChar();
	cout << "\nChar after inverting case:\n";
	s1 = InvertCharcterCase(s1);
	cout << s1 << endl;

	return 0;
}