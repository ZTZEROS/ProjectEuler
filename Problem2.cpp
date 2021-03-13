/*
#include <iostream>
#include <map>

using namespace std;

unsigned int  Fibonacci1 = 1;
unsigned int  Fibonacci2 = 2; //unsigned int  Fibonacci2 = 1;
unsigned int  FibonacciSum = 0;
unsigned int  Sum = 0;

void main()
{
	while(FibonacciSum <= 4000000)
	{
		//if (!(Fibonacci2 % 2) && (Fibonacci2 <= 4000000))
		//{
		//	cout << Fibonacci2 << endl;
		//	Sum += Fibonacci2;
		//}
		
		FibonacciSum = Fibonacci1 + Fibonacci2;
		Fibonacci1 = Fibonacci2;
		Fibonacci2 = FibonacciSum;

		if (!(FibonacciSum % 2) && (FibonacciSum <= 4000000))
		{
			cout << FibonacciSum << endl;
			Sum += FibonacciSum;
		}
	}

	//cout << Sum << endl;
	cout << Sum + 2 << endl;

}
//4613732
*/