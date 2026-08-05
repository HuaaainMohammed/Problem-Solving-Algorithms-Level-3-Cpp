#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRndomNumber(int arr[3][3], int row, int colum)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintArray(int arr[3][3], int row, int colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{

			cout << setw(5) << arr[i][j];
		}
		cout << "\n";
	}
}

int SumRow(int arr [3][3] , short RowNumber , short colum)
{
	short sum = 0;
	for (int j = 0; j < colum; j++)
	{
		sum += arr[RowNumber][j];
	}
	return sum;
}

void PrintSumOfEashRow(int arr[3][3], int row , int colum)
{
	cout << "The following are the sum of each row in the matrix :\n";

	for (int i = 0; i < row; i++)
	{

		cout << "Row " << i + 1 << " Sum = " << SumRow(arr, i, colum) << endl;

	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3]; // Decleration 
	FillMatrixWithRndomNumber(arr, 3, 3);
	PrintArray(arr, 3, 3);
	PrintSumOfEashRow(arr, 3, 3);

	return 0;
}