/*
n의 약수들 중에서 자신을 제외한 것의 합을 d(n)으로 정의했을 때,
서로 다른 두 정수 a, b에 대하여 d(a) = b 이고 d(b) = a 이면
a, b는 친화쌍이라 하고 a와 b를 각각 친화수(우애수)라고 합니다.

예를 들어 220의 약수는 자신을 제외하면 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110 이므로 그 합은 d(220) = 284 입니다.
또 284의 약수는 자신을 제외하면 1, 2, 4, 71, 142 이므로 d(284) = 220 입니다.
따라서 220과 284는 친화쌍이 됩니다.

10000 이하의 친화수들을 모두 찾아서 그 합을 구하세요.
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<unsigned int> divisorsV[10000];
	unsigned int sumOfDivisors[10000];
	vector<unsigned int> amicableNumbersV;
	unsigned int sumOfamicableNumbers;

	for (unsigned int i = 1; i < 10001; ++i)
	{
		for (unsigned int j = 1; j < (i / 2) + 1; ++j)
		{
			if ((i % j) == 0) divisorsV[i - 1].push_back(j);
		}
	}

	for (unsigned int i = 1; i < 10001; ++i)
	{
		unsigned int sumOfDivisor = 0;

		for (unsigned int j = 0; j < divisorsV[i - 1].size(); ++j)
		{
			sumOfDivisor += divisorsV[i - 1][j];
		}

		sumOfDivisors[i - 1] = sumOfDivisor;
	}

	for (unsigned int i = 1; i < 10001; ++i)
	{
		if (sumOfDivisors[i - 1] < 10001)
		{
			if (i == sumOfDivisors[sumOfDivisors[i - 1] - 1])
			{
				if (i != sumOfDivisors[i - 1]) amicableNumbersV.push_back(i);
			}
		}
	}

	sumOfamicableNumbers = 0;

	for (unsigned int i = 0; i < amicableNumbersV.size(); ++i)
	{
		sumOfamicableNumbers += amicableNumbersV[i];
	}

	cout << sumOfamicableNumbers << endl;
}
//31626
*/