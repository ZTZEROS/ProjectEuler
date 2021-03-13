/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<vector<unsigned int>> decimalFractionsV;

	for (unsigned int i = 2; i < 1000; ++i)
	{
		vector<unsigned int> decimalFractionV;

		//1. 순환소수가 아닌 경우는 없음. 유리수이므로 모두 순환소수이거나 정수
		
		//2. 같은 숫자가 여러번 나오면서도 순환이 아닌 경우 : 10의 자리 숫자라면 마지막 두자리와 앞쪽 두 자리 숫자를 체크, 100의 자리 숫자라면 마지막 세자리와 앞쪽 세 자리 숫자를 체크
		//3. 순환마디가 float 범위를 넘어가는 경우 : 나누기를 따로 구현해 각 자리마다 벡터에 넣음


		unsigned int dividend = 1;

		if (i < 10)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend >= i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 0; j < decimalFractionV.size() - 1; ++j)
				{
					if (decimalFractionV.size() < 2) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1]) loop = 0;
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}
		else if (i < 100)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend > i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 1; j < decimalFractionV.size() - 1; ++++j)
				{
					if (decimalFractionV.size() < 3) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1])
					{
						if (decimalFractionV[j - 1] == decimalFractionV[decimalFractionV.size() - 2]) loop = 0;
					}
					
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}
		else if (i < 1000)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend > i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 2; j < decimalFractionV.size() - 1; ++++++j)
				{
					if (decimalFractionV.size() < 4) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1])
					{
						if (decimalFractionV[j - 1] == decimalFractionV[decimalFractionV.size() - 2])
						{
							if (decimalFractionV[j - 2] == decimalFractionV[decimalFractionV.size() - 3]) loop = 0;
						}
					}
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}

		decimalFractionsV.push_back(decimalFractionV);
	}

	unsigned int longestDecimalFraction = 0;
	unsigned int base = 0;

	for (unsigned int i = 2; i < 1000; ++i)
	{
		if (longestDecimalFraction < decimalFractionsV[i - 2].size())
		{
			longestDecimalFraction = decimalFractionsV[i - 2].size();
			base = i;
		}
	}

	cout << base << endl;
}
983
*/