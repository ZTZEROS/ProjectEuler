/*
#include <iostream>
#include <bitset>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool from0To9[10];

void main()
{
	//bool from0To9[10]; //????

	vector<unsigned int> pandigitalsV;
	vector<unsigned int> pandigitalV;

	for (unsigned int i = 1; i < 10000; ++i)
	{
		pandigitalV.clear();		
		memset(from0To9, 0, sizeof(from0To9));

		for (unsigned int j = 1; j < 10; ++j)
		{
			if (pandigitalV.size() > 8) break;

			unsigned int digits = 10;
			unsigned int ij = i * j;

			while (ij > digits)
			{
				digits *= 10;
			}

			while (digits > 1)
			{
				digits /= 10;

				pandigitalV.push_back(ij / digits);
				from0To9[ij / digits] = 1;
				
				ij = ij % digits;
			}
		}

		if (pandigitalV.size() == 9)
		{
			from0To9[0] = 1;

			for (unsigned int j = 1; j < 10; ++j)
			{
				if (!from0To9[j]) from0To9[0] = 0;
			}

			if (from0To9[0])
			{
				unsigned int pandigital = 0;

				for (unsigned int j = 0; j < 8; ++j)
				{
					pandigital += pandigitalV[j];
					pandigital *= 10;
				}

				pandigital += pandigitalV[8];

				pandigitalsV.push_back(pandigital);
			}
		}
	}

	unsigned int maxPandigital = 0;

	for (unsigned int i = 0; i < pandigitalsV.size(); ++i)
	{
		if (maxPandigital < pandigitalsV[i]) maxPandigital = pandigitalsV[i];
	}

	cout << maxPandigital << endl;
}
//932718654
*/