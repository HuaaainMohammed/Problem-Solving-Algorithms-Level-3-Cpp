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

void PrintEachWordInstring(string S1)
{

	string delim = " ";
	cout << "\nYour string words are : \n";
	short pos = 0;
	string sWord;

	while ((pos = S1.find(delim)) != std::string::npos)
	{ 
		sWord = S1.substr(0, pos); // ابدا من الفهرس زيرو وخذ على عدد الحروف البوزيشن 
		                           //S1.substr(0, 3)  خذ 3 حروف من الفهرس زيرو
		if (sWord != "")
		{
			cout << sWord << endl;
		}

		S1.erase(0, pos + delim.length()); // ابدا من الفهرس زيرو واحذف حرفين فقط 
		                                   // S1.erase(0,3) معناه احذف 3 حروف
	}
	if (S1 != "")
	{
		cout << S1 << endl;
	}
}

int main()
{
	PrintEachWordInstring(ReadString());
	return 0;
}
