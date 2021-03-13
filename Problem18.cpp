/*
다음과 같이 삼각형 모양으로 숫자를 배열했습니다.

3
7 4
2 4 6
8 5 9 3

삼각형의 꼭대기부터 아래쪽으로 인접한 숫자를 찾아 내려가면서 합을 구하면, 위의 그림처럼 3 + 7 + 4 + 9 = 23 이 가장 큰 합을 갖는 경로가 됩니다.

다음 삼각형에서 합이 최대가 되는 경로를 찾아서 그 합을 구하세요.

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

참고: 여기서는 경로가 16384개밖에 안되기 때문에, 모든 경로의 합을 일일이 계산해서 답을 구하는 것이 가능합니다.
하지만 67번 문제에는 100층짜리 삼각형 배열이 나옵니다. 그런 경우에는 좀 더 현명한 풀이 방법을 찾아야겠지요
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<unsigned int> NumbersV[15];

	FILE* fileAddress;
	fileAddress = fopen("Main18.txt", "r");
	char seperator[] = " \n\0";

	for (unsigned int i = 0; i < 15; ++i)
	{
		char dataBuffer[1024];
		char currentNumber[2];

		fgets(dataBuffer, sizeof(dataBuffer), fileAddress);

		for (unsigned int j = 0; j < 1024; ++j)
		{
			currentNumber[0] = dataBuffer[j];
			currentNumber[1] = dataBuffer[j + 1];

			NumbersV[i].push_back(atoi(currentNumber));

			++++j;

			if (dataBuffer[j] == seperator[1]) break;
			if (dataBuffer[j] == seperator[0]) continue;
		}
	}

	//vector<unsigned int> productsV;
	unsigned int sum, x;

	//productsV.resize(10);
	//productsV[9] = NumbersV[0][0];
	sum = NumbersV[0][0];
	x = 0;

	cout << NumbersV[0][0] << endl;

	for (unsigned int y = 1; y < 15; ++y)
	{
		
		//if (NumbersV[y][x] < NumbersV[y][x + 1]) ++x;

		if (y < 15 - 1)
		{
			unsigned int numbers[5];

			numbers[0] = NumbersV[y][x] + NumbersV[y + 1][x];
			numbers[1] = NumbersV[y][x] + NumbersV[y + 1][x + 1];
			numbers[2] = NumbersV[y][x + 1] + NumbersV[y + 1][x + 1];
			numbers[3] = NumbersV[y][x + 1] + NumbersV[y + 1][x + 1 + 1];
			numbers[4] = 0;

			for (unsigned int i = 0; i < 4; ++i)
			{
				if (numbers[4] < numbers[i]) numbers[4] = numbers[i];
			}

			if (numbers[2] == numbers[4] || numbers[3] == numbers[4]) ++x;
		}
		else if (NumbersV[y][x] < NumbersV[y][x + 1]) ++x;

		//for (unsigned int i = 0; i < productsV.size(); ++i)
		//{
		//	productsV[i] *= NumbersV[y][x];
		//
		//	if (productsV[i] > 10000000)
		//	{
		//		productsV[i - 1] += productsV[i] / 10000000;
		//		productsV[i] = productsV[i] % 10000000;
		//	}
		//}

		sum += NumbersV[y][x];

		cout << NumbersV[y][x] << " " << sum << endl;
	

		
		//unsigned int leftSubSum, rightSubSum;
		//
		//leftSubSum = 0; rightSubSum = 0;
		//
		//for (unsigned int i = y; i < 15; ++i)
		//{
		//	leftSubSum += NumbersV[i][x];
		//}
		//
		//for (unsigned int i = y; i < 15; ++i)
		//{
		//	rightSubSum += NumbersV[i][x + 1 + i - y];
		//}
		//
		//if (leftSubSum < rightSubSum) ++x;
		//
		//sum += NumbersV[y][x];
		//
		//cout << NumbersV[y][x] << " " << sum << endl;
	}

	//for (unsigned int i = 0; i < productsV.size(); ++i)
	//{
	//	cout << productsV[i];
	//}

	cout << sum << endl;

	fclose(fileAddress);
}
//1074
*/