#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithrRanodmNumber(int Matrix[3][3], short row, short colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMartix(int arr[3][3], int row, int colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			printf(" %0*d  ", 2, arr[i][j]); // d >> using for integer 
			// cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

bool AreTypicalMatrices(int Matrix1[3][3] , int Matrix2[3][3], int Row, int Col)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int Matrix1[3][3];
	int Matrix2[3][3];

	FillMatrixWithrRanodmNumber(Matrix1 , 3, 3);
	FillMatrixWithrRanodmNumber(Matrix2, 3, 3);

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);
	
	cout << "\n\n Mtarix 2: \n";
	PrintMartix(Matrix2, 3, 3);

	if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))

		cout << "\nYes : both matrices are typical .";
	else
		cout << "\nNo : matrices are not typical . ";

	return 0;
}