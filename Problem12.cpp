/*
#include <iostream>
#include <vector>

using namespace std;
//7974
void main()
{
	int triangularNumber;
	int divisorCount;
	int n, N;

	triangularNumber = 0;
	divisorCount = 1;
	N = n = 1;

	vector<int> PrimesV;
	vector<int> PowersV;
	bool isPrime = 1;
	int k = 0;

	int temp = 0;

	//cout << 2 * 2 * 5 * 5 * 5 << endl;
	//cout << 2 * 2 * 2 * 2 * 3 * 3 * 3 * 3 * 5 * 5 * 5 * 5 * 7 * 11 << endl;

	//getchar();

	PrimesV.push_back(2);

	for (int i = 3; i < 10000; i += 2)
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

		if (isPrime) PrimesV.push_back(i);
		else isPrime = 1;

		if (i > (PrimesV[k + 1] * PrimesV[k + 1])) ++k;
	}

	cout << PrimesV.size() << endl;
	PowersV.resize(PrimesV.size());
	//memset(&PowersV[0], 0, sizeof(int) * PowersV.size());

	getchar();

	while (divisorCount < 500-1)
	{
		divisorCount = 1;
		memset(&PowersV[0], 0, sizeof(int) * PowersV.size());

		triangularNumber += n;

		cout << triangularNumber;

		++n;

		N = triangularNumber + 1;

		for (unsigned int i = 0; i < PrimesV.size(); ++i)
		{
			if ((triangularNumber % PrimesV[i]) == 0)
			{
				int temp = triangularNumber;

				for (unsigned int j = 0; j < 5; ++j)
				{
					if ((temp % PrimesV[i]) == 0)
					{
						temp /= PrimesV[i];
						++PowersV[i];
					}
					else break;
				}
			}
		}

		for(unsigned int i = 0; i < PowersV.size(); ++i)
		{
			divisorCount *= (PowersV[i] + 1);
		}

		cout << ", " << divisorCount << endl;

		//getchar();
	}
}
//76576500
*/