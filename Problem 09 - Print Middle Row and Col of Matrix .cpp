#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithrRanodmNumber(int Matrix1[3][3], short row, short colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			Matrix1[i][j] = RandomNumber(1, 10);
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

void PrintMiddleColofMatrix(int arr[3][3], short Row, short Col)
{
	short MiddleCol = Col / 2;
	for (int i = 0; i < Row; i++)
	{
		printf(" %0*d ", 2, arr[i][MiddleCol]);
	}
	cout << "\n";
}

void PrintMiddleRowofMatrix(int arr[3][3], int Row, int Col)
{
	short MiddleRow = Row / 2;
	for (int j = 0; j < Col ; j++ )
	{
		printf(" %0*d ", 2, arr[MiddleRow][j]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithrRanodmNumber(Matrix, 3, 3);
	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix, 3, 3);

	cout << "\n\nMiddle Col of Matrix is:\n";
	PrintMiddleColofMatrix(Matrix, 3, 3);

	cout << "\n\nMiddle Row of Matrix is:\n";
	PrintMiddleRowofMatrix(Matrix, 3, 3);

	return 0;
}