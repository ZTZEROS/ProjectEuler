/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	
	//vector<unsigned int> exponentialsV;
	//vector<unsigned int> powersV;
	//map<unsigned int, unsigned int> powersM;
	//unsigned int power;
	//
	//for (unsigned int a = 2; a < 101; ++a)
	//{
	//	power = a;
	//
	//	for (unsigned int b = 2; b < 101; ++b)
	//	{
	//		power *= a;
	//		powersV.push_back(power);
	//		powersM[power] = power;
	//
	//		//powersM.insert(make_pair<unsigned int, unsigned int>(power, power));
	//	}
	//}
	

	unsigned short exponents[101][101];
	bool uniquenesses[101][101];
	map<unsigned short, unsigned short> totalExponentsM;

	for (unsigned short i = 2; i < 101; ++i)
	{
		for (unsigned short j = 2; j < 101; ++j)
		{
			exponents[i][j] = j;
			uniquenesses[i][j] = 1;
		}
	}

	for (unsigned short j = 2; j < 101; ++j)
	{
		exponents[4][j] *= 2;
		exponents[8][j] *= 3;
		exponents[16][j] *= 4;
		exponents[32][j] *= 5;
		exponents[64][j] *= 6;
		
		exponents[9][j] *= 2;
		exponents[27][j] *= 3;
		exponents[81][j] *= 4;
		
		//exponents[16][j] *= 2;
		//exponents[64][j] *= 3;

		exponents[25][j] *= 2;
		
		exponents[36][j] *= 2;
		
		exponents[49][j] *= 2;
		
		//exponents[64][j] *= 2;
		
		//exponents[81][j] *= 2;
		
		exponents[100][j] *= 2;
	}

	for (unsigned short i = 2; i < 101; ++i)
	{
		for (unsigned short j = 2; j < 101; ++j)
		{
			if (exponents[2][i] == exponents[4][j]) uniquenesses[4][j] = 0;

			if (exponents[2][i] == exponents[8][j]) uniquenesses[8][j] = 0;
			if (exponents[4][i] == exponents[8][j]) uniquenesses[8][j] = 0;
			
			if (exponents[2][i] == exponents[16][j]) uniquenesses[16][j] = 0;
			if (exponents[4][i] == exponents[16][j]) uniquenesses[16][j] = 0;
			if (exponents[8][i] == exponents[16][j]) uniquenesses[16][j] = 0;

			if (exponents[2][i] == exponents[32][j]) uniquenesses[32][j] = 0;
			if (exponents[4][i] == exponents[32][j]) uniquenesses[32][j] = 0;
			if (exponents[8][i] == exponents[32][j]) uniquenesses[32][j] = 0;
			if (exponents[16][i] == exponents[32][j]) uniquenesses[32][j] = 0;

			if (exponents[2][i] == exponents[64][j]) uniquenesses[64][j] = 0;
			if (exponents[4][i] == exponents[64][j]) uniquenesses[64][j] = 0;
			if (exponents[8][i] == exponents[64][j]) uniquenesses[64][j] = 0;
			if (exponents[16][i] == exponents[64][j]) uniquenesses[64][j] = 0;
			if (exponents[32][i] == exponents[64][j]) uniquenesses[64][j] = 0;



			if (exponents[3][i] == exponents[9][j]) uniquenesses[9][j] = 0;
			
			if (exponents[3][i] == exponents[27][j]) uniquenesses[27][j] = 0;
			if (exponents[9][i] == exponents[27][j]) uniquenesses[27][j] = 0;

			if (exponents[3][i] == exponents[81][j]) uniquenesses[81][j] = 0;
			if (exponents[9][i] == exponents[81][j]) uniquenesses[81][j] = 0;
			if (exponents[27][i] == exponents[81][j]) uniquenesses[81][j] = 0;

			if (exponents[5][i] == exponents[25][j]) uniquenesses[25][j] = 0;
			if (exponents[6][i] == exponents[36][j]) uniquenesses[36][j] = 0;
			if (exponents[7][i] == exponents[49][j]) uniquenesses[49][j] = 0;
			if (exponents[10][i] == exponents[100][j]) uniquenesses[100][j] = 0;

		}
	}

	unsigned short count = 0;

	for (unsigned short i = 2; i < 101; ++i)
	{
		for (unsigned short j = 2; j < 101; ++j)
		{
			if (uniquenesses[i][j]) ++count;
		}
	}

	cout << count << endl;

	//2 ~ 100 * 2, 3, 4, 5, 6

	//99 * 99 = 9801

	//2 * 2; 4, 6, ~ 100 (2 ~ 50) -49
	//3 * 3; 4, 6, ~ 100 (2 ~ 50) -49
	//4 * 4; 4, 6, ~ 100 (2 ~ 50) -49
	//5 * 5; 4, 6, ~ 100 (2 ~ 50) -49
	//6 * 6; 4, 6, ~ 100 (2 ~ 50) -49
	//7 * 7; 4, 6, ~ 100 (2 ~ 50) -49
	//8 * 8; 4, 6, ~ 100 (2 ~ 50) -49
	//9 * 9; 4, 6, ~ 100 (2 ~ 50) -49
	//10 * 10; -49
	
	//2 * 2 * 2; 6, 9, 12, 15, 18, 21, 24, 27, 30, ~ 198 (2 ~ 66) 65°³ -> -32
	//2 * 2 * 2; 201, 204, 207, 210, 213, 216, 219, 222, 225, 228, 231, 234, 237, 240, 243, 246, 249, 252, 255, 258, 261, 264, 267, 270, 273, 276, 279, 282, 285, 288, 291, 294, 297, 300 (67 ~ 100) 34°³
	//3 * 3 * 3; 6, 9, 12, 15, 18, 21, 24, 27, 30, ~ 198 (2 ~ 66) 65 -> -32
	//4 * 4 * 4; 6, 9, 12, 15, 18, 21, 24, 27, 30, ~ 198 (2 ~ 66) 65 -> -32
	
	//2 * 2 * 2 * 2; 8, 12, 16, 20, 24, 28, 32 ~ 200 (2 ~ 50) -49
	//2 * 2 * 2 * 2; (204), 208, 212, (216), 220, 224, (228), 232, 236, (240), 244, 248, (252), 256, 260, (264), 268, 272, (276), 280, 284, (288), 292, 296, (300) (50 ~ 75) -9
	//2 * 2 * 2 * 2; 304, 308, 312, 316, 320, ~ 400 (76 ~ 100) 25°³
	//3 * 3 * 3 * 3; 8, 12, 16, 20, 24, 28, 32 ~ 300 (2 ~ 75) -49 -9
	
	//2 * 2 * 2 * 2 * 2; (10), (15), (20), 25, (30), 35, (40), (45), (50), 55, (60), 65, (70), (75), (80), 85, (90), 95, (100) (2 ~ 20) -13
	//2 * 2 * 2 * 2 * 2; (105), (110), 115, (120), 125, (130), (135), (140), 145, (150), 155, (160), (165), (170), 175, (180), 185, (190), (195), (200) (21 ~ 40) -14
	//2 * 2 * 2 * 2 * 2; 205, (210), 215, (220), (225), 230, 235, (240), 245, 250, (255), (260), 265, (270), 275, 280, 285, 290, 295, (300) (41 ~ 60)
	//2 * 2 * 2 * 2 * 2; 305, 310, 315, (320), 325, 330, 335, (340), 345, 350, 355, (360), 365, 370, 375, (380), 385, 390, 395, (400) (61 ~ 80) -5
	//2 * 2 * 2 * 2 * 2; 405, 410, 415, 420, 425, 430, 435, 440, 445, 450, 455, 460, 465, 470, 475, 480, 485, 490, 495, 500 (81 ~ 100)
	
	//2 * 2 * 2 * 2 * 2 * 2; 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96 (6 ~ 16) -15
	//2 * 2 * 2 * 2 * 2 * 2; 102, 108, 114, 120, 126, 132, 138, 144, 150, 156, 162, 168, 174, 180, 186, 192, 198 (17 ~ 33) -17
	//2 * 2 * 2 * 2 * 2 * 2; (204), (210), (216), (222), (228), (234), (240), (246), (252), (258), (264), (270), (276), (282), (288), (294), (300) (34 ~ 50) -17
	//2 * 2 * 2 * 2 * 2 * 2; 306, (312), 318, (324), (330), (336), 342, (348), 354, (360), 366, (372), 378, (384), (390), (396) (51 ~ 66) -10
	//2 * 2 * 2 * 2 * 2 * 2; 402, 408, 414, (420), 426, 432, 438, 444, (450), 456, 462, 468, 474, (480), 486, 492, 498 (62 ~ 83) -3
	//2 * 2 * 2 * 2 * 2 * 2; 504, 510, 516, 522, 528, 534, 540, 546, 552, 558, 564, 570, 576, 582, 588, 594, 600 (84 ~ 100)



	
	//2^2, 2^3, 2^4 ~ 2^100; 
	//
	//3^2, 3^3, 3^4 ~ 3^100;
	//
	//4^2, 4^3, 4^4 ~ 4^100;
	//(2^4, 2^6, 2^8 ~ 2^200);
	//
	//5^2, 5^3, 5^4 ~ 5^100;
	//
	//6^2, 6^3, 6^4 ~ 6^100;
	//
	//7^2, 7^3, 7^4 ~ 7^100;
	//
	//8^2, 8^3, 8^4 ~ 8^100;
	//(2^6, 2^9, 2^12 ~ 2^300;)
	//
	//9^2, 9^3, 9^4 ~ 9^100;
	//(3^4, 3^6, 3^8 ~ 3^200;)
	//
	//
	//
	//
	//
	//
	//100^2, 100^3, 100^4 ~ 100^100;
	//(10^4, 10^6, 10^4 ~ 10^200);
}
//9183
*/