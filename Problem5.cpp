/*
#include <iostream>
#include <map>

using namespace std;

__int64 factorial20 = 1;

__int64 LCM = 1;
int GCD;

int temp;

void main()
{
	for (int i = 1; i <= 20; ++i)
	{
		factorial20 *= i;
	}

	cout << factorial20 << endl;



	for (int i = 1; i <= 20; ++i)
	{
		temp = i;

		cout << temp << endl;

		for (int j = 2; j <= 20;)
		{
			if (!(temp % j))
			{
				temp /= j;
				cout << j <<", "; 
				//LCM *= j;
			}
			else ++j;
			
		}

		cout << endl;
		cout << endl;
	}
	
}
//2*2*2*2*3*3*5*7*11*13*17*19
//16*9*5*7*11*13*17*19
//232792560
*/