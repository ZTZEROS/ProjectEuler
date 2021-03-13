/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> numeratorsV;
	unsigned int numerator;
	unsigned int numerator1, numerator2;

	vector<unsigned int> denominatorsV;
	unsigned int denominator;
	unsigned int denominator1, denominator2;

	vector<unsigned int> divisorsV;

	for (unsigned short i = 10; i < 100; ++i)
	{
		numerator = i;

		numerator1 = (numerator % 100) / 10;
		numerator2 = (numerator % 10) / 1;

		if (numerator1 == numerator2 || numerator2 == 0) continue;

		for (unsigned short j = numerator + 1; j < 100; ++j)
		{
			denominator = j;

			denominator1 = (denominator % 100) / 10;
			denominator2 = (denominator % 10) / 1;

			if (denominator1 == denominator2 || denominator2 == 0) continue;

			if (numerator1 == denominator1)
			{
				if (abs((numerator / (float)denominator) - (numerator2 / (float)denominator2)) < 0.00001f)
				{
					numeratorsV.push_back(numerator);
					denominatorsV.push_back(denominator);
				}
			}
			else if (numerator1 == denominator2)
			{
				if (abs((numerator / (float)denominator) - (numerator2 / (float)denominator1)) < 0.00001f)
				{
					numeratorsV.push_back(numerator);
					denominatorsV.push_back(denominator);
				}
			}
			else if (numerator2 == denominator1)
			{
				if (abs((numerator / (float)denominator) - (numerator1 / (float)denominator2)) < 0.00001f)
				{
					numeratorsV.push_back(numerator);
					denominatorsV.push_back(denominator);
				}
			}
			else if (numerator2 == denominator2)
			{
				if (abs((numerator / (float)denominator) - (numerator1 / (float)denominator1)) < 0.00001f)
				{
					numeratorsV.push_back(numerator);
					denominatorsV.push_back(denominator);
				}
			}
		}
	}

	numerator = numeratorsV[0] * numeratorsV[1] * numeratorsV[2] * numeratorsV[3];
	denominator = denominatorsV[0] * denominatorsV[1] * denominatorsV[2] * denominatorsV[3];

	cout << numerator << " / " << denominator << endl;

	for (unsigned short i = 0; i < numeratorsV.size(); ++i)
	{
		//for (unsigned short j = 2; j < sqrt(numeratorsV[i];)
		for (unsigned short j = 2; j < 10;) //2, 3, 5, 7;
		{
			if (numeratorsV[i] % j) ++j;
			else
			{
				divisorsV.push_back(j);
				numeratorsV[i] /= j;
			}
		}

		if (numeratorsV[i] == 1) continue;

		divisorsV.push_back(numeratorsV[i]);
		numeratorsV[i] /= numeratorsV[i];
	}

	for (unsigned short i = 0; i < divisorsV.size(); ++i)
	{
		if (denominator % divisorsV[i]) continue;
		else denominator /= divisorsV[i];
	}

	cout << denominator << endl;
}
//100
*/