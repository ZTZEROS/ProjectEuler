/*
#include <iostream>
#include <map>

using namespace std;

int Palindrome = 0;
int MaxPalindrome = 0;

int temp = 0;
int left1 = 0;
int left2 = 0;
int right1 = 0;
int right2 = 0;

void main()
{
	for (int i = 100; i < 1000; ++i)
	{
		for (int j = 100; j < 1000; ++j)
		{
			for (int k = 1; k < 10; ++k)
			{
				for (int l = 0; l < 10; ++l)
				{
					for (int m = 0; m < 10; ++m)
					{
						if (i * j > 100000)
						{
							if (i * j == k * 100000 + k + l * 10000 + l * 10 + m * 1000 + m * 100)
							{
								if (i * j > Palindrome)
								{
									Palindrome = i*j;
									cout << Palindrome << endl << i << " , " << j << endl;
								}
								

							}
						}
						else if (i * j > 10000)
						{
							if (i * j == k * 10000 + k + l * 1000 + l * 10 + m * 100)
							{
								if (i * j > Palindrome)
								{
									Palindrome = i*j;
									cout << Palindrome << endl << i << " , " << j << endl;

								}
							}
						}
					}
				}
			}
		}
	}
}
//906609
*/