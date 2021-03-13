/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> primesV;
	vector<unsigned int> pandigitalsV;
	vector<bool> isPandigitalsV;
	unsigned int maxPandigitalPrime = 0;

	for (unsigned int i = 2; i < 40000; ++i) // i < 1000000000; //i < sqrt(1000000000) // i<31623 //i < 31622.77...
	{
		unsigned int squareRoot = sqrt(i);
		bool isPrime = 1;

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (squareRoot < primesV[j]) break;

			if (!(i % primesV[j]))
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			primesV.push_back(i);
			isPandigitalsV.push_back(1);
		}
	}

	cout << primesV.size() << endl;

	for (unsigned int i0 = 2; i0 < 11; ++i0)
	{
		for (unsigned short i1 = 1; i1 < i0; ++i1)
		{
			if(i0 == 2) pandigitalsV.push_back(i1);

			for (unsigned short i2 = 1; i2 < i0; ++i2)
			{
				if (i1 == i2) continue;

				if (i0 == 3) pandigitalsV.push_back(i1 * 10 + i2);

				for (unsigned short i3 = 1; i3 < i0; ++i3)
				{
					if (i1 == i3 || i2 == i3) continue;

					if (i0 == 4) pandigitalsV.push_back(i1 * 100 + i2 * 10 + i3);

					for (unsigned short i4 = 1; i4 < i0; ++i4)
					{
						if (i1 == i4 || i2 == i4 || i3 == i4) continue;

						if (i0 == 5) pandigitalsV.push_back(i1 * 1000 + i2 * 100 + i3 * 10 + i4);

						for (unsigned short i5 = 1; i5 < i0; ++i5)
						{
							if (i1 == i5 || i2 == i5 || i3 == i5 || i4 == i5) continue;

							if (i0 == 6) pandigitalsV.push_back(i1 * 10000 + i2 * 1000 + i3 * 100 + i4 * 10 + i5);

							for (unsigned short i6 = 1; i6 < i0; ++i6)
							{
								if (i1 == i6 || i2 == i6 || i3 == i6 || i4 == i6 || i5 == i6) continue;

								if (i0 == 7) pandigitalsV.push_back(i1 * 100000 + i2 * 10000 + i3 * 1000 + i4 * 100 + i5 * 10 + i6);

								for (unsigned short i7 = 1; i7 < i0; ++i7)
								{
									if (i1 == i7 || i2 == i7 || i3 == i7 || i4 == i7 || i5 == i7 || i6 == i7) continue;

									if (i0 == 8) pandigitalsV.push_back(i1 * 1000000 + i2 * 100000 + i3 * 10000 + i4 * 1000 + i5 * 100 + i6 * 10 + i7);

									for (unsigned short i8 = 1; i8 < i0; ++i8)
									{
										if (i1 == i8 || i2 == i8 || i3 == i8 || i4 == i8 || i5 == i8 || i6 == i8 || i7 == i8) continue;

										if (i0 == 9) pandigitalsV.push_back(i1 * 10000000 + i2 * 1000000 + i3 * 100000 + i4 * 10000 + i5 * 1000 + i6 * 100 + i7 * 10 + i8);

										for (unsigned short i9 = 1; i9 < i0; ++i9)
										{
											if (i1 == i9 || i2 == i9 || i3 == i9 || i4 == i9 || i5 == i9 || i6 == i9 || i7 == i9 || i8 == i9) continue;

											pandigitalsV.push_back(i1 * 100000000 + i2 * 10000000 + i3 * 1000000 + i4 * 100000 + i5 * 10000 + i6 * 1000 + i7 * 100 + i8 * 10 + i9);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	//for (unsigned int i = 0; i < primesV.size(); ++i)
	//{
	//	unsigned int digits = 10;
	//	unsigned int currentPrime = primesV[i];
	//	unsigned int firstNumber = 0;
	//	bool isPandigitals[10];
	//
	//	memset(isPandigitals, 0, sizeof(isPandigitals));
	//
	//	while(digits < currentPrime)
	//	{
	//		digits *= 10;
	//	}
	//
	//	while(digits > 1)
	//	{
	//		digits /= 10;
	//
	//		firstNumber = currentPrime / digits;
	//
	//		for (unsigned int k = 0; k < 10; ++k)
	//		{
	//			if (isPandigitals[i] == firstNumber) isPandigitals[i] = 1;
	//		}
	//
	//		currentPrime %= digits;
	//	}
	//
	//	for (unsigned int k = 0; k < 10; ++k)
	//	{
	//		if (!isPandigitals[i]) isPandigitalsV[i] = 0;
	//	}
	//}
	//
	//
	//for (unsigned int j = 0; j < primesV.size(); ++j)
	//{
	//	if (isPandigitalsV[j])
	//	{
	//		if (maxPandigitalPrime < primesV[j]) maxPandigitalPrime = primesV[j];
	//	}
	//}

	for (unsigned int i = 0; i < pandigitalsV.size(); ++i)
	{
		bool isPrime = 1;

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(pandigitalsV[i] % primesV[j]))
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			if (maxPandigitalPrime < pandigitalsV[i])
			{
 				maxPandigitalPrime = pandigitalsV[i];
			}
		}
	}

	cout << maxPandigitalPrime << endl;
}
//7652413
*/