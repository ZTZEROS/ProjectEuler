/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

void main()
{
	FILE* fileAddress;
	char separator[] = " ,:\"\0\n";
	char buffer;
	//char* bufferAddress;
	vector<unsigned int> encryptedDataV;
	vector<unsigned int> decryptedDataV;

	fileAddress = fopen("cipher1.txt", "r");

	//bufferAddress = strtok(, seperator)
	
	while (!feof(fileAddress))
	{
		vector<char> buffersV;

		buffer = fgetc(fileAddress);

		if(buffer != ',' && !feof(fileAddress)) buffersV.push_back(buffer);
		else continue;
		
		buffer = fgetc(fileAddress);

		if (buffer != ',' && !feof(fileAddress)) buffersV.push_back(buffer);

		if (buffersV.size() > 1) encryptedDataV.push_back((buffersV[0] - 48) * 10 + buffersV[1] - 48);
		else encryptedDataV.push_back(buffersV[0] - 48);
	}
	
	fclose(fileAddress);
	
	unsigned int key[3];

	for (unsigned int j1 = 'a'; j1 < 'z' + 1; ++j1)
	{
		for (unsigned int j2 = 'a'; j2 < 'z' + 1; ++j2)
		{
			for (unsigned int j3 = 'a'; j3 < 'j' + 1; ++j3)
			{
				unsigned int a = encryptedDataV[0] ^ j1;
				unsigned int b = encryptedDataV[1] ^ j2;
				unsigned int c = encryptedDataV[2] ^ j3;
				unsigned int d = encryptedDataV[3] ^ j1;
				unsigned int e = encryptedDataV[4] ^ j2;
				unsigned int f = encryptedDataV[5] ^ j3;
				unsigned int g = encryptedDataV[6] ^ j1;
				unsigned int h = encryptedDataV[7] ^ j2;
				unsigned int i = encryptedDataV[8] ^ j3;
				unsigned int j = encryptedDataV[9] ^ j1;
				unsigned int k = encryptedDataV[10] ^ j2;
				unsigned int l = encryptedDataV[11] ^ j3;
				unsigned int m = encryptedDataV[12] ^ j1;
				unsigned int n = encryptedDataV[13] ^ j2;
				unsigned int o = encryptedDataV[14] ^ j3;
				unsigned int p = encryptedDataV[15] ^ j1;
				unsigned int q = encryptedDataV[16] ^ j2; //j2

				if(b == 'T' && c =='h' && d =='e')										  //16, 65, 74
				{
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
					printf("%c%c%c\n", j1, j2, j3);
					key[0] = j1;
					key[1] = j2;
					key[2] = j3;
				}
	
				//j1 : m, j2 : n, j3 :j
			}
		}
	}
	

	for (unsigned int i = 0; i < encryptedDataV.size(); ++i)
	{
		decryptedDataV.push_back(encryptedDataV[i] ^ key[0]);
		
		++i;
		if(i < encryptedDataV.size()) decryptedDataV.push_back(encryptedDataV[i] ^ key[1]);
		else break;
	
		++i;
		if (i < encryptedDataV.size()) decryptedDataV.push_back(encryptedDataV[i] ^ key[2]);
		else break;
	}
	
	for (unsigned int i = 0; i < decryptedDataV.size(); ++i)
	{
		printf("%c", decryptedDataV[i]);
	}
	
	cout << endl;
	
	unsigned int sum = 0;
	
	for (unsigned int i = 0; i < decryptedDataV.size(); ++i)
	{
		sum += decryptedDataV[i];
	}
	
	cout << sum << endl;
}
//107359
*/