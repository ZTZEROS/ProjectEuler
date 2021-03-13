/*
여기 5천개 이상의 영문 이름들이 들어있는 46KB짜리 텍스트 파일 names.txt 이 있습니다 (우클릭해서 다운로드 받으세요).
이제 각 이름에 대해서 아래와 같은 방법으로 점수를 매기고자 합니다.
먼저 모든 이름을 알파벳 순으로 정렬합니다.
각 이름에 대해서, 그 이름을 이루는 알파벳에 해당하는 숫자(A=1, B=2, ..., Z=26)를 모두 더합니다.
여기에 이 이름의 순번을 곱합니다.
예를 들어 "COLIN"의 경우, 알파벳에 해당하는 숫자는 3, 15, 12, 9, 14이므로 합이 53, 그리고 정렬했을 때 938번째에 오므로 최종 점수는 938 × 53 = 49714가 됩니다.
names.txt에 들어있는 모든 이름의 점수를 계산해서 더하면 얼마입니까?
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

void main()
{
	FILE* fileAddress;
	vector<string> namesV;
	//vector<vector<char>> namesV;

	fileAddress = fopen("names.txt", "r");

	char letterBuffer[2];
	char fullNameBuffer[32];
	bool readingName;

	while (!feof(fileAddress))
	{
		memset(letterBuffer, 0, sizeof(letterBuffer));
		memset(fullNameBuffer, 0, sizeof(fullNameBuffer));
		readingName = 0;

		letterBuffer[0] = fgetc(fileAddress);

		if (letterBuffer[0] == ',' && !readingName) continue;

		if (letterBuffer[0] == '\"' && !readingName) readingName = 1; //readingName = !readingName;

		while (readingName)
		{
			//vector<char> nameBuffersV;
			//
			//letterBuffer[0] = fgetc(fileAddress);
			//
			//if (letterBuffer[0] != '"' && readingName) nameBuffersV.push_back(letterBuffer[0]);
			//else
			//{
			//	namesV.push_back(nameBuffersV);
			//	readingName = 0;
			//	break;
			//}

			letterBuffer[0] = fgetc(fileAddress);

			if (letterBuffer[0] == '"' && readingName)
			{
				namesV.push_back(fullNameBuffer);
				readingName = 0;

				break;
			}

			strcat(letterBuffer, "\0");
			strcat(fullNameBuffer, letterBuffer);
		}
	}

	fclose(fileAddress);

	//sort

	sort(namesV.begin(), namesV.end());

	//qsort(&namesV[0], namesV.size(), sizeof(string), );

	unsigned int sum;
	unsigned int subSum;

	sum = 0;

	for (unsigned int i = 0; i < namesV.size(); ++i)
	{
		char names[32];

		memset(names, 0, sizeof(names));
		subSum = 0;

		for (unsigned int j = 0; j < namesV[i].size(); ++j)
		{
			names[j] = namesV[i][j];
		}

		for(unsigned int j = 0; j < 32; ++j)
		{
			if(names[j]) subSum += names[j] - 64; //subSum += atoi(&names[j] - 64);
		}

		sum += subSum * (i + 1);
	}

	cout << sum << endl;
}
//871198282
*/