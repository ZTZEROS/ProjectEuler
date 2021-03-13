/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> triangularNumbersV;
	map<unsigned int, unsigned int> pentagonalNumbersM;
	map<unsigned int, unsigned int> hexagonalNumbersM;

	unsigned int tphNumber = 0; //triangularPentagonalHexagonalNumber;

	//triangularNumbersV.push_back(1);
	//pentagonalNumbersM[1] = 1;
	//hexagonalNumbersM[1] = 1;

	//for (unsigned int i = 2; tphNumber < 40756; ++i)
	for (unsigned int i = 1; tphNumber < 40756; ++i)
	{
		triangularNumbersV.push_back(i * (i + 1) / 2);
		pentagonalNumbersM[i * (3 * i - 1) / 2] = i;
		hexagonalNumbersM[i * (2 * i - 1)] = i;

		//for (unsigned int j = pentagonalNumbersM.size(); triangularNumbersV[i - 1] > ((--pentagonalNumbersM.end())->first); ++j)
		//{
		//	pentagonalNumbersM[j * (3 * j - 1) / 2] = j;
		//
		//	for (unsigned int k = hexagonalNumbersM.size(); pentagonalNumbersM.rbegin()->first > hexagonalNumbersM.rbegin()->first; ++k)
		//	{
		//		hexagonalNumbersM[k * (2 * k - 1)] = k;
		//	}
		//}

		if (pentagonalNumbersM.find(triangularNumbersV[i - 1]) != pentagonalNumbersM.end())
		{
			if (hexagonalNumbersM.find(triangularNumbersV[i - 1]) != hexagonalNumbersM.end()) tphNumber = triangularNumbersV[i - 1];
		}
	}

	cout << tphNumber << endl;
}
//1533776805
*/