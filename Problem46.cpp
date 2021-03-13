/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
	vector<unsigned int> primesV;
	unsigned int nonCompositeNumber = 0;
	unsigned int primeCount = 0;

	primesV.push_back(2);
	//cout << *primesV.rbegin() << endl;
	primeCount = primesV.size();
	
	for (unsigned int i = 1; nonCompositeNumber == 0; ++i)
	{
		unsigned int oddNumber = 2 * i + 1;
		unsigned int squareRoot = sqrt(oddNumber);
	
		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(oddNumber % primesV[j])) break;
			
			if (squareRoot < primesV[j])
			{
				primesV.push_back(oddNumber);
				break;
			}
		}

		if (primeCount != primesV.size())
		{
			//cout << *primesV.rbegin() << endl;
			primeCount = primesV.size();
			continue;
		}
	
		for (unsigned int j = 0; j < primesV.size(); ++j)
		//for (unsigned int j = primesV.size() - 1; j >= 0; --j)
		{
			if (!((oddNumber - primesV[j]) % 2))
			{
				double fuck = sqrt((oddNumber - primesV[j]) / 2);

				if ((int)fuck < fuck && fuck < (int)fuck + 1)
				{
					if (j == primesV.size() - 1)
					//if (j == 0)
					{
						nonCompositeNumber = oddNumber;
						break;
					}

					continue;
				}
				else
				{
					//cout << oddNumber << endl;
					break;
				}
			}
		}
	}

	cout << nonCompositeNumber << endl;
}
//5777
*/