#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

vector <string> SplitSptring(string S1, string Delim)
{
	vector <string> vString;
	short pos = 0;
	string sWrod;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWrod = S1.substr(0, pos);
		if (sWrod != "")
		{
			vString.push_back(sWrod);
		}

		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

sClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector <string> vClientData;
	vClientData = SplitSptring(Line, Seperator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	return Client;
}

void PrintClientRecord(sClient Client)
{
	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "Account Number  : " << Client.AccountNumber << "\n";
	cout << "Pin Code        : " << Client.PinCode << "\n";
	cout << "Name            : " << Client.Name << "\n";
	cout << "Phone           : " << Client.Phone << "\n";
	cout << "Account Balance : " << Client.AccountBalance << "\n";

	cout << "\n\n";
}

int main()
{
	string Line = "A234208#//#1414#//#Hussian Noor#//#0554558971#//#1400.000000#//#";
	cout << "\n\nLine Record is is : \n" << Line << endl;

	sClient Client = ConvertLineToRecord(Line);

	PrintClientRecord(Client);

	return 0;
}
