/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> primesV;
	vector<unsigned int> dividingCount4sV;
	unsigned int compositeNumberChainCount = 0;
	
	unsigned int primeCount = 0;
	unsigned int dividingCount[4];
	unsigned int compositeNumber = 0;

	memset(dividingCount, 0, sizeof(dividingCount));

	primesV.push_back(2);
	primeCount = primesV.size();

	for (unsigned int i = 3; compositeNumberChainCount < 4; ++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				break;
			}
		}

		dividingCount[3] = dividingCount[2];
		dividingCount[2] = dividingCount[1];
		dividingCount[1] = dividingCount[0];
		dividingCount[0] = 0;

		if (primeCount < primesV.size())
		{
			primeCount = primesV.size();
			continue;
		}
		
		compositeNumber = i;

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(compositeNumber % primesV[j]))
			{
				compositeNumber /= primesV[j];
				++dividingCount[0];

				if (dividingCount[0] > 4)
				{
					dividingCount[0] = 0;
					break;
				}
			}

			if (compositeNumber < primesV[j]) break;
		}

		if (dividingCount[0] == 4) cout << i << endl;

		if (dividingCount[0] == 4 && dividingCount[1] == 4 && dividingCount[2] == 4 && dividingCount[3] == 4)
		{
			compositeNumberChainCount = 4;
			cout << i - 3 << endl;
		}
	}
}
//134043
*/