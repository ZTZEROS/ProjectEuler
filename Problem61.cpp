/*
#include <iostream>
#include <vector>

using namespace std;

enum CurrentPolygon {TRIGON, TETRAGON, PENTAGON, HEXAGON, HEPTAGON, OCTAGON, POLYGON_COUNT };
enum CurrentSide { LEFTSIDE, RIGHTSIDE, SIDE_COUNT };

void main()
{
	vector<unsigned int> NumbersV[POLYGON_COUNT];
	vector<unsigned int> NumbersVs[POLYGON_COUNT][SIDE_COUNT];
	unsigned int NumberCount[POLYGON_COUNT];

	unsigned int term = 0;

	//octagonal term is 3 * i * i - 2 * i.
	//if i > 19, then term > 1000.

	for (unsigned int i = 19; term < 10000; ++i)
	{
		term = 3 * i * i - 2 * i;

		if (999 < term && term <10000)
		{
			NumbersV[OCTAGON].push_back(term);
			NumbersVs[OCTAGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[OCTAGON][RIGHTSIDE].push_back(term % 100);
		}

		term = (5 * i * i - 3 * i) / 2;

		if (999 < term && term <10000)
		{
			NumbersV[HEPTAGON].push_back(term);
			NumbersVs[HEPTAGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[HEPTAGON][RIGHTSIDE].push_back(term % 100);
		}

		term = 2 * i * i - i;

		if (999 < term && term <10000)
		{
			NumbersV[HEXAGON].push_back(term);
			NumbersVs[HEXAGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[HEXAGON][RIGHTSIDE].push_back(term % 100);
		}

		term = (3 * i * i - i) / 2;

		if (999 < term && term <10000)
		{
			NumbersV[PENTAGON].push_back(term);
			NumbersVs[PENTAGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[PENTAGON][RIGHTSIDE].push_back(term % 100);
		}

		term = i * i;

		if (999 < term && term <10000)
		{
			NumbersV[TETRAGON].push_back(term);
			NumbersVs[TETRAGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[TETRAGON][RIGHTSIDE].push_back(term % 100);
		}

		term = (i * i + i) / 2;

		if (999 < term && term < 10000)
		{
			NumbersV[TRIGON].push_back(term);
			NumbersVs[TRIGON][LEFTSIDE].push_back(term / 100);
			NumbersVs[TRIGON][RIGHTSIDE].push_back(term % 100);
		}
	}

	NumberCount[TRIGON] = NumbersV[TRIGON].size();
	NumberCount[TETRAGON] = NumbersV[TETRAGON].size();
	NumberCount[PENTAGON] = NumbersV[PENTAGON].size();
	NumberCount[HEXAGON] = NumbersV[HEXAGON].size();
	NumberCount[HEPTAGON] = NumbersV[HEPTAGON].size();
	NumberCount[OCTAGON] = NumbersV[OCTAGON].size();
	
	for (unsigned int i1 = TRIGON; i1 < POLYGON_COUNT; ++i1)
	{
		for (unsigned int i2 = TRIGON; i2 < POLYGON_COUNT; ++i2)
		{
			if (i1 == i2) continue;
			for (unsigned int i3 = TRIGON; i3 < POLYGON_COUNT; ++i3)
			{
				if (i1 == i3 || i2 == i3) continue;
				for (unsigned int i4 = TRIGON; i4 < POLYGON_COUNT; ++i4)
				{
					if (i1 == i4 || i2 == i4 || i3 == i4) continue;
					for (unsigned int i5 = TRIGON; i5 < POLYGON_COUNT; ++i5)
					{
						if (i1 == i5 || i2 == i5 || i3 == i5 || i4 == i5) continue;
						for (unsigned int i6 = TRIGON; i6 < POLYGON_COUNT; ++i6)
						{
							if (i1 == i6 || i2 == i6 || i3 == i6 || i4 == i6 || i5 == i6) continue;
							for (unsigned int j1 = 0; j1 < NumberCount[i1]; ++j1)
							{
								for (unsigned int j2 = 0; j2 < NumberCount[i2]; ++j2)
								{
									if (NumbersVs[i1][RIGHTSIDE][j1] == NumbersVs[i2][LEFTSIDE][j2])
									{
										for (unsigned int j3 = 0; j3 < NumberCount[i3]; ++j3)
										{
											if (NumbersVs[i2][RIGHTSIDE][j2] == NumbersVs[i3][LEFTSIDE][j3])
											{
												for (unsigned int j4 = 0; j4 < NumberCount[i4]; ++j4)
												{
													if (NumbersVs[i3][RIGHTSIDE][j3] == NumbersVs[i4][LEFTSIDE][j4])
													{
														for (unsigned int j5 = 0; j5 < NumberCount[i5]; ++j5)
														{
															if (NumbersVs[i4][RIGHTSIDE][j4] == NumbersVs[i5][LEFTSIDE][j5])
															{
																for (unsigned int j6 = 0; j6 < NumberCount[i6]; ++j6)
																{
																	if (NumbersVs[i5][RIGHTSIDE][j5] == NumbersVs[i6][LEFTSIDE][j6])
																	{
																		if (NumbersVs[i6][RIGHTSIDE][j6] == NumbersVs[i1][LEFTSIDE][j1])
																		{
																			cout << NumbersV[i1][j1] << ", " << NumbersV[i2][j2] << ", " << NumbersV[i3][j3] << ", " << NumbersV[i4][j4] << ", " << NumbersV[i5][j5] << ", " << NumbersV[i6][j6] << endl;
																			
																			cout << NumbersV[i1][j1] + NumbersV[i2][j2] + NumbersV[i3][j3] + NumbersV[i4][j4] + NumbersV[i5][j5] + NumbersV[i6][j6] << endl;

																			return;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
//28684
*/