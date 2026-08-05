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

bool IsIdentityMatrix(int Matrix1[3][3], int Row, int Col)
{
	int FirstDiagElement = Matrix1[0][0];

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (i == j && Matrix1[i][j] != FirstDiagElement)
			{
				return false;
			}
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}

		}
	}
	return true;
}

int main()
{

	 //int Matrix1[3][3] = { {5,0,0} , {0,8,0} , {0,0,10} };
	int Matrix1[3][3] = { {5,0,0} , {0,5,0} , {0,0,5} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	if (IsIdentityMatrix(Matrix1, 3, 3))

		cout << "\nYes : Matrix is Scalar .";
	else
		cout << "\nNo : Matrix is not Scalar . ";

	return 0;
}