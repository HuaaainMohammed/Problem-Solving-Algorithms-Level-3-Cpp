#include <iostream>
#include<string>
#include<iomanip> 
using namespace std;

void PrintFibonacciSeries(short Numebr , short Prev1 , short Prev2)
{
	int FebNumber = 0;
	if (Numebr > 0)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << "  ";
		Prev2 = Prev1;
		Prev1 = FebNumber;

		PrintFibonacciSeries(Numebr - 1, Prev1, Prev2);
	}
}

int main()
{

	PrintFibonacciSeries(10 , 0 , 1);
	return 0;
}