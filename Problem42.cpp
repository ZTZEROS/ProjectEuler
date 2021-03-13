/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	FILE* fileAddress;
	vector<unsigned int> triangularNumbersV;
	vector<vector<wchar_t>> wordsV;
	vector<wchar_t> lettersV;
	vector<unsigned int> letterSumsV;
	wchar_t letter;
	int add = 0;

	//fileAddress = _wfopen(L"words.txt", L"r");
	fileAddress = fopen("words.txt", "r");

	do
	{
		letter = fgetwc(fileAddress);

		while (64 < letter && letter < 91) //(letter != '\"' && letter != ',')
		{
			lettersV.push_back(letter);
			letter = fgetwc(fileAddress);
		}

		if (lettersV.size() > 0)
		{
			wordsV.push_back(lettersV);
			lettersV.clear();
		}

	} while (!feof(fileAddress));

	fclose(fileAddress);

	for (unsigned int i = 0; i < wordsV.size(); ++i)
	{
		unsigned int letterSum = 0;

		for (unsigned int j = 0; j < wordsV[i].size(); ++j)
		{
			letterSum += wordsV[i][j] - 64;
		}

		letterSumsV.push_back(letterSum);
	}

	triangularNumbersV.push_back(1);

	unsigned int triangularWordCount = 0;

	for (unsigned int i = 0; i < letterSumsV.size(); ++i)
	{
		while (triangularNumbersV[triangularNumbersV.size() - 1] < letterSumsV[i])
		{
			triangularNumbersV.push_back(triangularNumbersV[triangularNumbersV.size() - 1] + triangularNumbersV.size() + 1);
		}

		for (unsigned int j = 0; j < triangularNumbersV.size(); ++j)
		{
			if (triangularNumbersV[j] == letterSumsV[i])
			{
				++triangularWordCount;
				break;
			}
		}
	}

	cout << triangularWordCount << endl;
}
//162
*/