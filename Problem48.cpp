/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int last10Digits[10];
	unsigned int sumOfLast10Digits[10];

	memset(sumOfLast10Digits, 0, sizeof(sumOfLast10Digits));

	for (unsigned int i = 1; i < 1001; ++i)
	{
		memset(last10Digits, 0, sizeof(last10Digits));

		last10Digits[6] = i / 1000;
		last10Digits[7] = (i % 1000) / 100;
		last10Digits[8] = (i % 100) / 10;
		last10Digits[9] = (i % 10) / 1;

		for (unsigned int j = 1; j < i; ++j)
		{
			for (unsigned int k = 0; k < 10; ++k)
			{
				last10Digits[k] *= i;
			}

			for (unsigned int k = 9; k > 0; --k)
			{
				last10Digits[k - 1] += last10Digits[k] / 10;
				last10Digits[k] %= 10;
			}

			last10Digits[0] %= 10;
		}

		for (unsigned int j = 0; j < 10; ++j)
		{
			sumOfLast10Digits[j] += last10Digits[j];
		}

		for (unsigned int j = 9; j > 0; --j)
		{
			sumOfLast10Digits[j - 1] += sumOfLast10Digits[j] / 10;
			sumOfLast10Digits[j] %= 10;
		}

		sumOfLast10Digits[0] %= 10;
	}

	for (unsigned int i = 0; i < 10; ++i)
	{
		cout << sumOfLast10Digits[i];
	}

	cout << endl;
}
//9110846700
*/