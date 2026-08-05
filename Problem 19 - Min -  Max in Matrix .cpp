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

int PrintMinimumNumber(int Matrix1[3][3], int Row, int Col)
{
	int Min = Matrix1[0][0];
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix1[i][j] < Min)
			{
				Min = Matrix1[i][j];
			}
		}
	}
	return Min;

}

int PrintMaximumNumber(int Matrix1[3][3], int Row, int Col)
{
	int Max = Matrix1[0][0];
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix1[i][j] > Max)
			{
				Max = Matrix1[i][j];
			}
		}
	}
	return Max;
}

int main()	
{

	int Matrix1[3][3] = { {77,5,12} , {22,20,1} , {1,3,9} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	cout << "\nMinimum Number is : ";
	cout << PrintMinimumNumber(Matrix1, 3, 3);

	cout << "\nMaximum Number is : ";
	cout << PrintMaximumNumber(Matrix1, 3, 3);

	cout << endl;

	return 0;
}