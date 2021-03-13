/*
#include <iostream>
#include <bitset>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{

//firstNumber and lastNumber can be only 2, 3, 5, 7
//middleNumber can be only 1, 3, 5, 7, 9

	vector<unsigned int> primesV;
	map<unsigned int, unsigned int> primesM;
	unsigned int sum = 0;
	unsigned int primeIndex = -1;
	unsigned int primeCount = 0;

	for (unsigned int i = 2; i < 1000000; ++i)
	{
		unsigned int squareRoot = sqrt(i);
		bool isPrime = 1;

		for (unsigned int j = 0; primesV.size(); ++j)
		{
			if (primesV[j] > squareRoot) break;

			if (!(i % primesV[j]))
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			primesV.push_back(i);
			primesM[i] = i;
			++primeIndex;
			//	}
			//}

			//for(unsigned int i = 0; i < primesV.size(); ++i)
			//{
			unsigned int digits = 10;
			bool isSpecial = 0;

			//if (primesV[primeIndex] < 11) isSpecial = 0;

			while ((primesV[primeIndex] / digits) > 0)
			{
				isSpecial = 1;

				if (primesM.find(primesV[primeIndex] / digits) == primesM.end())
				{
					isSpecial = 0;
					break;
				}

				digits *= 10;
			}

			if (isSpecial)
			{
				while ((primesV[primeIndex] % digits) > 0)
				{
					if (primesM.find(primesV[primeIndex] % digits) == primesM.end())
					{
						isSpecial = 0;
						break;
					}

					digits /= 10;
				}
			}

			if (isSpecial)
			{
				if (7 < primesV[primeIndex])
				{
					cout << primesV[primeIndex] << endl;
					sum += primesV[primeIndex];
					++primeCount;
				}
			}

			if (primeCount > 10) break;
		}
	}

	cout << sum << endl;
}
//748317
*/