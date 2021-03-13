/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <list>
#include <vector>
#include <time.h>

using namespace std;

void main()
{
	vector<unsigned __int64> cubesV;
	vector<vector<unsigned __int64>> digitsV;
	vector<unsigned __int64> digitCodesV;
	vector<vector<unsigned __int64>> digitCodeCountsV;

	unsigned __int64 minimumCube = 0;
	unsigned __int64 maxRepeatCount = 0;

	{
		vector <unsigned __int64> currentCode;

		currentCode.resize(2);

		currentCode[0] = 100000000;
		currentCode[1] = 0;

		digitCodeCountsV.push_back(currentCode);
	}

	for (unsigned __int64 i = 1; maxRepeatCount < 5; ++i)
	{
		vector<unsigned __int64> digits;
		unsigned __int64 digit = 0;
		unsigned __int64 currentNumber = 0;
		
		digits.resize(10);

		cubesV.push_back(i * i * i);

		currentNumber = cubesV[i-1];

		while (currentNumber > 0)
		{
			++digit;

			++digits[currentNumber % 10];

			currentNumber /= 10;
		}

		digitsV.push_back(digits);

		unsigned __int64 digitCode = 0;

		for (unsigned __int64 j = 0; j < 10; ++j)
		{
			digitCode *= 10;
			digitCode += digitsV[i-1][j];
		}

		digitCodesV.push_back(digitCode);

		for(unsigned __int64 j = 0; j < digitCodeCountsV.size(); ++j)
		{
			if (digitCodeCountsV[j][0] == digitCode)
			{
				++digitCodeCountsV[j][1];

				if (digitCodeCountsV[j][1] > 4)
				{
					maxRepeatCount = digitCodeCountsV[j][1];

					for (unsigned __int64 k = 0; k < digitCodesV.size(); ++k)
					{
						if (digitCodeCountsV[j][0] == digitCodesV[k])
						{
							minimumCube = cubesV[k];
							break;
						}
					}
				}

				//cout << digitCodeCountsV[j][0] << ", " << digitCodeCountsV[j][1] << endl;

				break;
			}
			else if (j == digitCodeCountsV.size() - 1)
			{
				vector <unsigned __int64> currentCode;

				currentCode.resize(2);

				currentCode[0] = digitCode;
				currentCode[1] = 1;

				digitCodeCountsV.push_back(currentCode);

				//cout << currentCode[0] << ", " << currentCode[1] << endl;

				break;
			}
		}

		//cout << cubesV[i-1] << ", " << digitsV[i-1][0] << digitsV[i-1][1] << digitsV[i - 1][2] << digitsV[i - 1][3] << digitsV[i - 1][4] << digitsV[i - 1][5] << digitsV[i - 1][6] << digitsV[i - 1][7] << digitsV[i - 1][8] << digitsV[i - 1][9] << endl;
		
	}

	cout << minimumCube << endl;
}
//127035954683
*/