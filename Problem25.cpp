/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<unsigned int> Fibonacci1V;
	vector<unsigned int> Fibonacci2V;
	vector<unsigned int> FibonacciV;
	unsigned int order;

	Fibonacci1V.push_back(1);
	Fibonacci2V.push_back(1);

	FibonacciV.push_back(Fibonacci1V[0] + Fibonacci2V[0]);

	order = 3;

	while (FibonacciV.size() < 1000)
	{
		Fibonacci1V = Fibonacci2V;
		Fibonacci2V = FibonacciV;

		for (unsigned int i = 0; i < Fibonacci1V.size(); ++i)
		{
			FibonacciV[i] += Fibonacci1V[i];
		}

		for (unsigned int i = 0; i < FibonacciV.size(); ++i)
		{
			if (FibonacciV[i] > 9)
			{
				if(i == FibonacciV.size() - 1) FibonacciV.push_back(1);
				else ++FibonacciV[i + 1];

				FibonacciV[i] -= 10;
			}
		}

		++order;
	}

	//while (FibonacciV.size() < 125)
	//{
	//Fibonacci1V = Fibonacci2V;
	//Fibonacci2V = FibonacciV;
	//
	//for (unsigned int i = 0; i < Fibonacci1V.size(); ++i)
	//{
	//FibonacciV[i] += Fibonacci1V[i];
	//}
	//
	//for (unsigned int i = 0; i < FibonacciV.size(); ++i)
	//{
	//if (FibonacciV[i] > 99999999)
	//{
	//if(i == FibonacciV.size() - 1) FibonacciV.push_back(1);
	//else ++FibonacciV[i + 1];
	//
	//FibonacciV[i] -= 100000000;
	//}
	//}
	//
	//++order;
	//}

	cout << order << endl;
}
//4782
*/