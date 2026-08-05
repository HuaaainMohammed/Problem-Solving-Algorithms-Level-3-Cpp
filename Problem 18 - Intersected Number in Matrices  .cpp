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

bool IsNumberExistsInMatrix(int Matrix[3][3], int number, int Row, int Col)
{

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix[i][j] == number)
			{
				return true;
			}
		}
	}
	return false;
}

void PrintIntersectedNumberInMatrix(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col)
{
	int Number;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			Number = Matrix1[i][j];
			 if (IsNumberExistsInMatrix(Matrix2, Number, 3, 3))
			{
				cout << setw(3) << Number << "   ";
			}
		}
	}

}

int main()
{

	int Matrix1[3][3] = { {77,5,12} , {22,20,1} , {1,0,9} };
	int Matrix2[3][3] = { {5,80,90} , {22,77,1} , {10,8,33} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	cout << "\n\n Mtarix 2: \n";
	PrintMartix(Matrix2, 3, 3);

	cout << "\nIntersected Number are : \n";
	PrintIntersectedNumberInMatrix(Matrix1, Matrix2, 3, 3);
	cout << endl;

	return 0;
}