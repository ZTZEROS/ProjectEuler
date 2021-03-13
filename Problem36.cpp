/*
#include <iostream>
#include <bitset>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> decimalPalindromesV;
	vector<bitset<32>> binaryPalindromesV;
	vector<bool> isDualPalindromesV;

	//%o octa decimal
	//%d decimal
	//%x hexa decimal
	
	unsigned int firstDigit = 1;
	unsigned int lastDigit = 1;

	for (unsigned int i = 1; i < 10; ++i)
	{
		decimalPalindromesV.push_back(i);

		decimalPalindromesV.push_back(i * 10 + i);

		for (unsigned int j = 0; j < 10; ++j)
		{
			decimalPalindromesV.push_back(i * 100 + j * 10 + i);
		}

		for (unsigned int j = 0; j < 10; ++j)
		{
			decimalPalindromesV.push_back(i * 1000 + j * 100 + j * 10 + i);

			for (unsigned int k = 0; k < 10; ++k)
			{
				decimalPalindromesV.push_back(i * 10000 + j * 1000 + k * 100 + j * 10 + i);
			}

			for (unsigned int k = 0; k < 10; ++k)
			{
				decimalPalindromesV.push_back(i * 100000 + j * 10000 + k * 1000 + k * 100 + j * 10 + i);
			}
		}
	}

	//sort(decimalPalindromesV.begin(), decimalPalindromesV.end());

	for (unsigned int i = 0; i < decimalPalindromesV.size(); ++i)
	{
		binaryPalindromesV.push_back(decimalPalindromesV[i]);
		isDualPalindromesV.push_back(1);

		for (unsigned int j = binaryPalindromesV[i].size() - 1; j > 0; --j)
		{
			if (!binaryPalindromesV[i][j]) continue;

			for (unsigned int k = 0; k < (j + 1) / 2; ++k)
			{
				if (binaryPalindromesV[i][k] != binaryPalindromesV[i][j - k])
				{
					isDualPalindromesV[i] = 0;
					break;
				}
			}

			break;
		}
	}

	unsigned int sum = 0;

	for (unsigned int i = 0; i < decimalPalindromesV.size(); ++i)
	{
		if (isDualPalindromesV[i])
		{
			sum += decimalPalindromesV[i];
			cout << decimalPalindromesV[i] << endl;
			cout << binaryPalindromesV[i] << endl;
		}
	}

	cout << sum << endl;
}
//872187
*/