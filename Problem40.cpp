/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int digitCount = 0;
	unsigned int product = 1;
	unsigned int number = 0;
	
	while (digitCount < 1000000)
	{
		++number;
		
		unsigned int currentNumber = number;
		unsigned int digits = 10;

		while (digits < number + 1)
		{
			digits *= 10;
		}

		while (digits > 1)
		{
			++digitCount;
			digits /= 10;

			if (digitCount == 1 || digitCount == 10 || digitCount == 100 || digitCount == 1000 || digitCount == 10000 || digitCount == 100000 || digitCount == 1000000)
			{
				cout << (currentNumber / digits) << endl;
				product *= (currentNumber / digits);
			}

			currentNumber %= digits;
		}
	}

	cout << product << endl;
}
//210
*/