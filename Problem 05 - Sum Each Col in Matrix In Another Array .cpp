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

int SumCol(int arr[3][3], int Row, int ColumNumber)
{

	int sum = 0;
	for (int i = 0; i < Row; i++)
	{
		sum += arr[i][ColumNumber];
	}
	return sum;
}

void SumMatixRowsInArry(int arr[3][3], int arrSum[3], int Row, int Colum)
{

	for (int i = 0; i < Colum; i++)
	{
		arrSum[i] = SumCol(arr, Row, i );
	}
}

void PrintSumColArray(int arr[3], short length)
{
	cout << "The following are the sum of each row in the matrix :\n";
	for (int i = 0; i < length; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << arr[i] << endl;

	}

}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3]; // Decleration 
	int arrSum[3]; // Decleration 
	FillMatrixWithRndomNumber(arr, 3, 3);
	PrintMatrixArray(arr, 3, 3);

	SumMatixRowsInArry(arr, arrSum, 3, 3);
	PrintSumColArray(arrSum, 3);

}