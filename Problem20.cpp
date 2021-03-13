/*
n! 이라는 표기법은 n × (n − 1) × ... × 3 × 2 × 1을 뜻합니다.

예를 들자면 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800 이 되는데,
여기서 10!의 각 자리수를 더해 보면 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27 입니다.

100! 의 자리수를 모두 더하면 얼마입니까?
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<unsigned int> productsV;

	productsV.resize(40);

	productsV[39] = 1;

	for (unsigned int i = 1; i < 101; ++i)
	{
		for(unsigned int j = 0; j < productsV.size(); ++j)
		{
			productsV[j] *= i;

			if (productsV[j] > 10000000)
			{
				productsV[j - 1] += productsV[j] / 10000000;
				productsV[j] = productsV[j] % 10000000;
			}
		}
	}

	unsigned int sum;
	
	sum = 0;

	for (unsigned int j = 0; j < productsV.size(); ++j)
	{
		while (productsV[j] > 0)
		{
			sum += productsV[j] % 10;
			productsV[j] /= 10;
		}
	}

	cout << sum << endl;
}
//648
*/