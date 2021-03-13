/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned short pences[8];
	
	pences[0] = 200; //0~1
	pences[1] = 100; //0~2
	pences[2] = 50; //0~4
	pences[3] = 20; //0~10
	pences[4] = 10; //0~20
	pences[5] = 5; //0~40
	pences[6] = 2; //0~100
	pences[7] = 1; //0~200

	unsigned int methodCount = 0;
	unsigned short penceSum = 0;

	for (unsigned short i200 = 0; i200 < 2; ++i200)
	{
		if (penceSum + i200 * 200 > 200) break;
		
		penceSum += i200 * 200;

		for (unsigned short i100 = 0; i100 < 3; ++i100)
		{
			if (penceSum + i100 * 100 > 200) break;

			penceSum += i100 * 100;

			for (unsigned short i50 = 0; i50 < 5; ++i50)
			{
				if (penceSum + i50 * 50> 200) break;
				
				penceSum += i50 * 50;

				for (unsigned short i20 = 0; i20 < 11; ++i20)
				{
					if (penceSum + i20 * 20 > 200) break;
				
					penceSum += i20 * 20;

					for (unsigned short i10 = 0; i10 < 21; ++i10)
					{
						if (penceSum + i10 * 10 > 200) break;

						penceSum += i10 * 10;

						for (unsigned short i5 = 0; i5 < 41; ++i5)
						{
							if (penceSum + i5 * 5 > 200) break;

							penceSum += i5 * 5;

							for (unsigned short i2 = 0; i2 < 101; ++i2)
							{
								if (penceSum + i2 * 2> 200) break;

								penceSum += i2 * 2;

								for (unsigned short i1 = 0; i1 < 201; ++i1)
								{
									if (penceSum + i1 * 1> 200) break;

									penceSum += i1 * 1;

									if (penceSum == 200) ++methodCount;

									penceSum -= i1 * 1;
								}

								penceSum -= i2 * 2;
							}

							penceSum -= i5 * 5;
						}

						penceSum -= i10 * 10;
					}

					penceSum -= i20 * 20;
				}

				penceSum -= i50 * 50;
			}

			penceSum -= i100 * 100;
		}

		penceSum -= i200 * 200;
	}

	cout << methodCount << endl;

	//for(unsigned short j = 0; j < 8; ++j)
	//{
	//	unsigned short methodCount = 0;
	//	unsigned short penceSum = 0;
	//
	//	for (unsigned int i = j; i < 8;)
	//	{
	//		if (penceSum + pences[i] < 201) penceSum += pences[i];
	//		else ++i;
	//	}
	//
	//	++methodCount;
	//}

	//200
	//100 + 100
	//100 + 50 + 50
	//100 + 50 + 20 + 20 + 10
	//100 + 50 + 20 + 20 + 5 + 5
	//100 + 50 + 20 + 20 + 5 + 2 + 2 + 1
	//100 + 50 + 20 + 20 + 5 + 2 + 1 + 1 + 1

	//1 -> 1 : 1
	//2 -> 2, 1 + 1 : 2
	//5 -> 5, 2 + 2 + 1, 2 + 1 + 1 + 1, 1 + 1 + 1 + 1 + 1 : 4
	//10 -> 10, 5 + 5, 5 + 2 + 2 + 1, 5 + 2 + 1 + 1 + 1, 5 + 1 + 1 + 1 + 1 + 1,
	//               , 2 + 2 + 1 + 2 + 2 + 1, 2 + 2 + 1 + 2 + 1 + 1 + 1, 2 + 2 + 1 + 1 + 1 + 1 + 1 + 1, 2 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1, 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1,
	//               , 2 + 2 + 2 + 2 + 2 : 11
	//20 -> 20, 10 + 10, 10 + ...
	//                 , 5 + 5 + ...
}
//73682
*/