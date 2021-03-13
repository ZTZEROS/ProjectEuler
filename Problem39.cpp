/*
#include <iostream>
#include <bitset>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

using namespace std;

bool from0To9[10];

void main()
{
	unsigned int triangleCount[1001];

	memset(triangleCount, 0, sizeof(triangleCount));

	for (unsigned int p = 1; p < 1001; ++p)
	{
		vector<unsigned int> bsV;
		
		for (unsigned int a = 1; a < p / 2; ++a)
		{
			if (bsV.size() > 1 && bsV[bsV.size() - 1] == a) break;

			for (unsigned int b = 1; b < (p - a) / 2; ++b)
			{
				unsigned int c = p - a - b;

				if (a * a + b * b == c * c)
				{
					bsV.push_back(b);

					++triangleCount[p];
					break;
				}
			}
		}
	}

	unsigned int maxCount = 0;
	unsigned int indexOfMaxCount = 0;

	for (unsigned int i = 0; i < 1001; ++i)
	{
		if (maxCount < triangleCount[i])
		{
			maxCount = triangleCount[i];
			indexOfMaxCount = i;

			cout << i << " : " << maxCount << endl;
		}
	}

	cout << indexOfMaxCount << endl;
}
//840
*/