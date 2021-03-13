/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	//1 4 4
	//2 3 4
	//3 2 4
	//4 1 4

	map<unsigned short, unsigned short> pandigitalNumbersM;
	map<unsigned short, unsigned short>::iterator pandigitalNumbersMI;
	unsigned int arbitraryNumber1;
	unsigned int arbitraryNumber2;
	unsigned int arbitraryNumber3;
	unsigned int arbitraryNumber4;

	unsigned short a, b, c, d;

	for (unsigned short i1 = 1; i1 < 10; ++i1)
	{
		for (unsigned short i2 = 1; i2 < 10; ++i2)
		{
			if (i1 == i2) continue;
			
			for (unsigned short i3 = 1; i3 < 10; ++i3)
			{
				if (i1 == i3 || i2 == i3) continue;

				for (unsigned short i4 = 1; i4 < 10; ++i4)
				{
					if (i1 == i4 || i2 == i4 || i3 == i4) continue;

					for (unsigned short i5 = 1; i5 < 10; ++i5)
					{
						if (i1 == i5 || i2 == i5 || i3 == i5 || i4 == i5) continue;

						arbitraryNumber1 = (i1) * (i2 * 1000 + i3 * 100 + i4 * 10 + i5);
						arbitraryNumber2 = (i1 * 10 + i2) * (i3 * 100 + i4 * 10 + i5);
						//arbitraryNumber3 = (i1 * 100 + i2 * 10 + i3) * (i4 * 10 + i5);
						//arbitraryNumber4 = (i1 * 1000 + i2 * 100 + i3 * 10 + i4) * (i5);

						if (1000 < arbitraryNumber1 && arbitraryNumber1 < 10000)
						{
							a = arbitraryNumber1 / 1000;

							if (i1 == a || i2 == a || i3 == a || i4 == a || i5 == a || a == 0);
							else
							{
								b = (arbitraryNumber1 % 1000) / 100;

								if (i1 == b || i2 == b || i3 == b || i4 == b || i5 == b || a == b || b == 0);
								else
								{
									c = (arbitraryNumber1 % 100) / 10;

									if (i1 == c || i2 == c || i3 == c || i4 == c || i5 == c || a == c || b == c || c == 0);
									else
									{
										d = arbitraryNumber1 % 10 / 1;

										if (i1 == d || i2 == d || i3 == d || i4 == d || i5 == d || a == d || b == d || c == d || d == 0);
										else pandigitalNumbersM[arbitraryNumber1] = arbitraryNumber1;
									}
								}
							}
						}

						if (1000 < arbitraryNumber2 && arbitraryNumber2 < 10000)
						{
							a = arbitraryNumber2 / 1000;

							if (i1 == a || i2 == a || i3 == a || i4 == a || i5 == a || a == 0);
							else
							{
								b = (arbitraryNumber2 % 1000) / 100;

								if (i1 == b || i2 == b || i3 == b || i4 == b || i5 == b || a == b || b == 0);
								else
								{
									c = (arbitraryNumber2 % 100) / 10;

									if (i1 == c || i2 == c || i3 == c || i4 == c || i5 == c || a == c || b == c || c == 0);
									else
									{
										d = arbitraryNumber2 % 10 / 1;

										if (i1 == d || i2 == d || i3 == d || i4 == d || i5 == d || a == d || b == d || c == d || d == 0);
										else pandigitalNumbersM[arbitraryNumber2] = arbitraryNumber2;
									}
								}
							}
						}


						//if (1000 < arbitraryNumber3 && arbitraryNumber3 < 10000)
						//{
						//	a = arbitraryNumber3 / 1000;
						//
						//	if (i1 == a || i2 == a || i3 == a || i4 == a || i5 == a || a == 0) continue;
						//
						//	b = (arbitraryNumber3 % 1000) / 100;
						//
						//	if (i1 == b || i2 == b || i3 == b || i4 == b || i5 == b || a == b || b == 0) continue;
						//
						//	c = (arbitraryNumber3 % 100) / 10;
						//
						//	if (i1 == c || i2 == c || i3 == c || i4 == c || i5 == c || a == c || b == c || c == 0) continue;
						//
						//	d = arbitraryNumber3 % 10 / 1;
						//
						//	if (i1 == d || i2 == d || i3 == d || i4 == d || i5 == d || a == d || b == d || c == d || d == 0) continue;
						//
						//
						//	pandigitalNumbersM[arbitraryNumber3] = arbitraryNumber3;
						//}
						//
						//
						//if (1000 < arbitraryNumber4 && arbitraryNumber4 < 10000)
						//{
						//	a = arbitraryNumber4 / 1000;
						//
						//	if (i1 == a || i2 == a || i3 == a || i4 == a || i5 == a || a == 0) continue;
						//
						//	b = (arbitraryNumber4 % 1000) / 100;
						//
						//	if (i1 == b || i2 == b || i3 == b || i4 == b || i5 == b || a == b || b == 0) continue;
						//
						//	c = (arbitraryNumber4 % 100) / 10;
						//
						//	if (i1 == c || i2 == c || i3 == c || i4 == c || i5 == c || a == c || b == c || c == 0) continue;
						//
						//	d = arbitraryNumber4 % 10 / 1;
						//
						//	if (i1 == d || i2 == d || i3 == d || i4 == d || i5 == d || a == d || b == d || c == d || d == 0) continue;
						//
						//
						//	pandigitalNumbersM[arbitraryNumber4] = arbitraryNumber4;
						//}
					}
				}
			}
		}
	}

	unsigned int sum = 0;

	for (pandigitalNumbersMI = pandigitalNumbersM.begin(); pandigitalNumbersMI != pandigitalNumbersM.end(); ++pandigitalNumbersMI)
	{
		sum += pandigitalNumbersMI->second;
	}

	cout << sum << endl;
}
//45228
*/