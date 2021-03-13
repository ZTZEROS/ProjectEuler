/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int count = 0;
	unsigned int primeUnder100s[4]; //There are four primes which can divide the integer under 100. (prime < (sqrt(100) == 10))

	primeUnder100s[0] = 2;
	primeUnder100s[1] = 3;
	primeUnder100s[2] = 5;
	primeUnder100s[3] = 7;

	for (unsigned int n = 1; n < 101; ++n)
	{
		for (unsigned int r = 1; r < n + 1; ++r)
		{
			vector<unsigned int> NsV;
			unsigned int N = 1;
			unsigned int R = 1;
			unsigned int divisionCount[4];
			unsigned int Combination = 0;

			memset(divisionCount, 0, sizeof(divisionCount));

			for (unsigned int i = 1; i < r + 1; ++i)
			{
				R *= i;

				while (!(R % 2))
				{
					R /= 2;
					++divisionCount[0];
				}

				while (!(R % 3))
				{
					R /= 3;
					++divisionCount[1];
				}

				while (!(R % 5))
				{
					R /= 5;
					++divisionCount[2];
				}

				while (!(R % 7))
				{
					R /= 7;
					++divisionCount[3];
				}

				//if (!(R % 2))
				//{
				//	R /= 2;
				//	++divisionCount[0];
				//}
				//
				//if (!(R % 3))
				//{
				//	R /= 3;
				//	++divisionCount[1];
				//}
				//
				//if (!(R % 5))
				//{
				//	R /= 5;
				//	++divisionCount[2];
				//}
				//
				//if (!(R % 7))
				//{
				//	R /= 7;
				//	++divisionCount[3];
				//}
			}

			for (unsigned int i = (n - r) + 1; i < n + 1; ++i)
			{
				N *= i;

				while (!(N % 2) && divisionCount[0] > 0)
				{
					N /= 2;
					--divisionCount[0];
				}

				while (!(N % 3) && divisionCount[1] > 0)
				{
					N /= 3;
					--divisionCount[1];
				}

				while (!(N % 5) && divisionCount[2] > 0)
				{
					N /= 5;
					--divisionCount[2];
				}

				while (!(N % 7) && divisionCount[3] > 0)
				{
					N /= 7;
					--divisionCount[3];
				}
				
				//if (N > 1) NsV.push_back(i);

				//if (!(N % 2) && divisionCount[0] > 0)
				//{
				//	N /= 2;
				//	--divisionCount[0];
				//}
				//
				//if (!(N % 3) && divisionCount[1] > 0)
				//{
				//	N /= 3;
				//	--divisionCount[1];
				//}
				//
				//if (!(N % 5) && divisionCount[2] > 0)
				//{
				//	N /= 5;
				//	--divisionCount[2];
				//}
				//
				//if (!(N % 7) && divisionCount[3] > 0)
				//{
				//	N /= 7;
				//	--divisionCount[3];
				//}
			}

			Combination = N / R;

			if (Combination > 1000000)
			{
				count += (n - r) - r + 1;
				
				cout << n << ", " << r << ", " << Combination << endl;

				break;
			}
			//n!/r! * (n-r)!
		}
	}

	cout << count << endl;
}
*/