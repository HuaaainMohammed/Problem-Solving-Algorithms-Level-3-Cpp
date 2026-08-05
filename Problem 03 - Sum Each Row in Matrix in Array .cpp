#include <iostream>
#include<string>
#include<iomanip> // Input Output Manipulators -- تنسيق الطباعة والجداول
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRndomNumber(int arr[3][3], int Row, int Colum)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Colum; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrixArray(int arr[3][3], int Row, int Colum)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Colum; j++)
		{
			cout << setw(3) << arr[i][j];

		}
		cout << endl;
	}
}

int SumRow(int arr[3][3], int RowNumber, int Colum)
{

	int sum = 0;
	for (int j = 0; j < Colum; j++)
	{
		sum += arr[RowNumber][j];
	}
	return sum;
}

void SumMatixRowsInArry(int arr[3][3],int arrSum[3], int Row, int Colum)
{

	for (int i = 0; i < Row; i++)
	{
		arrSum[i] = SumRow(arr, i, Colum) ;
	}
}

void PrintSumRowArray(int arr[3], short Rows)
{
	cout << "The following are the sum of each row in the matrix :\n";
	for (int i = 0; i < Rows; i++)
	{
		cout << "Row " << i+1 << " Sum = " << arr[i] << endl;

	}

}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3]; // Decleration 
	int arrSum[3]; // Decleration 
	FillMatrixWithRndomNumber(arr, 3, 3);
	PrintMatrixArray(arr, 3, 3);

	SumMatixRowsInArry(arr, arrSum ,3, 3);
	PrintSumRowArray(arrSum, 3);

}