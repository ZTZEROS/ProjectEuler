/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{ 
	vector<unsigned int> primesV;
	map<unsigned int, unsigned int> primesM;
	unsigned int firstIndexOfOver1000;

	primesV.push_back(2);
	primesM[2] = 1;

	for (unsigned int i = 3; i < 10000; ++++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				primesM[i] = primesM.size() + 1;
				break;
			}
		}
	}

	for (unsigned int j = 0; j < primesV.size(); ++j)
	{
		if (1000 < primesV[j])
		{
			firstIndexOfOver1000 = j;
			break;
		}
	}

	for (unsigned int i = firstIndexOfOver1000; i < primesV.size(); ++i)
	{
		unsigned int primesOver1000[3][4];
		bool isSame[4];

		unsigned int jMax = (9999 - primesV[i]) / 2 + 1;
		 
		for (unsigned int j = 1; j < jMax; ++j)
		{
			if (primesM.find(primesV[i] + j) != primesM.end())
			{
				primesOver1000[2][0] = (primesV[i]) / 1000;
				primesOver1000[2][1] = (primesV[i] % 1000) / 100;
				primesOver1000[2][2] = (primesV[i] % 100) / 10;
				primesOver1000[2][3] = (primesV[i] % 10) / 1;

				memset(isSame, 0, sizeof(isSame));

				primesOver1000[0][0] = (primesV[i] + j) / 1000;
				primesOver1000[0][1] = ((primesV[i] + j) % 1000) / 100;
				primesOver1000[0][2] = ((primesV[i] + j) % 100) / 10;
				primesOver1000[0][3] = ((primesV[i] + j) % 10) / 1;

				for (unsigned int k = 0; k < 4; ++k)
				{
					for (unsigned int l = 0; l < 4; ++l)
					{
						if (primesOver1000[2][k] == primesOver1000[0][l] && !isSame[l])
						{
							isSame[l] = 1;
							break;
						}
					}
				}

				if (isSame[0] + isSame[1] + isSame[2] + isSame[3] < 4) continue;

				if (primesM.find(primesV[i] + j + j) != primesM.end())
				{
					memset(isSame, 0, sizeof(isSame));

					primesOver1000[1][0] = (primesV[i] + j + j) / 1000;
					primesOver1000[1][1] = ((primesV[i] + j + j) % 1000) / 100;
					primesOver1000[1][2] = ((primesV[i] + j + j) % 100) / 10;
					primesOver1000[1][3] = ((primesV[i] + j + j) % 10) / 1;

					for (unsigned int k = 0; k < 4; ++k)
					{
						for (unsigned int l = 0; l < 4; ++l)
						{
							if (primesOver1000[2][k] == primesOver1000[1][l] && !isSame[l])
							{
								isSame[l] = 1;
								break;
							}
						}
					}

					if (isSame[0] + isSame[1] + isSame[2] + isSame[3] < 4) continue;

					vector<unsigned int> primeSequenceV;

					primeSequenceV.push_back(primesOver1000[0][0] * 1000 + primesOver1000[0][1] * 100 + primesOver1000[0][2] * 10 + primesOver1000[0][3]);
					primeSequenceV.push_back(primesOver1000[1][0] * 1000 + primesOver1000[1][1] * 100 + primesOver1000[1][2] * 10 + primesOver1000[1][3]);
					primeSequenceV.push_back(primesOver1000[2][0] * 1000 + primesOver1000[2][1] * 100 + primesOver1000[2][2] * 10 + primesOver1000[2][3]);

					sort(primeSequenceV.begin(), primeSequenceV.end());

					cout << primeSequenceV[0] << " " << primeSequenceV[1] << " " << primeSequenceV[2] << endl;

					break;
				}
			}
		}
	}
}
//296962999629
*/