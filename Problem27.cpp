/*
#include <iostream>
#include <vector>

using namespace std;

bool CheckPrime(int prime);

void main()
{
	int a, b;
	unsigned int n;
	vector<unsigned int> primeCountsV;
	vector<int> coefficientAsV;
	vector<int> coefficientBsV;

	primeCountsV.reserve(1000000);
	coefficientAsV.reserve(1000000);
	coefficientBsV.reserve(1000000);

	for (int a= - 999; a < 1000; ++a)
	{
		for (int b = - 999; b < 1000; ++b)
		{
			n = 0;

			while (CheckPrime(n * n + a * n + b)) //소수 체크
			{
				++n;
			}

			primeCountsV.push_back(n);
			coefficientAsV.push_back(a);
			coefficientBsV.push_back(b);
		}
	}

	unsigned int maximumPrimeCount = 0;
	unsigned int index = 0;

	for (unsigned int i = 0; i < primeCountsV.size(); ++i)
	{
		if (maximumPrimeCount < primeCountsV[i])
		{
			maximumPrimeCount = primeCountsV[i];
			index = i;
		}
	}

	cout << coefficientAsV[index] * coefficientBsV[index] << endl;
}

bool CheckPrime(int prime)
{
	if (prime < 0) return 0;

	if (prime % 2)
	{
		int squareRoot1 = sqrt(prime) + 1;

		for (unsigned int i = 2; i < squareRoot1; ++i)
		{
			if (!(prime % i)) return 0;
		}
	}
	else return 0;

	return 1;
}
//-59231
*/