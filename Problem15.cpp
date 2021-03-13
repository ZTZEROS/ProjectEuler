/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	unsigned __int64 Lattices[21][21];

	for (unsigned int i = 0; i < 21; ++i)
	{
		for (unsigned int j = 0; j < 21; ++j)
		{
			Lattices[i][j] = 0;
		}
	}

	for (unsigned int i = 0; i < 21; ++i)
	{
		Lattices[0][i] = 1;
		Lattices[i][0] = 1;
	}

	for (unsigned int i = 1; i < 21; ++i)
	{
		for (unsigned int j = 1; j < 21; ++j)
		{
			Lattices[i][j] = Lattices[i][j-1] + Lattices[i-1][j];
		}
	}
	cout << Lattices[1][1] << endl;
	cout << Lattices[1][20] << endl;
	cout << Lattices[2][20] << endl;
	cout << Lattices[3][20] << endl;
	cout << Lattices[4][20] << endl;
	cout << Lattices[5][20] << endl;
	cout << Lattices[6][20] << endl;
	cout << Lattices[7][20] << endl;
	cout << Lattices[8][20] << endl;
	cout << Lattices[9][20] << endl;
	cout << Lattices[10][20] << endl;
	cout << Lattices[11][20] << endl;
	cout << Lattices[12][20] << endl;
	cout << Lattices[13][20] << endl;
	cout << Lattices[14][20] << endl;
	cout << Lattices[15][20] << endl;
	cout << Lattices[16][20] << endl;
	cout << Lattices[17][20] << endl;
	cout << Lattices[16][17] << ", " << Lattices[16][18] << ", " << Lattices[16][19] << ", " << Lattices[16][20] << endl;
	cout << Lattices[17][17] << ", " << Lattices[17][18] << ", " << Lattices[17][19] << ", " << Lattices[17][20] << endl;
	cout << Lattices[18][17] << ", " << Lattices[18][18] << ", " << Lattices[18][19] << ", " << Lattices[18][20] << endl;
	cout << Lattices[19][17] << ", " << Lattices[19][18] << ", " << Lattices[19][19] << ", " << Lattices[19][20] << endl;
	cout << Lattices[20][17] << ", " << Lattices[20][18] << ", " << Lattices[20][19] << ", " << Lattices[20][20] << endl;
}
//137846528820
*/