#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

void FillMatrixWithrOderedNumber(int arr[3][3], int row, int colum)
{
	short counter = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			counter++;
			arr[i][j] = counter;
		}
	}
}

void PrintArray(int arr[3][3], int row, int colum)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << "\n";
	}
}

int main()
{

	int arr[3][3]; // Decleration 
	FillMatrixWithrOderedNumber(arr, 3, 3);
	PrintArray(arr, 3, 3);

	return 0;
}