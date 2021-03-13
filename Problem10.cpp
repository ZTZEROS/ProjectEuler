/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> PrimesV;
unsigned __int64 SumOfPrimes = 0;
bool isPrime = 1;
int k = 0;

int temp = 0;

void main()
{
	PrimesV.push_back(2);

	for (int i = 3; i < 2000000; i += 2)
	{
		temp = i / PrimesV[k];

		for (int j = 0; j < PrimesV.size(); ++j)
		{
			//if (PrimesV[j] > i / 2) break; 
			if (PrimesV[j] > temp) break;

			if (i % PrimesV[j] == 0)
			{
				isPrime = 0;
				break;
			}
			
		}

		if (isPrime)
		{
			PrimesV.push_back(i);
			cout << i << ", " << PrimesV.size() << endl;
			SumOfPrimes += i;
			//cout << SumOfPrimes + 2 << endl;
		}
		else isPrime = 1;

		if (i > (PrimesV[k + 1] * PrimesV[k + 1])) ++k;

		//getchar();
	}

	cout << SumOfPrimes + 2 << endl;

	//SumOfPrimes = 0;
	//
	//for (int i = 0; i < PrimesV.size(); ++i)
	//{
	//	SumOfPrimes += PrimesV[i];
	//
	//}
	//cout << SumOfPrimes << endl;
}
//142913828922
*/