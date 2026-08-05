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

int CountWords(string S1)
{
	short counter = 0;
	string delim = " ";
	short pos = 0;
	string sWord;

	while ((pos = S1.find(delim)) != std::string::npos)
	{ 
		sWord = S1.substr(0, pos); // ابدا من الفهرس زيرو وخذ على عدد الحروف البوزيشن 
		                          //S1.substr(0, 3)  خذ 3 حروف من الفهرس زيرو
		if (sWord != "")
		{
			counter++;
		}

		S1.erase(0, pos + delim.length()); // ابدا من الفهرس زيرو واحذف حرفين فقط 
		// S1.erase(0,3) معناه احذف 3 حروف
	}
	if (S1 != "")
	{
		counter++;
	}
	return counter;
}

int main()
{
	string S1 = ReadString();
	cout << "\nThe number of words in your string is : ";
	cout << CountWords(S1) << endl;
	return 0;
}
