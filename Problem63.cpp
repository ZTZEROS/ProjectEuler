/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <list>
#include <vector>
#include <math.h>
#include <time.h>

using namespace std;

void main()
{
	unsigned long initialTime = clock();

	unsigned long nDigitCount = 0;

	for (unsigned long i = 1; i < 10; ++i)
	{
		unsigned long currentNumber;

		currentNumber = 1;

		for (unsigned long n = 1;;)
		{
			unsigned long digit = 0;

			currentNumber *= i;

			digit = (n * log10(i)) / 1 + 1;

			if (digit == n)
			{
				++nDigitCount;

				cout << i << ", " << n << ", " << nDigitCount << endl;

				++n;
			}
			else break;
		}

		cout << endl;
	}

	cout << nDigitCount << endl;

	cout << "Elapsed time : " << clock() - initialTime << " ms" << endl;
}
*/
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
	unsigned long initialTime = clock();

	unsigned long nDigitCount = 0;

	for (unsigned long i = 1; i < 10; ++i)
	{
		vector<unsigned long> currentNumbersV;
		
		currentNumbersV.reserve(30);
		currentNumbersV.push_back(1);

		for (unsigned long n = 1;;)
		{
			unsigned long temporaryNumber = 0;
			unsigned long digit = 0;


			for (unsigned int j = 0; j < currentNumbersV.size(); ++j)
			{
				currentNumbersV[j] *= i;
			}

			for (unsigned int j = 0; j < currentNumbersV.size(); ++j)
			{
				if (currentNumbersV[j] > 9)
				{
					if (j < currentNumbersV.size() - 1) currentNumbersV[j + 1] += currentNumbersV[j] / 10;
					else currentNumbersV.push_back(currentNumbersV[j] / 10);
					
					currentNumbersV[j] %= 10;
				}
			}

			digit = currentNumbersV.size();

			//for (unsigned int j = 0; j < currentNumbersV.size(); ++j)
			//{
			//	temporaryNumber = currentNumbersV[j];
			//	
			//	while (temporaryNumber > 0)
			//	{
			//		++digit;
			//		temporaryNumber /= 10;
			//	}
			//}

			if (digit == n)
			{
				++nDigitCount;
				
				for (unsigned int j = currentNumbersV.size(); j > 0; --j)
				{
					cout << currentNumbersV[j - 1];
				}

				cout << ", " << n << ", " << nDigitCount << endl;
				
				++n;
			}
			else break;
		}

		cout << endl;
	}

	cout << nDigitCount << endl;

	cout << "Elapsed time : " << clock() - initialTime << " ms" << endl;
}
*/