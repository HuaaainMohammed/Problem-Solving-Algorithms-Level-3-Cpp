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

int ColSum(int arr[3][3], short Row, short ColNumber)
{
	short sum = 0;
	for (int i = 0; i < Row; i++) // الصف الاول
	{
		sum += arr[i][ColNumber]; // قيمة العامود ثابته وقيمة الصف متحركة
	} 
	return sum;
}

void PrintSumOfEashCol(int arr[3][3], int row, int colum)
{
	cout << "The following are the sum of each row in the matrix :\n";

	for (int j = 0 ; j < colum ; j++) // العامود الاول 
	{

		cout << "Col " << j + 1 << " Sum = " << ColSum(arr , row , j  ) << endl; // نقوم بارسال عدد الصفوف مع العامود

	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3]; // Decleration 
	FillMatrixWithRndomNumber(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix \n";
	PrintArray(arr, 3, 3);

	PrintSumOfEashCol(arr, 3, 3);

	return 0;
}