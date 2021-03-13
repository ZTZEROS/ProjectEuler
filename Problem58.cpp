/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void main()
{
	unsigned int diagonalNumberCount = 0;
	unsigned int diagonalPrimeCount = 0;
	unsigned int diagonalPrimeRatio = 0;
	unsigned int diagonalNumber = 1;
	unsigned int theRemainder = 2;
	unsigned int squareRoot = 0;

	++diagonalNumberCount;
	
	for (unsigned int i = 2; diagonalPrimeRatio < 10; ++++i)
	{
		theRemainder = i;
		
		for (unsigned int k = 0; k < 4; ++k)
		{
			diagonalNumber += theRemainder;
			++diagonalNumberCount;
			cout << diagonalNumber << endl;

			squareRoot = sqrt(diagonalNumber);

			for (unsigned int j = 2; j < diagonalNumber; ++j)
			{
				if (!(diagonalNumber % j)) break;

				if (squareRoot < j)
				{
					++diagonalPrimeCount;
					break;
				}
			}
		}

		diagonalPrimeRatio = diagonalNumberCount / diagonalPrimeCount;
		//cout << diagonalPrimeRatio << endl;
	}

	cout << theRemainder + 1 << endl;
}
//26241
*/