/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	//vector<unsigned int[10]> pandigitalNumbersV;
	vector<unsigned int*> pandigitalNumbersV;

	for (unsigned short i0 = 1; i0 < 10; ++i0)
	{
		for (unsigned short i1 = 0; i1 < 10; ++i1)
		{
			if (i0 == i1) continue;

			for (unsigned short i2 = 0; i2 < 10; ++i2)
			{
				if (i0 == i2 || i1 == i2) continue;

				for (unsigned short i3 = 0; i3 < 10; ++i3)
				{
					if (i0 == i3 || i1 == i3 || i2 == i3) continue;

					for (unsigned short i4 = 0; i4 < 10; ++i4)
					{
						if (i0 == i4 || i1 == i4 || i2 == i4 || i3 == i4) continue;

						for (unsigned short i5 = 0; i5 < 10; ++i5)
						{
							if (i0 == i5 || i1 == i5 || i2 == i5 || i3 == i5 || i4 == i5) continue;

							for (unsigned short i6 = 0; i6 < 10; ++i6)
							{
								if (i0 == i6 || i1 == i6 || i2 == i6 || i3 == i6 || i4 == i6 || i5 == i6) continue;

								for (unsigned short i7 = 0; i7 < 10; ++i7)
								{
									if (i0 == i7 || i1 == i7 || i2 == i7 || i3 == i7 || i4 == i7 || i5 == i7 || i6 == i7) continue;

									for (unsigned short i8 = 0; i8 < 10; ++i8)
									{
										if (i0 == i8 || i1 == i8 || i2 == i8 || i3 == i8 || i4 == i8 || i5 == i8 || i6 == i8 || i7 == i8) continue;

										for (unsigned short i9 = 0; i9 < 10; ++i9)
										{
											if (i0 == i9 || i1 == i9 || i2 == i9 || i3 == i9 || i4 == i9 || i5 == i9 || i6 == i9 || i7 == i9) continue;

											unsigned int* pandigitalNumbers;

											pandigitalNumbers = new unsigned int[10];

											pandigitalNumbers[0] = i0;
											pandigitalNumbers[1] = i1;
											pandigitalNumbers[2] = i2;
											pandigitalNumbers[3] = i3;
											pandigitalNumbers[4] = i4;
											pandigitalNumbers[5] = i5;
											pandigitalNumbers[6] = i6;
											pandigitalNumbers[7] = i7;
											pandigitalNumbers[8] = i8;
											pandigitalNumbers[9] = i9;

											pandigitalNumbersV.push_back(pandigitalNumbers);
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

	unsigned long long sum = 0;

	for (unsigned int i = 0; i < pandigitalNumbersV.size(); ++i)
	{
		unsigned int pandigitalNumber;

		pandigitalNumber = pandigitalNumbersV[i][1] * 100 + pandigitalNumbersV[i][2] * 10 + pandigitalNumbersV[i][3];

		if (!(pandigitalNumber % 2))
		{
			pandigitalNumber = pandigitalNumbersV[i][2] * 100 + pandigitalNumbersV[i][3] * 10 + pandigitalNumbersV[i][4];
			
			if (!(pandigitalNumber % 3))
			{
				pandigitalNumber = pandigitalNumbersV[i][3] * 100 + pandigitalNumbersV[i][4] * 10 + pandigitalNumbersV[i][5];

				if (!(pandigitalNumber % 5))
				{
					pandigitalNumber = pandigitalNumbersV[i][4] * 100 + pandigitalNumbersV[i][5] * 10 + pandigitalNumbersV[i][6];

					if (!(pandigitalNumber % 7))
					{
						pandigitalNumber = pandigitalNumbersV[i][5] * 100 + pandigitalNumbersV[i][6] * 10 + pandigitalNumbersV[i][7];
						
						if (!(pandigitalNumber % 11))
						{ 
							pandigitalNumber = pandigitalNumbersV[i][6] * 100 + pandigitalNumbersV[i][7] * 10 + pandigitalNumbersV[i][8];

							if (!(pandigitalNumber % 13))
							{
								pandigitalNumber = pandigitalNumbersV[i][7] * 100 + pandigitalNumbersV[i][8] * 10 + pandigitalNumbersV[i][9];

								if (!(pandigitalNumber % 17))
								{
									sum += pandigitalNumbersV[i][0] * 1000000000 + pandigitalNumbersV[i][1] * 100000000 + pandigitalNumbersV[i][2] * 10000000 + pandigitalNumbersV[i][3] * 1000000 + pandigitalNumbersV[i][4] * 100000 + pandigitalNumbersV[i][5] * 10000 + pandigitalNumbersV[i][6] * 1000 + pandigitalNumbersV[i][7] * 100 + pandigitalNumbersV[i][8] * 10 + pandigitalNumbersV[i][9];
								}
							}
						}
					}
				}
			}
		}
	}

	cout << sum << endl;
}
//16695334890
*/