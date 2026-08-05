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
			printf(" %0*d  ", 2, arr[i][j]); 
			// cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

int SumofMatrix(int arr[3][3], short Row, short Col)
{
	int sum = 0;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithrRanodmNumber(Matrix, 3, 3);
	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix, 3, 3);

	cout << "\nSum of Matrix is : " << SumofMatrix(Matrix, 3, 3);

	return 0;
}