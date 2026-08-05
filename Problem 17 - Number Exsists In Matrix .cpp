#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

void PrintMartix(int arr[3][3], int row, int colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

int ReadNumber(string Message)
{
	int Number;
	cout << Message;
	cin >> Number;

	return Number;

}

bool IsNumberExistsInMatrix(int Matrix[3][3], int number, int Row, int Col)
{
	
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix[i][j] == number)
			{
				return true;
			}
	
		}

	}
	return false;
}

int main()
{

	int Matrix1[3][3] = { {77,5,12} , {22,20,1} , {1,0,9} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	int number = ReadNumber("Enter the number to look for in matrix ? ");
	if (IsNumberExistsInMatrix(Matrix1, number, 3, 3))
		cout << "\nYes its there";
	else
		cout << "\nNo its not there";
	

	return 0;
}