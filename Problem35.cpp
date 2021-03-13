/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> primesV;
	vector<bool> isCircularPrimesV;

	isCircularPrimesV.resize(1000001);

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
		}
	}

	cout << primesV.size() << "Primes under 1000000 found" << endl;

	for (unsigned int i = 0; i < isCircularPrimesV.size(); ++i)
	{
		isCircularPrimesV[i] = 0;
	}

	for (unsigned int i = 0; i < primesV.size(); ++i)
	{
		isCircularPrimesV[primesV[i]] = 1;
	}

	cout << "isCircularPrimesV set" << endl;

	for (unsigned int i = 0; i < primesV.size(); ++i)
	{
		if (!isCircularPrimesV[primesV[i]]) continue;

		unsigned int digits = 1;

		for (unsigned int j = 10; j < 10000000; j *= 10)
		{
			if (primesV[i] < j)
			{
				digits = j / 10;
				break;
			}
		}

		unsigned int firstPlace = 0;
		unsigned int lastPlace = 0;
		unsigned int circularPrime = 0;

		firstPlace = primesV[i] / digits;
		lastPlace = primesV[i] % digits;

		circularPrime = lastPlace * 10 + firstPlace;

		while (primesV[i] != circularPrime)
		{
			if (!isCircularPrimesV[circularPrime])
			{
				isCircularPrimesV[primesV[i]] = 0;
				break;
			}

			firstPlace = circularPrime / digits;
			lastPlace = circularPrime % digits;

			circularPrime = lastPlace * 10 + firstPlace;
		}
		//어떤 수의 circularPrimes중 하나가 Prime이 아닌 경우에 그 수의 circularPrimes를 한번에 isCircularPrimesV에서 제외하는 코드를 넣지 않음
	}

	unsigned int circularPrimeCount = 0;

	for (unsigned int i = 0; i < isCircularPrimesV.size(); ++i)
	{
		if (isCircularPrimesV[i]) ++circularPrimeCount;
	}

	printf("%d\n", circularPrimeCount);
}
//55
*/