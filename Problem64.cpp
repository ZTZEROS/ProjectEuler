/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <list>
#include <vector>
#include <math.h>
#include <time.h>
#include <functional>

using namespace std;

void main()
{
	unsigned long initialTime = clock();
	
	for (unsigned long i = 2; i < 10001; ++i)
	{
		cout << i << " : " << sqrt(i) << endl;
	}

	float decimal;
	double ddecimal;

	decimal = 0.00001;
	ddecimal = 0.00000000001;

	printf("%f, %f", decimal, ddecimal);

	unsigned long terminalTime = clock();
	
	cout << "Elapsed time : " << terminalTime - initialTime << " ms" << endl;
}
*/
//#include <iostream>
//#include <algorithm>
//#include <bitset>
//#include <list>
//#include <vector>
//#include <math.h>
//#include <time.h>
//#include <functional>
//
//using namespace std;
//
//void main()
//{
//	unsigned long initialTime = clock();
//	unsigned int sum = 0;
//
//	//for (unsigned int i = 1; i < 1000001; ++i)
//	//{
//	//	sum += i;
//	//}
//	//
//	//cout << endl << "Elapsed time : " << clock() - initialTime << " ms" << endl;
//	//
//	//cout << sum << endl;
//
//	unsigned int i = 1;
//	unsigned int f = 100000;
//
//	sum += (i + f) * f / 2;
//
//	cout << endl << "Elapsed time : " << clock() - initialTime << " ms" << endl;
//
//	cout << sum << endl;
//
//}