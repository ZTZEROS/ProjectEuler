/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> primesV;
	map<unsigned int, unsigned int> primesM;

	primesV.push_back(2);
	primesM[2] = primesM.size() + 1;

	for (unsigned int i = 3; i < 1000001; ++++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				primesM[i] = primesM.size() + 1;
				break;
			}
		}
	}

	unsigned int sum = 0;

	for (unsigned int j = 0; j < primesV.size(); ++j)
	{
		sum += primesV[j];

		if (primesM.find(sum) != primesM.end())
		{
			cout << sum << endl;
		}
	}

	cout << endl;

	unsigned int longestChainSum = 2;
	unsigned int maxChainCount = 1;

	for (unsigned int i = 0; i < primesV.size(); ++i)
	{
		unsigned int chainSum = 0;
		unsigned int chainCount = 0;

		if (primesV[i] > 1000000 / maxChainCount) break;

		for (unsigned int j = i; j < primesV.size(); ++j)
		{
			chainSum += primesV[j];
			++chainCount;

			if (chainSum > 1000000) break;

			if (primesM.find(chainSum) != primesM.end())
			{
				if (maxChainCount < chainCount)
				{
					maxChainCount = chainCount;
					longestChainSum = chainSum;
					
					cout << chainSum << ", " << chainCount << endl;
				}
			}
		}
	}

	cout << longestChainSum << ", " << maxChainCount << endl;
}
//997651, 543
*/