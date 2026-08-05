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

int CountNumberInMatrix(int Matrix[3][3] , int number , int Row , int Col)
{
	short count = 0;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix[i][j] == number)
			{
				count++;
			}
		}

	}
	return count;
}

int main()
{

	int Matrix1[3][3] = { {9,1,12} , {0,9,1} , {0,9,9} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	int number = ReadNumber("Enter the number to count in matrix ? ");

	 cout << "Number " << number << " count in matrix is " << CountNumberInMatrix(Matrix1, number, 3, 3);


	return 0;
}