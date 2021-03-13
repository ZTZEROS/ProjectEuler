/*
#include <iostream>
#include <vector>

using namespace std;

unsigned long int N;
unsigned int LoopCount;
unsigned int MaximumCount;
vector<unsigned int>* LoopCountsVAddress;

void main()
{
	LoopCountsVAddress = new vector<unsigned int>;

	N = 0;
	LoopCount = 0;
	MaximumCount = 0;

	for (unsigned int i = 1; i < 1000001; ++i)
	{
		N = i;
		LoopCount = 0;

		while (N != 1)
		{
			if (N < i)
			{
				LoopCount += (*LoopCountsVAddress)[N - 1];
				break;
			}

			if (N % 2) N = 3 * N + 1;
			else N /= 2;

			++LoopCount;
		}

		(*LoopCountsVAddress).push_back(LoopCount);

		if (MaximumCount < LoopCount)
		{
			MaximumCount = LoopCount;

			cout << i << ", " << LoopCount << ", " << MaximumCount << endl;
		}

		//cout << i << ", " << LoopCount << ", " << MaximumCount << endl;
		//getchar();
	}

	cout << MaximumCount << endl;
}
//837799
*/