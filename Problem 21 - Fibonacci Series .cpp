#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

void PrintFibonacciSeries(short Numebr)
{
	int FebNumber = 0;
	int Prev1 = 1; 
	int Prev2 = 0;

	cout << Prev1 << "  ";
	for (int i = 2; i <= Numebr; i++)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << "  ";

		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}


int main()
{

	PrintFibonacciSeries(15);
	return 0;
}