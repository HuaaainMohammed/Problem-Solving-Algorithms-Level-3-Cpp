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
	bool MarkForDelete = false;

};

sClient ChangeClientRecord(string AccounNummber)
{
	sClient Client;
	
	Client.AccountNumber = AccounNummber;

	cout << "Enter Pin Code ? ";
	getline(cin >> ws, Client.PinCode);

	cout << "Enter Name ? ";
	getline(cin, Client.Name);

	cout << "Enter Phone ? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ? ";
	cin >> Client.AccountBalance;

	return Client;
}

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
		string Line;
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

bool FindClientByAccountNumber(string AccountNumber, vector <sClient> vClient, sClient& Client)
{
	for (sClient C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

void PrintClientCard(sClient Client)
{
	cout << "\nThe following are the client detail : \n\n";
	cout << "Account Number: " << Client.AccountNumber << endl;
	cout << "Pin Code: " << Client.PinCode << endl;
	cout << "Client Name: " << Client.Name << endl;
	cout << "Phone: " << Client.Phone << endl;
	cout << "Balance: " << Client.AccountBalance << endl;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClient)
{

	for (sClient& C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance) + Seperator;

	return stClientRecord;
}

vector <sClient> SaveClientsDataToFile(string FileName, vector <sClient> vClients)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	string DataLine;
	if (MyFile.is_open())
	{
		for (sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}

	return vClients;
}

void UpdateClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
	char Answer = 'n';

	sClient Client;

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{

		PrintClientCard(Client);
		cout << "\n\nAre you sure you want update this client ? n/y ?";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{

			for (sClient &C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}
			SaveClientsDataToFile(ClientsFileName, vClients);
			//Refresh Clients 
			vClients = LoadClientsDataFromFile(ClientsFileName);
			cout << "\n\n Client Updated Successfully. \n";
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found!\n";

	}
}

string ReadClientAccountNumber()
{
	string AccountNumber;
	cout << "\nPlease Enter Account Number ? ";
	cin >> AccountNumber;
	return AccountNumber;
}

int main()
{
	string AccountNumber = ReadClientAccountNumber();


	vector <sClient> vClient = LoadClientsDataFromFile(ClientsFileName);

	UpdateClientByAccountNumber(AccountNumber, vClient);

	return 0;
}
