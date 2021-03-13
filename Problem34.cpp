/*
#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>

using namespace std;

unsigned int GetFactorial9(unsigned int number)
{
	switch (number)
	{
	case 2:
		return 2;
		break;
	case 3:
		return 6;
		break;
	case 4:
		return 24;
		break;
	case 5:
		return 120;
		break;
	case 6:
		return 720;
		break;
	case 7:
		return 5040;
		break;
	case 8:
		return 40320;
		break;
	case 9:
		return 362880;
		break;
	default :
		return 1;
		break;
	}
}

void main()
{
	//9! == 362880;
	//8! == 40320;
	//7! == 5040;
	//6! == 720;
	//5! == 120;
	//4! == 24;
	//3! == 6;
	//2! == 2;
	//1! == 1;
	//9! + 9! + 9! + 9! + 9! + 9! == 2177280
	//9! + 9! + 9! + 9! + 9! + 9! + 9!== 2540160
	unsigned long long int sum = 0;
	unsigned int a, b, c, d, e, f, g;

	for (unsigned int i = 3; i < 2540160; ++i)
	{
		if (i > 1000000)
		{
			a = (i % 10000000) / 1000000;
			b = (i % 1000000) / 100000;
			c = (i % 100000) / 10000;
			d = (i % 10000) / 1000;
			e = (i % 1000) / 100;
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(a) + GetFactorial9(b) + GetFactorial9(c) + GetFactorial9(d) + GetFactorial9(e) + GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 100000)
		{
			b = (i % 1000000) / 100000;
			c = (i % 100000) / 10000;
			d = (i % 10000) / 1000;
			e = (i % 1000) / 100;
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(b) + GetFactorial9(c) + GetFactorial9(d) + GetFactorial9(e) + GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 10000)
		{
			c = (i % 100000) / 10000;
			d = (i % 10000) / 1000;
			e = (i % 1000) / 100;
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(c) + GetFactorial9(d) + GetFactorial9(e) + GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 1000)
		{
			d = (i % 10000) / 1000;
			e = (i % 1000) / 100;
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(d) + GetFactorial9(e) + GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 100)
		{
			e = (i % 1000) / 100;
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(e) + GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 10)
		{
			f = (i % 100) / 10;
			g = (i % 10) / 1;

			if (i == (GetFactorial9(f) + GetFactorial9(g))) sum += i;
		}
		else if (i > 0)
		{
			g = (i % 10) / 1;

			if (i == (GetFactorial9(g))) sum += i;
		}
	}

	cout << sum << endl;
}
//40730
*/