#include <iostream>
#include<string>
#include<iomanip> 
#include <vector>
#include <fstream>
using namespace std;

const string ClientsFileName = "Clients.txt";

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

vector <sClient> LoadClientsDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in); //Read Mode .. قراءة من داخل الملف

	if (MyFile.is_open())
	{
		string Line ;
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
		
			vClients.push_back(Client);

		}

		MyFile.close();
	}
	return vClients;
}

void PrintClientRecord(sClient Client)
{
	// in one line 
	cout << "| " << left << setw(15) << Client.AccountNumber;
	cout << "| " << left << setw(10) << Client.PinCode;
	cout << "| " << left << setw(40) << Client.Name;
	cout << "| " << left << setw(12) << Client.Phone;
	cout << "| " << left << setw(12) << Client.AccountBalance;

	cout << endl;
	
}

void PrintAllClientData(vector <sClient> vClients)
{

	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
	cout << "\n_______________________________________________________";
	cout << "__________________________________________\n" << endl; 

	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "__________________________________________\n" << endl; 

	for (sClient Client : vClients)
	{

		PrintClientRecord(Client);
		
	}

}

int main()
{
	vector <sClient> vClients;
	vClients = LoadClientsDataFromFile(ClientsFileName);

	PrintAllClientData(vClients);

	return 0;
}
