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

int SumofMatrix(int Matrix[3][3], short Row, short Col)
{
	int sum = 0;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			sum += Matrix[i][j];
		}
	}
	return sum;
}

bool AreEqualMatrices(int Matrix1[3][3] , int Matrix2[3][3], int Row, int Col)
{
	return (SumofMatrix(Matrix1, 3, 3) == SumofMatrix(Matrix2, 3, 3));

}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	int Matrix2[3][3];

	FillMatrixWithrRanodmNumber(Matrix1 , 3, 3);
	FillMatrixWithrRanodmNumber(Matrix2, 3, 3);

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);
	
	cout << "\n\n Mtarix 2: \n";
	PrintMartix(Matrix2, 3, 3);

	if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))

		cout << "\nYes : both matrices are equal .";
	else
		cout << "\nNo : matrices are not equal . ";

	return 0;
}