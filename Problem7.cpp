/*
#include <iostream>
#include <map>

using namespace std;

__int64 Prime = 3;


int index = 2;

bool divided = 0;

void main()
{

	for (__int64 i = 3; index <= 10001; i += 2)
	{
		bool divided = 0;

		for (__int64 j = i - 1; j >= 3; --j)
		{
			if (i % j) continue;
			else
			{
				divided = 1;
				break;
			}
		}

		if (Prime < i && !divided)
		{
			++index;
			Prime = i;

			cout << index << " : " << Prime << endl;
			//getchar();
		}
	}
}
//104743
*/