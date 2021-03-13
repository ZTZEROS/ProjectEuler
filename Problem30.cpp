/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	//under 9^5 * 6 = 354294
	unsigned int numbers[6];
	unsigned int subSum = 0;
	unsigned int totalSum = 0;

	for (unsigned int i = 2; i < 354295; ++i)
	{
		numbers[5] = (i / 1) % 10;
		numbers[4] = (i / 10) % 10;
		numbers[3] = (i / 100) % 10;
		numbers[2] = (i / 1000) % 10;
		numbers[1] = (i / 10000) % 10;
		numbers[0] = (i / 100000) % 10;

		for (unsigned int i = 0; i < 6; ++i)
		{
			numbers[i] = numbers[i] * numbers[i] * numbers[i] * numbers[i] * numbers[i];

			subSum += numbers[i];
		}

		if (i == subSum) totalSum += subSum;

		subSum = 0;
	}

	cout << totalSum << endl;
}
//443839
*/