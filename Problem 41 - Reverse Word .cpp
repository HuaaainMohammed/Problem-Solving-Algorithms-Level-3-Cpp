#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string ReadString()
{
	string s;
	cout << "\nEnter your string ?\n ";
	getline(cin, s);
	return s;
}

vector <string> SpiltString(string S1, string Delim) // تقسيم النص الى اجزاء
{
	
	vector <string> vString;
	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // ابدا من الفهرس زيرو وخذ على عدد الحروف البوزيشن 
		                          //S1.substr(0, 3)  خذ 3 حروف من الفهرس زيرو
		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		S1.erase(0, pos + Delim.length()); // ابدا من الفهرس زيرو واحذف حرفين فقط 
		                                   // S1.erase(0,3) معناه احذف 3 حروف
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

string ReverseWordsInString(string S1)
{

	vector <string> vString;
	string S2 = "";
	vString = SpiltString(S1, " ");
	
	vector<string>::iterator iter = vString.end();
	//begin() يقف على أول عنصر.
	//end() يقف بعد آخر عنصر.

	while (iter != vString.begin())
	{
		--iter;

		S2 += *iter + " ";
	}
	return S2.substr(0, S2.length() - 1); // Reomve Last space 
}

int main()
{

	string S1 = ReadString();
	cout << "\nString after reversing word : \n";
	cout << ReverseWordsInString(S1);

	return 0;
}
