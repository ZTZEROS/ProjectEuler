/*
자신을 제외한 약수(진약수)를 모두 더하면 자기 자신이 되는 수를 완전수라고 합니다.
예를 들어 28은 1 + 2 + 4 + 7 + 14 = 28 이므로 완전수입니다.
또, 진약수의 합이 자신보다 작으면 부족수, 자신보다 클 때는 초과수라고 합니다.
12는 1 + 2 + 3 + 4 + 6 = 16 > 12 로서 초과수 중에서는 가장 작습니다.
따라서 초과수 두 개의 합으로 나타낼 수 있는 수 중 가장 작은 수는 24 (= 12 + 12) 입니다.
해석학적인 방법을 사용하면, 28123을 넘는 모든 정수는 두 초과수의 합으로 표현 가능함을 보일 수가 있습니다.
두 초과수의 합으로 나타낼 수 없는 가장 큰 수는 실제로는 이 한계값보다 작지만, 해석학적인 방법으로는 더 이상 이 한계값을 낮출 수 없다고 합니다.
그렇다면, 초과수 두 개의 합으로 나타낼 수 없는 모든 양의 정수의 합은 얼마입니까?
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	vector<unsigned int> abundantsV;
	//vector<unsigned int> pseudoPrimesV;
	vector<unsigned int> divisorsV[28123];
	unsigned int sumOfDivisors[28123];
	bool sumOfAbundants[28123];

	memset(sumOfDivisors, 0, sizeof(sumOfDivisors));
	memset(sumOfAbundants, 0, sizeof(sumOfAbundants));

	for (unsigned int i = 1; i < 28124; ++i)
	{
		for (unsigned int j = 1; j < (i / 2) + 1; ++j)
		{
			if ((i % j) == 0) divisorsV[i - 1].push_back(j);
		}
	}

	for (unsigned int i = 1; i < 28124; ++i)
	{
		for (unsigned int j = 0; j < divisorsV[i - 1].size(); ++j)
		{
			sumOfDivisors[i - 1] += divisorsV[i - 1][j];
		}

		if (i < sumOfDivisors[i - 1]) abundantsV.push_back(i);
		//if (i - 1 < sumOfDivisors[i - 1]) pseudoPrimesV.push_back(i - 1); //소수가 대거 추려지는 특이사항 발견, 35등 예외 있음
	}

	for (unsigned int i = 0; i < abundantsV.size(); ++i)
	{
		//cout << abundantsV[i] << endl;

		for (unsigned int j = i; j < abundantsV.size(); ++j)
		{
			//if (abundantsV[i] + abundantsV[j] < 28124) sumOfAbundants[abundantsV[i] + abundantsV[j] - 1] = 1;
			//else break;

			if (abundantsV[i] + abundantsV[j] > 28123) break;
			
			sumOfAbundants[abundantsV[i] + abundantsV[j] - 1] = 1;
		}
	}

	unsigned int finalSum = 0;

	for (unsigned int i = 0; i < 28124; ++i)
	{
		if (sumOfAbundants[i]) continue;
		
		finalSum += i + 1;
	}

	cout << finalSum << endl;
}
//4179871
*/