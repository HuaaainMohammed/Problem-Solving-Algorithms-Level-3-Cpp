#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithrRanodmNumber(int Matrix1[3][3], int row, int colum)
{
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			Matrix1[i][j] = RandomNumber(1,10);
		}
	}
}

void PrintMartix(int arr[3][3], int row, int colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			printf(" %0*d", 2, arr[i][j]); // d >> using for integer 
			// cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

void MultipyMtrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResult[3][3],  short Row, short Cols)
{

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];  
	int Matrix2[3][3]; 
	int MatrixResult[3][3];


	FillMatrixWithrRanodmNumber(Matrix1, 3, 3);
	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);


	FillMatrixWithrRanodmNumber(Matrix2, 3, 3);
	cout << "\n\n Mtarix 2: \n";
	PrintMartix(Matrix2, 3, 3);

	MultipyMtrix(Matrix1, Matrix2, MatrixResult, 3, 3);
	cout << "\n\nResult:\n";
	PrintMartix(MatrixResult, 3, 3);

	return 0;
}