/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

enum CurrentPlayers { PLAYER1, PLAYER2, PLAYER_COUNT };
enum CurrentNumbers { NUMBER_COUNT = 13 };
enum CurrentSymbols { SPADE, CLOVER, DIAMOND, HEART, SYMBOL_COUNT };
enum CurrentHands { NONE, HIGH_CARD, ONE_PAIR, TWO_PAIR, THREE_OF_A_KIND, STRAIGHT, FLUSH, FULL_HOUSE, FOUR_OF_A_KIND, STRAIGHT_FLUSH, ROYAL_FLUSH, CARDSET_COUNT };

void main()
{
	FILE* fileAddress;
	
	unsigned int winCounts[PLAYER_COUNT];
	unsigned int drawCount = 0;

	char seperator[] = " \n\0";
	char buffers[32];
	char* bufferAddress;
	
	memset(winCounts, 0, sizeof(winCounts));

	fileAddress = fopen("poker.txt", "r+");
	
	bufferAddress = fgets(buffers, sizeof(buffers), fileAddress);

	while (!feof(fileAddress))
	{
		vector<char*> handsV;

		handsV.reserve(10);

		bufferAddress = strtok(bufferAddress, seperator);

		while (bufferAddress)
		{
			handsV.push_back(bufferAddress);
		
			//cout << bufferAddress << endl;

			bufferAddress = strtok(nullptr, seperator);
		}

		unsigned int Numbers[PLAYER_COUNT][NUMBER_COUNT];
		unsigned int Symbols[PLAYER_COUNT][SYMBOL_COUNT];
		//bool Cardsets[PLAYER_COUNT][CARDSET_COUNT];

		memset(Numbers, 0, sizeof(Numbers));
		memset(Symbols, 0, sizeof(Symbols));
		//memset(Cardsets, 0, sizeof(Cardsets));

		for (unsigned int i = 0; i < 5; ++i)
		{
			switch (handsV[i][0])
			{
			case '2':
				++Numbers[PLAYER1][0];
				break;
			case '3':
				++Numbers[PLAYER1][1];
				break;
			case '4':
				++Numbers[PLAYER1][2];
				break;
			case '5':
				++Numbers[PLAYER1][3];
				break;
			case '6':
				++Numbers[PLAYER1][4];
				break;
			case '7':
				++Numbers[PLAYER1][5];
				break;
			case '8':
				++Numbers[PLAYER1][6];
				break;
			case '9':
				++Numbers[PLAYER1][7];
				break;
			case 'T':
				++Numbers[PLAYER1][8];
				break;
			case 'J':
				++Numbers[PLAYER1][9];
				break;
			case 'Q':
				++Numbers[PLAYER1][10];
				break;
			case 'K':
				++Numbers[PLAYER1][11];
				break;
			case 'A':
				++Numbers[PLAYER1][12];
				break;
			}

			switch (handsV[i][1])
			{
			case 'S':
				++Symbols[PLAYER1][SPADE];
				break;
			case 'C':
				++Symbols[PLAYER1][CLOVER];
				break;
			case 'D':
				++Symbols[PLAYER1][DIAMOND];
				break;
			case 'H':
				++Symbols[PLAYER1][HEART];
				break;
			}
		}
		
		for (unsigned int i = 5; i < 10; ++i)
		{
			switch (handsV[i][0])
			{
			case '2':
				++Numbers[PLAYER2][0];
				break;
			case '3':
				++Numbers[PLAYER2][1];
				break;
			case '4':
				++Numbers[PLAYER2][2];
				break;
			case '5':
				++Numbers[PLAYER2][3];
				break;
			case '6':
				++Numbers[PLAYER2][4];
				break;
			case '7':
				++Numbers[PLAYER2][5];
				break;
			case '8':
				++Numbers[PLAYER2][6];
				break;
			case '9':
				++Numbers[PLAYER2][7];
				break;
			case 'T':
				++Numbers[PLAYER2][8];
				break;
			case 'J':
				++Numbers[PLAYER2][9];
				break;
			case 'Q':
				++Numbers[PLAYER2][10];
				break;
			case 'K':
				++Numbers[PLAYER2][11];
				break;
			case 'A':
				++Numbers[PLAYER2][12];
				break;
			}

			switch (handsV[i][1])
			{
			case 'S':
				++Symbols[PLAYER2][SPADE];
				break;
			case 'C':
				++Symbols[PLAYER2][CLOVER];
				break;
			case 'D':
				++Symbols[PLAYER2][DIAMOND];
				break;
			case 'H':
				++Symbols[PLAYER2][HEART];
				break;
			}
		}

		//compare p1 hands and p2 hands
		CurrentHands hands[PLAYER_COUNT];
		unsigned int highValue[PLAYER_COUNT];
		unsigned int secondValue[PLAYER_COUNT];
		unsigned int thirdValue[PLAYER_COUNT];
		//unsigned int fourthValue[PLAYER_COUNT];

		hands[PLAYER1] = hands[PLAYER2] = HIGH_CARD;
		memset(highValue, 0, sizeof(highValue));
		memset(secondValue, 0, sizeof(secondValue));

		for (unsigned int i = 0; i < NUMBER_COUNT; ++i)
		{
			if (Numbers[PLAYER1][i] == 4)
			{
				hands[PLAYER1] = FOUR_OF_A_KIND;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (Numbers[PLAYER1][i] == 2 && hands[PLAYER1] == THREE_OF_A_KIND)
			{
				hands[PLAYER1] = FULL_HOUSE;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = i;
			}

			if (Numbers[PLAYER1][i] == 3 && hands[PLAYER1] == TWO_PAIR)
			{
				hands[PLAYER1] = FULL_HOUSE;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (hands[PLAYER1] == HIGH_CARD && i > 3 && Numbers[PLAYER1][i] == 1 && Numbers[PLAYER1][i - 1] == 1 && Numbers[PLAYER1][i - 2] == 1 && Numbers[PLAYER1][i - 3] == 1 && Numbers[PLAYER1][i - 4] == 1)
			{
				hands[PLAYER1] = STRAIGHT;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (hands[PLAYER1] == HIGH_CARD && Numbers[PLAYER1][i] == 3)
			{
				hands[PLAYER1] = THREE_OF_A_KIND;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (hands[PLAYER1] == ONE_PAIR && Numbers[PLAYER1][i] == 2)
			{
				hands[PLAYER1] = TWO_PAIR;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (hands[PLAYER1] == HIGH_CARD && Numbers[PLAYER1][i] == 2)
			{
				hands[PLAYER1] = ONE_PAIR;
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;
			}

			if (hands[PLAYER1] == HIGH_CARD && Numbers[PLAYER1][i] == 1)
			{
				thirdValue[PLAYER1] = secondValue[PLAYER2];
				secondValue[PLAYER1] = highValue[PLAYER1];
				highValue[PLAYER1] = i;

			}
		}

		for (unsigned int i = 0; i < SYMBOL_COUNT; ++i)
		{
			if (Symbols[PLAYER1][i] == 5)
			{
				if (hands[PLAYER1] == STRAIGHT)
				{
					if (Numbers[PLAYER1][8] == 1 && Numbers[PLAYER1][12] == 1) hands[PLAYER1] = ROYAL_FLUSH;
					else hands[PLAYER1] = STRAIGHT_FLUSH;
				}
				else hands[PLAYER1] = FLUSH;
			}
		}

		for (unsigned int i = 0; i < NUMBER_COUNT; ++i)
		{
			if (Numbers[PLAYER2][i] == 4)
			{
				hands[PLAYER2] = FOUR_OF_A_KIND;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if ((Numbers[PLAYER2][i] == 3 && hands[PLAYER2] == TWO_PAIR) || (Numbers[PLAYER2][i] == 2 && hands[PLAYER2] == THREE_OF_A_KIND))
			{
				hands[PLAYER2] = FULL_HOUSE;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if (hands[PLAYER2] == HIGH_CARD && i > 3 && Numbers[PLAYER2][i] == 1 && Numbers[PLAYER2][i - 1] == 1 && Numbers[PLAYER2][i - 2] == 1 && Numbers[PLAYER2][i - 3] == 1 && Numbers[PLAYER2][i - 4] == 1)
			{
				hands[PLAYER2] = STRAIGHT;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if (hands[PLAYER2] == ONE_PAIR && Numbers[PLAYER2][i] == 2)
			{
				hands[PLAYER2] = TWO_PAIR;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if (hands[PLAYER2] == HIGH_CARD && Numbers[PLAYER2][i] == 3)
			{
				hands[PLAYER2] = THREE_OF_A_KIND;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if (hands[PLAYER2] == HIGH_CARD && Numbers[PLAYER2][i] == 2)
			{
				hands[PLAYER2] = ONE_PAIR;
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}

			if (hands[PLAYER2] == HIGH_CARD && Numbers[PLAYER2][i] == 1)
			{
				secondValue[PLAYER2] = highValue[PLAYER2];
				highValue[PLAYER2] = i;
			}
		}

		for (unsigned int i = 0; i < SYMBOL_COUNT; ++i)
		{
			if (Symbols[PLAYER2][i] == 5)
			{
				if (hands[PLAYER2] == STRAIGHT)
				{
					if (Numbers[PLAYER2][8] == 1 && Numbers[PLAYER2][12] == 1) hands[PLAYER2] = ROYAL_FLUSH;
					else hands[PLAYER2] = STRAIGHT_FLUSH;
				}
				else hands[PLAYER2] = FLUSH;
			}
		}
		
		if (hands[PLAYER1] > hands[PLAYER2]) ++winCounts[PLAYER1];
		else
		{
			if(hands[PLAYER1] < hands[PLAYER2]) ++winCounts[PLAYER2];
			else
			{
				if (highValue[PLAYER1] > highValue[PLAYER2]) ++winCounts[PLAYER1];
				else
				{
					if(highValue[PLAYER1] < highValue[PLAYER2]) ++winCounts[PLAYER2];
					else
					{
						if (secondValue[PLAYER1] > secondValue[PLAYER2]) ++winCounts[PLAYER1];
						else
						{
							if(secondValue[PLAYER1] < secondValue[PLAYER2]) ++winCounts[PLAYER2];
							else
							{
								if (thirdValue[PLAYER1] > thirdValue[PLAYER2]) ++winCounts[PLAYER1];
								else
								{
									if (thirdValue[PLAYER1] < thirdValue[PLAYER2]) ++winCounts[PLAYER2];
									else ++drawCount;
								}
							}
						}
					}
				}
			}
		}

		bufferAddress = fgets(buffers, sizeof(buffers), fileAddress);
		//cout << bufferAddress << endl;
	}
	
	fclose(fileAddress);

	cout << winCounts[PLAYER1] << endl;
	cout << winCounts[PLAYER2] << endl;
	cout << drawCount << endl;
}
//376
*/