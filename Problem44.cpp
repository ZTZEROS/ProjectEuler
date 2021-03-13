/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> pentagonalNumbersV;
	map<unsigned int, unsigned int> pentagonalNumbersM;
	unsigned int theRemainder = 0;

	for (unsigned int i = 1; theRemainder < 1; ++i)
	{
		pentagonalNumbersV.push_back(i * (3 * i - 1) / 2);
		pentagonalNumbersM[i * (3 * i - 1) / 2] = i;
	
		for (unsigned int j = 0; j < i / 2; ++j)
		{
			//pentagonalNumbersV[pentagonalNumbersV.size() - 1];
			if (pentagonalNumbersM.find(pentagonalNumbersV[i / 2] + pentagonalNumbersV[j]) != pentagonalNumbersM.end())
			{
				if (pentagonalNumbersM.find(pentagonalNumbersV[i / 2] - pentagonalNumbersV[j]) != pentagonalNumbersM.end())
				{
					theRemainder = pentagonalNumbersV[i / 2] - pentagonalNumbersV[j];
					break;
				}
			}
	
			
		}
	}

	cout << theRemainder << endl;

	//a(3 * a - 1) / 2 + b(3 * b - 1) / 2;
	//(a(3 * a - 1) + b(3 * b - 1)) / 2;
	//((a * 3 * a - a) + (b * 3 * b - b)) / 2;
	//(a * 3 * a - a + b * 3 * b - b) / 2;
	//(3 * (a * a + b * b) - a - b) / 2;
	//(3 * (a * a + b * b) - (a + b)) / 2;
	//(a + b)(3 * (a * a + b * b)/(a + b) - 1) / 2;
	//
	//8(3 * 8 - 1)
	//11(3 * 65/11 - 1)
	//
	//(3 * (64 + 1) - (8 + 3)) == (3 * 8 * 8 - 8)
	//
	//
	//a(3 * a - 1) / 2 - b(3 * b - 1) / 2;
	//(a(3 * a - 1) - b(3 * b - 1)) / 2;
}
//5482660
*/