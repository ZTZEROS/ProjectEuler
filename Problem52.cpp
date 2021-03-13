/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int ratio = 1;
	unsigned int min = 0;

	for (unsigned int i = 1; ratio < 6; ++i)
	{
		vector<unsigned int> digitsV[6];
		unsigned int IntegerUnder10Counts[6][11];

		memset(IntegerUnder10Counts, 0, sizeof(IntegerUnder10Counts));
		ratio = 1;

		for (unsigned int l = 0; l < 6; ++l)
		{
			unsigned int currentNumber = i * (l + 1);
			bool isSameDigits = 0;

			while (currentNumber > 0)
			{
				digitsV[l].push_back(currentNumber % 10);
				currentNumber /= 10;
			}

			if (digitsV[0].size() < digitsV[l].size()) break;

			for (unsigned int j = 0; j < digitsV[l].size(); ++j)
			{
				for (unsigned int k = 0; k < 11; ++k)
				{
					if (digitsV[l][j] != k) continue;

					++IntegerUnder10Counts[l][k];
					break;
				}
			}

			isSameDigits = 1;

			for (unsigned int j = 0; j < 11; ++j)
			{
				if (IntegerUnder10Counts[0][j] == IntegerUnder10Counts[l][j]) continue;

				isSameDigits = 0;
				break;
			}

			if (!isSameDigits) break;
			else ratio = l + 1;
		}

		min = i;
	}

	cout << min << endl;
}
//142857
*/