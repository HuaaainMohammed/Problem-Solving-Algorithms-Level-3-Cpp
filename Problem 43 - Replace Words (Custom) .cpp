#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

vector <string> SpiltString(string S1, string Delim)
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

		S1.erase(0, pos + Delim.length()); // ابدا من فهرس 0 واحدف 3 احرف
		                                   // S1.erase(0,3) 
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string JoinString(vector<string> vString, string Delim)
{
	string S1;

	for (string& s : vString)
	{
		S1 += s + Delim;
	}
	return S1;
}

string ReplaceWordsInStringUsingSplit(string S1, string StringToReplace, string ReplaceTo , bool MatchCase = true)
{
	vector<string> vString;
	vString = SpiltString(S1, " ");

	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = ReplaceTo;
			}
		}

		else 
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = ReplaceTo;
			}
		}
	}

	return JoinString(vString , " ");
}

int main()
{
	
	string S1 = "Welcome to Jeddah , Jeddah is a nice country ";
	string StringToReplace = "Jeddah";
	string ReplaceTo = "USA";

	cout << "\nOrginal string \n" << S1 ;
	cout << "\n\nReplace with match case : ";
	cout << "\n" << ReplaceWordsInStringUsingSplit(S1, StringToReplace, ReplaceTo) << endl;

	cout << "\n\nReplace with  don't match case : ";
	cout << "\n" << ReplaceWordsInStringUsingSplit(S1, StringToReplace, ReplaceTo , false) << endl;
	
	return 0;
}
