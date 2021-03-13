/*
#include <iostream>
#include <vector>

using namespace std;

const unsigned int PLACE_COUNT = 400;
unsigned int N[PLACE_COUNT];

void main()
{
	//2^1000
	//1024^100
	//1024^20 * 1024^20 * 1024^20 * 1024^20 * 1024^20
	//1048576^10 * 1048576^10 * 1048576^10 * 1048576^10 * 1048576^10
	//1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10 * 1024^10
	
	for (unsigned int j = 0; j < PLACE_COUNT; ++j)
	{
		N[j] = 0;
	}

	//for (unsigned int i = 1; i < 1001; ++i)
	//{
	//	N *= 2;
	//
	//	if ((i % 10) == 0)
	//	{
	//		getchar();
	//		cout << N << endl;
	//	}
	//}

	N[PLACE_COUNT - 1] = 1;

	for (unsigned int i = 0; i < 1000; ++i)
	{
		for (unsigned int j = 1; j < PLACE_COUNT; ++j)
		{
			if (N[j] * 2 > 9) ++N[j - 1];
			
			N[j] = (N[j] * 2) % 10;
		}
	}
	
	int Sum = 0;

	for (unsigned int j = 0; j < PLACE_COUNT; ++j)
	{
		Sum += N[j];

		cout << N[j];
	}

	cout << endl << Sum << endl;


}
//1366
*/