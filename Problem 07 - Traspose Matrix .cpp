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

void PrintMartix(int arr[3][3], int row, int colum)
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

void TrasposeMatrix(int arr[3][3], int arrTranspose[3][3], int Row, int Col)
{
	
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col ; j++)
		{
			arrTranspose[i][j] = arr[j][i];
		}
	}
}

int main()
{

	int arr[3][3]; // Decleration 
	int arrTranspsed[3][3];
	FillMatrixWithrOderedNumber(arr, 3, 3);
	cout << "\n\nThe foloowing is s 3x3 matrix \n";
	PrintMartix(arr, 3, 3);

	TrasposeMatrix(arr, arrTranspsed,  3, 3);
	cout << "\n\nThe foloowing is the transpoed matrix \n";
	PrintMartix(arrTranspsed, 3, 3);


	return 0;
}