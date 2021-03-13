/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> currentNumeratorDigitsV;
	vector<unsigned int> currentDenominatorDigitsV;
	unsigned int digitExceedingCount = 0;

	currentNumeratorDigitsV.push_back(3);
	currentDenominatorDigitsV.push_back(2);

	for (unsigned int i = 1; i < 1001; ++i)
	{
		for (unsigned int j = 0; j < currentDenominatorDigitsV.size(); ++j)
		{
			currentNumeratorDigitsV[j] = currentDenominatorDigitsV[j] * 2 + currentNumeratorDigitsV[j];
		}
		
		for (unsigned int j = 0; j < currentDenominatorDigitsV.size(); ++j)
		{
			currentDenominatorDigitsV[j] = currentNumeratorDigitsV[j] - currentDenominatorDigitsV[j];
		}

		for (unsigned int j = 0; j < currentNumeratorDigitsV.size(); ++j)
		{
			if (currentNumeratorDigitsV[j] > 9)
			{
				if (j + 1 < currentNumeratorDigitsV.size()) currentNumeratorDigitsV[j + 1] += currentNumeratorDigitsV[j] / 10;
				else currentNumeratorDigitsV.push_back(currentNumeratorDigitsV[j] / 10);

				currentNumeratorDigitsV[j] %= 10;
			}
		}

		for (unsigned int j = 0; j < currentDenominatorDigitsV.size(); ++j)
		{
			if (currentDenominatorDigitsV[j] > 9)
			{
				if (j + 1 < currentDenominatorDigitsV.size()) currentDenominatorDigitsV[j + 1] += currentDenominatorDigitsV[j] / 10;
				else currentDenominatorDigitsV.push_back(currentDenominatorDigitsV[j] / 10);

				currentDenominatorDigitsV[j] %= 10;
			}
		}

		if (currentNumeratorDigitsV.size() > currentDenominatorDigitsV.size())
		{
			++digitExceedingCount;

			currentNumeratorDigitsV[currentNumeratorDigitsV.size() - 2] += currentNumeratorDigitsV[currentNumeratorDigitsV.size() - 1] * 10;

			currentNumeratorDigitsV.pop_back();
		}
	}

	cout << digitExceedingCount << endl;
}
//153
*/