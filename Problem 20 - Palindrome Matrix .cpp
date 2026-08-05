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

bool IsPalindromeMatrix(int Matrix[3][3], int Row, int Col)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col / 2; j++)	
		{
			if (Matrix[i][j] != Matrix[i][Col - 1 - j]) 
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{

   	//int Matrix1[3][3] = { {50,3,9} , {5,5,5} , {7,3,7} };
	int Matrix1[3][3] = { {1,10,1} , {5,5,5} , {7,3,7} };

	cout << "\n\n Mtarix 1: \n";
	PrintMartix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1, 3, 3))
		cout << "\nYes Matrix is Palindrome \n";
	else
		cout << "\nNo Matrix is Not Plandrome \n";

	return 0;
}