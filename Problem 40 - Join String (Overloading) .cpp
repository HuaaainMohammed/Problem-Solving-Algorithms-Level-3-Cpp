#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length()); // يقوم بحذف اخر سبريتر 
}                  //(0,37-3) >> substr(0,34) 

string JoinString(string arrString[], short Length , string Delim) //OverLoading
{
	string S1 = "";
	for (int i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length()); 
}                  

int main()
{

	vector <string> vString = { "Hussain","Mohammed","Naif","Murad" };

	string arrString[] = { "Hussain","Mohammed","Naif","Murad" };

	cout << "\nVector after join : \n";
	cout << JoinString(vString, " ### ");


	cout << "\Array after join : \n";
	cout << JoinString(arrString , 4 , " ### ");


	return 0;
}
