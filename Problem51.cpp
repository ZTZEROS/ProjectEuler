/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	//the number ends 1,3,7,9

	vector<unsigned int> primesV;
	map<unsigned int, unsigned int> primesM;
	unsigned int primeCount = 0;
	unsigned int IntegerUnder10s[11][2];

	primesV.push_back(2);
	primesM[2] = primesM.size() + 1; 

	for (unsigned int i = 0; i < 11; ++i)
	{
		IntegerUnder10s[i][0] = i;
		IntegerUnder10s[i][1] = 0;
	}

	for (unsigned int i = 3; primeCount < 8; ++++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int i = 0; i < 11; ++i)
		{
			IntegerUnder10s[i][1] = 0;
		}

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				
				//if (primesM.find(i) != primesM.end()) break;
				
				primesM[i] = primesM.size() + 1;
				
				vector<unsigned int> digitsV;
				unsigned int currentPrime = i;

				while (currentPrime > 0)
				{ 
					digitsV.push_back(currentPrime % 10);
					currentPrime /= 10;
				}

				for (unsigned int k = 0; k < 11; ++k)
				{
					for (unsigned int l = 0; l < digitsV.size(); ++l)
					{
						if (IntegerUnder10s[k][0] == digitsV[l]) ++IntegerUnder10s[k][1];
					}
				}

				vector<unsigned int> repeatedNumbersV;

				for (unsigned int k = 0; k < 11; ++k)
				{
					if (IntegerUnder10s[k][1] > 1) repeatedNumbersV.push_back(IntegerUnder10s[k][0]);
				}
				
				for (unsigned int k = 1; k < digitsV.size(); ++k)
				{
					vector<unsigned int> temporaryDigitsV = digitsV;
					vector<unsigned int> temporaryNumbersV;
					
					temporaryNumbersV.push_back(i);

					for (++temporaryDigitsV[k]; temporaryDigitsV[k] < 10; ++temporaryDigitsV[k])
					{
						unsigned int temporaryNumber = 0;
						unsigned int digit = 1;


						for (unsigned int l = 0; l < temporaryDigitsV.size(); ++l)
						{
							temporaryNumber += temporaryDigitsV[l] * digit;
							digit *= 10;
						}

						unsigned int temporarySquareRoot = sqrt(temporaryNumber);

						for (unsigned int l = 0; l < primesV.size(); ++l)
						{
							//if (primesM.find(temporaryNumber) != primesM.end()) break;
							if (!(temporaryNumber % primesV[l])) break;

							if (temporarySquareRoot < primesV[l])
							{
								//primesM[temporaryNumber] = primesM.size() + 1;
								temporaryNumbersV.push_back(temporaryNumber);
								break;
							}
						}

						if (temporaryNumbersV.size() > 7)
						{
							cout << temporaryNumbersV[0] << endl;
							return;
						}
					}
				}

				for (unsigned int k = 0; k < repeatedNumbersV.size(); ++k)
				{
					vector<unsigned int> temporaryDigitsV = digitsV;
					vector<unsigned int> temporaryNumbersV;
					vector<unsigned int> repeatedNumberIndexesV;
					
					temporaryNumbersV.push_back(i);

					for (unsigned int l = 0; l < temporaryDigitsV.size(); ++l)
					{
						if (temporaryDigitsV[l] == repeatedNumbersV[k])	repeatedNumberIndexesV.push_back(l);
					}

					for(unsigned int m=0; m < 10; ++m)
					{
						for (unsigned int l = 0; l < repeatedNumberIndexesV.size(); ++l)
						{
							++temporaryDigitsV[repeatedNumberIndexesV[l]];
							
							if (temporaryDigitsV[repeatedNumberIndexesV[l]] > 8) m = 9;
						}

						unsigned int temporaryNumber = 0;
						unsigned int digit = 1;

						for (unsigned int l = 0; l < temporaryDigitsV.size(); ++l)
						{
							temporaryNumber += temporaryDigitsV[l] * digit;
							digit *= 10;
						}

						unsigned int temporarySquareRoot = sqrt(temporaryNumber);

						for (unsigned int l = 0; l < primesV.size(); ++l)
						{
							//if (primesM.find(temporaryNumber) != primesM.end()) break;
							if (!(temporaryNumber % primesV[l])) break;

							if (temporarySquareRoot < primesV[l])
							{
								//primesM[temporaryNumber] = primesM.size() + 1;
								temporaryNumbersV.push_back(temporaryNumber);
								break;
							}
						}

						if (temporaryNumbersV.size() > 7)
						{
							cout << temporaryNumbersV[0] << endl;
							return;
						}
					}
				}

				break;
			}
		}
	}

	//각 자리를 나눈다
	//각 자리의 숫자를 바꾼다
	//바꾼 숫자가 소수인지 검사한다
	//소수이면 카운트 증가 & 소수 목록에 추가
	//카운트가 8이면 루프를 종료하고 i를 출력
	//같은 숫자가 있는지 찾는다
	//같은 숫자가 있는 자리의 숫자를 바꾼다
	//바꾼 숫자가 소수인지 검사한다
	//소수이면 카운트 증가 & 소수 목록에 추가
	//카운트가 8이면 루프를 종료하고 i를 출력

	//x1, 3, 7, 9

	//combination

	//x01, 0x1
	//xx1
	
	//x001, 0x01, 00x1
	//xx01, x0x1, 0xx1
	//xxx1

	//x0001, 0x001, 00x01, 000x1
	//xx001, x0x01, x00x1, 0xx01, 0x0x1, 00xx1
	//xxx01, xx0x1, x0xx1, 0xxx1
	//xxxx1

	//find a prime number
	// add 10, 100, 110, 1000, 1100, 1010, 1110 .... and check
	//count

	//소수 벡터를 맵으로 바꾸어 구현하면 중복 검사를 피할 수 있으나 중복 검사를 위한 검색이 코스트가 커서 더 느려짐
}
//121313
*/