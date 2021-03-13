/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int lychrelNumberCount = 0;

	for (unsigned int i = 1; i < 10001; ++i)
	{
		unsigned long long int currentNumber = i;
		unsigned long long int temporaryNumber, reversedNumber;
		bool isLychrel;

		for (unsigned int j = 0; j < 49; ++j)
		{
			vector<unsigned int> currentDigitsV;
			vector<unsigned int> temporaryDigitsV;
			
			temporaryNumber = currentNumber;
			reversedNumber = 0;
			isLychrel = 0;

			while (temporaryNumber > 0)
			{
				currentDigitsV.push_back(temporaryNumber % 10);
				temporaryNumber /= 10;
			}

			for (unsigned int k = 0; k < currentDigitsV.size(); ++k)
			{
				reversedNumber *= 10;
				reversedNumber += currentDigitsV[k];
			}

			currentNumber += reversedNumber;
			temporaryNumber = currentNumber;

			while (temporaryNumber > 0)
			{
				temporaryDigitsV.push_back(temporaryNumber % 10);
				temporaryNumber /= 10;
			}

			for (unsigned int k = 0; k < temporaryDigitsV.size() / 2; ++k)
			{
				if (temporaryDigitsV[k] == temporaryDigitsV[temporaryDigitsV.size() - k - 1]) continue;

				isLychrel = 1;
				break;
			}

			if (!isLychrel)
			{
				//cout << i << ", " << j << ", " << currentNumber << endl;
				break;
			}
		}

		if (isLychrel) ++lychrelNumberCount;
	}

	cout << lychrelNumberCount << endl;
}
//249
*/