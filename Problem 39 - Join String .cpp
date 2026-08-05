#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

string JoinString(vector<string> vString , string Delim )
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}

	return S1.substr(0,S1.length() - Delim.length()); // يقوم بحذف اخر سبريتر 
}                  //(0,37-3) >> substr(0,34) 

int main()
{

	vector <string> vString = { "Hussain","Mohammed","Naif","Murad" };
	
	cout << "\nVector after join : \n";

	cout << JoinString(vString, " ### ");
	
	return 0;
}
