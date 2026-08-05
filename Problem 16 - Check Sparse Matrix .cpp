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

int CountNumberInMatrix(int Matrix[3][3], int number, int Row, int Col)
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

bool IsSparseMatrix(int Matrx[3][3], int Row , int Col)
{
	int MatrixSize = Row * Col; 
	return (CountNumberInMatrix(Matrx, 0, 3, 3) >= MatrixSize / 2);

}

int main()
{

	int Matrix1[3][3] = { {0,0,5} , {0,9,1} , {0,9,9} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "\nYes It is Sparse \n";
	else
		cout << "\nNo It is NOT Sparse \n";

	return 0;
}