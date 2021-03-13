/*
//(3 * (1+999/3) * 999/3 + 5 * (1 + 999/5) * 999/5 - 15 * (1 + 999/15 ) * 999/15 ) / 2
#include <iostream>
#include <map>

using namespace std;

void main()

{
	int sum = 0;;

	for (int i = 1; i < 1000; ++i)
	{
		if (!(i % 3) || !(i % 5)) sum += i;
		//if (!((i % 3)&&(i % 5))) sum += i;
	}

	//int sum30 = 3 + 6 + 9 + 12 + 15 + 18 + 21 + 24 + 27 + 30;
	//
	//int index = 1000 / 30; //33
	//
	//sum += 33 * sum30;
	//
	//1 ~ 33

	cout << sum << endl;
}
//233168
*/