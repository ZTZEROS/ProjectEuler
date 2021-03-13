/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <list>
#include <vector>
#include <time.h>

using namespace std;

void main()
{
	int64_t initialTime = time(NULL);
	//int64_t terminalTime = 0;

	//1,3,7,9
	//7&11x, 11&13x 7&17x

	//2, 3, 5, 7, 11 ... all

	//3, 7
	//37
	//73

	//3, 11
	//311
	//113

	//3, 37
	//337
	//373

	//3, 67
	//367
	//673

	//37, 67
	//3767
	//6737

	//3, 37, 67
	//337, 367
	//373, 3767
	//673, 6737

	//3, 7, 109, 673
	//37, 3109, 3673
	//73, 7109, 7673
	//1093, 1097, 109673
	//6733, 6737, 673109

	//(PrimeCount C 5) P 2

	//? 3, 11, 23, 89, 137
	//? 7, 19, 97, 157, 229

	//? 3, 7, 229, 499, 673
	//37, 3229, 3499, 3673
	//73, 7229, 7499, 7673
	//2293, 2297, 229499, 229673
	//4993, 4997, 499229, 499673
	//6733, 6737, 673229(x, 739), 673499

	vector<unsigned int> primesV;
	//vector<unsigned int> primePairsV[2];

	vector<vector<unsigned int>> primePairsVsV;

	unsigned int minimumPrimeCombination = -1;
	unsigned int primeCount = 0;
	unsigned int primePairCount = 0;
	unsigned int primePairsVCount = 0;

	primesV.reserve(10000);
	//primePairsV[0].reserve(100000);
	//primePairsV[1].reserve(100000);
	primePairsVsV.reserve(10000);
	
	primesV.push_back(2);
	++primeCount;

	primePairsVsV.resize(primeCount);
	++primePairsVCount;

	//for (unsigned int i = 3; minimumPrimeCombination < UINT32_MAX - 1; ++++i)
	for (unsigned int i = 3; i < 10000; ++++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primeCount; ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);

				break;
			}
		}

		if (primeCount < primesV.size())
		{
			++primeCount;

			primePairsVsV.resize(primeCount);
			++primePairsVCount;

			//cout << primesV[primeCount - 1] << endl;
		}
		else continue;

		for (unsigned int j1 = 1; j1 < primeCount; ++j1)
		{
			unsigned int chosenPrimes[2];
			unsigned int newPrimes[2];
			unsigned int digitCounts[2];
			unsigned int squareRootOfNewPrimes[2];
			bool isPrimes[2];

			memset(digitCounts, 0, sizeof(digitCounts));
			memset(isPrimes, 0, sizeof(isPrimes));

			newPrimes[0] = chosenPrimes[0] = primesV[j1];
			newPrimes[1] = chosenPrimes[1] = primesV[primeCount - 1];

			while (newPrimes[1] > 0)
			{
				newPrimes[1] /= 10;
				++digitCounts[0];
			}

			while (newPrimes[0] > 0)
			{
				newPrimes[0] /= 10;
				++digitCounts[1];
			}

			newPrimes[0] = chosenPrimes[0];
			newPrimes[1] = chosenPrimes[1];

			while (digitCounts[0] > 0)
			{
				newPrimes[0] *= 10;
				--digitCounts[0];
			}

			while (digitCounts[1] > 0)
			{
				newPrimes[1] *= 10;
				--digitCounts[1];
			}

			newPrimes[0] += chosenPrimes[1];
			newPrimes[1] += chosenPrimes[0];

			squareRootOfNewPrimes[0] = sqrt(newPrimes[0]);
			squareRootOfNewPrimes[1] = sqrt(newPrimes[1]);

			for (unsigned int j2 = 3; j2 < newPrimes[0]; ++++j2)
			{
				if (!(newPrimes[0] % j2)) break;

				if (squareRootOfNewPrimes[0] < j2)
				{
					isPrimes[0] = 1;
					break;
				}
			}

			for (unsigned int j2 = 3; j2 < newPrimes[1]; ++++j2)
			{
				if (!(newPrimes[1] % j2)) break;

				if (squareRootOfNewPrimes[1] < j2)
				{
					isPrimes[1] = 1;
					break;
				}
			}

			if (isPrimes[0] && isPrimes[1])
			{
				//primePairsV[0].push_back(chosenPrimes[0]);
				//primePairsV[1].push_back(chosenPrimes[1]);

				primePairsVsV[j1].push_back(chosenPrimes[1]);
			}
		}
	}

	cout << "Elapsed time : " << time(NULL) - initialTime << endl;

		for (unsigned int j1 = 1; j1 < primePairsVCount; ++j1)
		{
			if (primePairsVsV[j1].size() < 4) continue;

			vector<unsigned int> temporaryPairsV = primePairsVsV[j1];
			unsigned int temporaryPairCount = temporaryPairsV.size();
			unsigned int temporaryPairs[4];
			bool failPoint[6];

			for (unsigned int j2 = 0; j2 < temporaryPairCount; ++j2)
			{
				temporaryPairs[0] = temporaryPairsV[j2];

				for (unsigned int j3 = j2 + 1; j3 < temporaryPairCount; ++j3)
				{
					temporaryPairs[1] = temporaryPairsV[j3];

					for (unsigned int j4 = j3 + 1; j4 < temporaryPairCount; ++j4)
					{
						temporaryPairs[2] = temporaryPairsV[j4];

						for (unsigned int j5 = j4 + 1; j5 < temporaryPairCount; ++j5)
						{
							temporaryPairs[3] = temporaryPairsV[j5];

							memset(failPoint, 0, sizeof(failPoint));

							for (unsigned int k1 = 0; k1 < primeCount; ++k1)
							{
								if (primesV[k1] == temporaryPairs[0])
								{
									for (unsigned int k2 = 0; k2 < primePairsVsV[k1].size(); ++k2)
									{
										if (primePairsVsV[k1][k2] == temporaryPairs[1]) failPoint[0] = 1;
										//if (!failPoint[0] && primePairsVsV[k1][k2] > temporaryPairs[1]) break;

										if (primePairsVsV[k1][k2] == temporaryPairs[2]) failPoint[1] = 1;
										//if (!failPoint[1] && primePairsVsV[k1][k2] > temporaryPairs[2]) break;

										if (primePairsVsV[k1][k2] == temporaryPairs[3]) failPoint[2] = 1;
										//if (!failPoint[2] && primePairsVsV[k1][k2] > temporaryPairs[3]) break;
									}

									break;
								}
							}

							if (!failPoint[0] || !failPoint[1]) break;
							if(!failPoint[2]) continue;

							for (unsigned int k1 = 0; k1 < primeCount; ++k1)
							{
								if (primesV[k1] == temporaryPairs[1])
								{
									for (unsigned int k2 = 0; k2 < primePairsVsV[k1].size(); ++k2)
									{
										if (primePairsVsV[k1][k2] == temporaryPairs[2]) failPoint[3] = 1;
										//if (!failPoint[3] && primePairsVsV[k1][k2] > temporaryPairs[2]) break;
										
										if (primePairsVsV[k1][k2] == temporaryPairs[3]) failPoint[4] = 1;
										//if (!failPoint[4] && primePairsVsV[k1][k2] > temporaryPairs[3]) break;
									}

									break;
								}
							}

							if (!failPoint[3]) break;
							if(!failPoint[4]) continue;

							for (unsigned int k1 = 0; k1 < primeCount; ++k1)
							{
								if (primesV[k1] == temporaryPairs[2])
								{
									for (unsigned int k2 = 0; k2 < primePairsVsV[k1].size(); ++k2)
									{
										if (primePairsVsV[k1][k2] == temporaryPairs[3]) failPoint[5] = 1;
										//if (!failPoint[5] && primePairsVsV[k1][k2] > temporaryPairs[3]) break;
									}

									break;
								}
							}

							if (!failPoint[5]) continue;

							if (minimumPrimeCombination > primesV[j1] + temporaryPairs[0] + temporaryPairs[1] + temporaryPairs[2] + temporaryPairs[3])
							{
								cout << primesV[j1] << ", " << temporaryPairs[0] << ", " << temporaryPairs[1] << ", " << temporaryPairs[2] << ", " << temporaryPairs[3] << endl;
								
								minimumPrimeCombination = primesV[j1] + temporaryPairs[0] + temporaryPairs[1] + temporaryPairs[2] + temporaryPairs[3];
								
								cout << minimumPrimeCombination << endl;

								cout << "Elapsed time : " << time(NULL) - initialTime << endl;
								
								return;
							}
							
							//temporaryPairs[0] temporaryPairs[1] temporaryPairs[2] temporaryPairs[3];
							//temporaryPairs[1] temporaryPairs[2] temporaryPairs[3];
							//temporaryPairs[2] temporaryPairs[3]
						}

						if (!failPoint[0]) break;

						//if (minimumPrimeCombination < UINT32_MAX - 1) break;
					}

					//if (minimumPrimeCombination < UINT32_MAX - 1) break;
				}

				//if (minimumPrimeCombination < UINT32_MAX - 1) break;
			}

			//if (minimumPrimeCombination < UINT32_MAX - 1) break;
		}
	//}

	//cout << minimumPrimeCombination << endl;

	//cout << "Elapsed time : " << time(NULL) - initialTime << endl;
}
//26033
//13, 5197, 5701, 6733, 8389
*/

/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <list>
#include <vector>

using namespace std;

void main()
{
	//1,3,7,9
	//7&11x, 11&13x 7&17x

	//2, 3, 5, 7, 11 ... all

	//3, 7
	//37
	//73

	//3, 11
	//311
	//113

	//3, 37
	//337
	//373

	//3, 67
	//367
	//673

	//37, 67
	//3767
	//6737

	//3, 37, 67
	//337, 367
	//373, 3767
	//673, 6737

	//3, 7, 109, 673
	//37, 3109, 3673
	//73, 7109, 7673
	//1093, 1097, 109673
	//6733, 6737, 673109

	//(PrimeCount C 5) P 2

	//? 3, 11, 23, 89, 137
	//? 7, 19, 97, 157, 229
	
	//? 3, 7, 229, 499, 673
	//37, 3229, 3499, 3673
	//73, 7229, 7499, 7673
	//2293, 2297, 229499, 229673
	//4993, 4997, 499229, 499673
	//6733, 6737, 673229(x, 739), 673499

	vector<unsigned int> primesV;
	vector<unsigned int> primePairsV[2];
	unsigned int minimumPrimeCombination = -1;
	unsigned int sizeOfPrimesV = 0;

	primesV.push_back(2);

	for (unsigned int i = 3; minimumPrimeCombination > UINT32_MAX - 1; ++++i)
	{
		unsigned int squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				break;
			}
		}

		if (sizeOfPrimesV < primesV.size())
		{
			sizeOfPrimesV = primesV.size();
			cout << primesV[primesV.size() - 1] << endl;
		}
		else continue;

		for (unsigned int j1 = 1; j1 < primesV.size(); ++j1)
		{
			unsigned int chosenPrimes[2];
			unsigned int newPrimes[2];
			unsigned int digitCounts[2];
			unsigned int squareRootOfNewPrimes[2];
			bool isPrimes[2];

			memset(digitCounts, 0, sizeof(digitCounts));
			memset(isPrimes, 0, sizeof(isPrimes));

			newPrimes[0] = chosenPrimes[0] = primesV[j1];
			newPrimes[1] = chosenPrimes[1] = primesV[primesV.size() - 1];

			while (newPrimes[1] > 0)
			{
				newPrimes[1] /= 10;
				++digitCounts[0];
			}

			while (newPrimes[0] > 0)
			{
				newPrimes[0] /= 10;
				++digitCounts[1];
			}

			newPrimes[0] = chosenPrimes[0];
			newPrimes[1] = chosenPrimes[1];

			while (digitCounts[0] > 0)
			{
				newPrimes[0] *= 10;
				--digitCounts[0];
			}

			while (digitCounts[1] > 0)
			{
				newPrimes[1] *= 10;
				--digitCounts[1];
			}

			newPrimes[0] += chosenPrimes[1];
			newPrimes[1] += chosenPrimes[0];

			squareRootOfNewPrimes[0] = sqrt(newPrimes[0]);
			squareRootOfNewPrimes[1] = sqrt(newPrimes[1]);

			for (unsigned int l = 2; l < newPrimes[0]; ++l)
			{
				if (!(newPrimes[0] % l)) break;

				if (squareRootOfNewPrimes[0] < l)
				{
					isPrimes[0] = 1;
					break;
				}
			}

			for (unsigned int l = 2; l < newPrimes[1]; ++l)
			{
				if (!(newPrimes[1] % l)) break;

				if (squareRootOfNewPrimes[1] < l)
				{
					isPrimes[1] = 1;
					break;
				}
			}

			if (isPrimes[0] && isPrimes[1])
			{
				primePairsV[0].push_back(chosenPrimes[0]);
				primePairsV[1].push_back(chosenPrimes[1]);

				for (unsigned int k = 0; k < primePairsV[0].size(); ++k)
				{
					if (primePairsV[0][k] > chosenPrimes[0])
					{
						for (unsigned int k2 = primePairsV[0].size() - 1; k2 > k; --k2)
						{
							primePairsV[0][k2] = primePairsV[0][k2 - 1];
							primePairsV[1][k2] = primePairsV[1][k2 - 1];
						}

						primePairsV[0][k] = chosenPrimes[0];
						primePairsV[1][k] = chosenPrimes[1];

						break;
					}
				}
			}
		}
	
		unsigned int primePairCount = primePairsV[0].size();
		
		for (unsigned int k1 = 0; k1 < primePairCount; ++k1)
		{
			for (unsigned int k2 = k1 + 1; k2 < primePairCount; ++k2)
			{
				//if (!primePairsV[1][k1]) break;

				if (primePairsV[1][k1] == primePairsV[0][k2])
				{
					for (unsigned int k3 = k2 + 1; k3 < primePairCount; ++k3)
					{
						//if (!primePairsV[1][k2]) break;

						if (primePairsV[1][k2] == primePairsV[0][k3])
						{
							for (unsigned int k4 = k3 + 1; k4 < primePairCount; ++k4)
							{
								//if (!primePairsV[1][k3]) break;

								if (primePairsV[1][k3] == primePairsV[0][k4])
								{
									for (unsigned int k5 = 0; k5 < primePairCount; ++k5)
									{
										//if (!primePairsV[1][k4]) break;

										if (primePairsV[0][k1] == primePairsV[0][k5] && primePairsV[1][k5] == primePairsV[1][k4])
										{
											for (unsigned int k6 = 0; k6 < primePairCount; ++k6)
											{
												if (primePairsV[0][k1] < primePairsV[0][k6]) break;
											
												if (primePairsV[0][k1] == primePairsV[0][k6] && primePairsV[1][k6] == primePairsV[0][k3])
												{
													for (unsigned int k7 = 0; k7 < primePairCount; ++k7)
													{
														if (primePairsV[0][k1] < primePairsV[0][k7]) break;
											
														if (primePairsV[0][k1] == primePairsV[0][k7] && primePairsV[1][k7] == primePairsV[0][k4])
														{
															for (unsigned int k8 = 0; k8 < primePairCount; ++k8)
															{
																if (primePairsV[0][k2] < primePairsV[0][k8]) break;
											
																if (primePairsV[0][k2] == primePairsV[0][k8] && primePairsV[1][k8] == primePairsV[0][k4])
																{
																	for (unsigned int k9 = 0; k9 < primePairCount; ++k9)
																	{
																		if (primePairsV[0][k2] < primePairsV[0][k9]) break;
											
																		if (primePairsV[0][k2] == primePairsV[0][k9] && primePairsV[1][k9] == primePairsV[0][k5])
																		{
																			for (unsigned int k10 = 0; k10 < primePairCount; ++k10)
																			{
																				if (primePairsV[0][k3] < primePairsV[0][k10]) break;
											
																				if (primePairsV[0][k3] == primePairsV[0][k10] && primePairsV[1][k10] == primePairsV[0][k5])
																				{
																					minimumPrimeCombination = primePairsV[0][k1] + primePairsV[0][k2] + primePairsV[0][k3] + primePairsV[0][k4] + primePairsV[1][k4];
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

											//primePairsV[1][k4] = 0;
										}
									}

									//primePairsV[1][k3] = 0;
								}
							}

							//primePairsV[1][k2] = 0;
						}
					}

					//primePairsV[1][k1] = 0;
				}
			}
		}
	}
	
	cout << minimumPrimeCombination << endl;
	
}
*/

/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

void main()
{
	//1,3,7,9
	//7&11x, 11&13x 7&17x

	//2, 3, 5, 7, 11 ... all

	//3, 7
	//37
	//73

	//3, 11
	//311
	//113

	//3, 37
	//337
	//373

	//3, 67
	//367
	//673

	//37, 67
	//3767
	//6737

	//3, 37, 67
	//337, 367
	//373, 3767
	//673, 6737

	//3, 7, 109, 673
	//37, 3109, 3673
	//73, 7109, 7673
	//1093, 1097, 109673
	//6733, 6737, 673109

	//(PrimeCount C 5) P 2

	vector<unsigned int> primesV;
	vector<unsigned int> failedPairsV[2];
	unsigned int minimumPrimeCombination = -1;
	unsigned int squareRoot = 0;
	unsigned int primeCount = 0;
	unsigned int sizeOfPrimesV = 0;

	primesV.push_back(2);

	for (unsigned int i = 3; minimumPrimeCombination > UINT32_MAX - 1; ++++i)
	{
		squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				break;
			}
		}

		if (sizeOfPrimesV < primesV.size())
		{
			sizeOfPrimesV = primesV.size();
			cout << sizeOfPrimesV << endl;
		}
		else continue;

		for (unsigned int j1 = 1; j1 < primesV.size(); ++j1)
		{
			if (j1 == 2) continue;

			for (unsigned int j2 = j1 + 1; j2 < primesV.size(); ++j2)
			{
				bool isFailed = 0;
				int failLevel = 0;

				for (unsigned int j3 = j2 + 1; j3< primesV.size(); ++j3)
				{
					for (unsigned int j4 = j3 + 1; j4 < primesV.size(); ++j4)
					{
						for (unsigned int j5 = j4 + 1; j5 < primesV.size(); ++j5)
						{
							for (unsigned int k1 = 0; k1 < failedPairsV[0].size(); ++k1)
							{
								failLevel = 0;

								if (primesV[j1] == failedPairsV[0][k1])
								{
									if (primesV[j2] == failedPairsV[1][k1])
									{
										failLevel = 2;
										break;
									}

									if (primesV[j3] == failedPairsV[1][k1])
									{
										failLevel = 3;
										break;
									}

									if (primesV[j4] == failedPairsV[1][k1])
									{
										failLevel = 4;
										break;
									}

									if (primesV[j5] == failedPairsV[1][k1])
									{
										failLevel = 5;
										break;
									}
								}

								if (primesV[j2] == failedPairsV[0][k1])
								{
									if (primesV[j3] == failedPairsV[1][k1])
									{
										failLevel = 3;
										break;
									}

									if (primesV[j4] == failedPairsV[1][k1])
									{
										failLevel = 4;
										break;
									}

									if (primesV[j5] == failedPairsV[1][k1])
									{
										failLevel = 5;
										break;
									}
								}

								if (primesV[j3] == failedPairsV[0][k1])
								{
									if (primesV[j4] == failedPairsV[1][k1])
									{
										failLevel = 4;
										break;
									}

									if (primesV[j5] == failedPairsV[1][k1])
									{
										failLevel = 5;
										break;
									}
								}
								if (primesV[j4] == failedPairsV[0][k1])
								{
									if (primesV[j5] == failedPairsV[1][k1])
									{
										failLevel = 5;
										break;
									}
								}
							}

							if (failLevel == 5) continue;
							else if (failLevel > 0) break;

							vector<unsigned int> chosenPrimesV;

							chosenPrimesV.push_back(primesV[j1]);
							chosenPrimesV.push_back(primesV[j2]);
							chosenPrimesV.push_back(primesV[j3]);
							chosenPrimesV.push_back(primesV[j4]);
							chosenPrimesV.push_back(primesV[j5]);
							
							primeCount = 0;

							for (unsigned int k1 = 0; k1 < chosenPrimesV.size(); ++k1)
							{
								bool isPrime = 0;

								for (unsigned int k2 = 0; k2 < chosenPrimesV.size(); ++k2)
								{
									if (k1 == k2) continue;

									unsigned int digits = chosenPrimesV[k2];
									unsigned int digitCount = 0;

									while (digits > 0)
									{
										digits /= 10;
										++digitCount;
									}

									unsigned int chosenPrimes[2];

									chosenPrimes[0] = chosenPrimesV[k1];
									chosenPrimes[1] = chosenPrimesV[k2];

									while (digitCount > 0)
									{
										chosenPrimes[0] *= 10;
										--digitCount;
									}

									chosenPrimes[0] += chosenPrimes[1];

									unsigned int squareRootOfChoicedPrime = sqrt(chosenPrimes[0]);

									for (unsigned int l = 2; l < chosenPrimes[0]; ++l)
									{
										if (!(chosenPrimes[0] % l))
										{
											isPrime = 0;
											break;
										}

										if (squareRootOfChoicedPrime < l)
										{
											isPrime = 1;
											break;
										}
									}

									if (isPrime) ++primeCount;
									else
									{
										failLevel = 1;
										failedPairsV[0].push_back(chosenPrimesV[k1]);
										failedPairsV[1].push_back(chosenPrimesV[k2]);
										break;
									}
								}

								if (!isPrime) break;
							}

							if (primeCount > 19)
							{
								if (minimumPrimeCombination > chosenPrimesV[0] + chosenPrimesV[1] + chosenPrimesV[2] + chosenPrimesV[3] + chosenPrimesV[4]) minimumPrimeCombination = chosenPrimesV[0] + chosenPrimesV[1] + chosenPrimesV[2] + chosenPrimesV[3] + chosenPrimesV[4];
							}

							if (failLevel == 5) continue;
							else if (failLevel > 0) break;
						}

						if (failLevel == 4) continue;
						else if (failLevel > 0) break;
					}

					if (failLevel == 3) continue;
					else if (failLevel > 0) break;
				}

				if (failLevel == 2) continue;
				else if (failLevel > 0) break;
			}
		}
	}

	cout << minimumPrimeCombination << endl;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

void main()
{
	//1,3,7,9
	//7&11x, 11&13x 7&17x



	//3, 7
	//37
	//73

	//3, 37, 67
	//337, 367
	//373, 3767
	//673, 6737

	//3, 7, 109, 673
	//37, 3109, 3673
	//73, 7109, 7673
	//1093, 1097, 109673
	//6733, 6737, 673109

	//(PrimeCount C 3) C 2

	vector<unsigned int> primesV;
	vector<unsigned int> failedPrimesV[3];
	unsigned int minimumPrimeCombination = -1;
	unsigned int squareRoot=0;
	unsigned int primeCount = 0;

	primesV.push_back(2);

	for (unsigned int i = 3; minimumPrimeCombination > UINT32_MAX - 1; ++++i)
	{
		squareRoot = sqrt(i);

		for (unsigned int j = 0; j < primesV.size(); ++j)
		{
			if (!(i % primesV[j])) break;

			if (squareRoot < primesV[j])
			{
				primesV.push_back(i);
				break;
			}
		}

		for (unsigned int j1 = 1; j1 < primesV.size(); ++j1)
		{
			if (j1 == 2) continue;

			for (unsigned int j2 = j1 + 1; j2 < primesV.size(); ++j2)
			{
				for (unsigned int j3 = j2 + 1; j3< primesV.size(); ++j3)
				{
					vector<unsigned int> chosenPrimesV;

					chosenPrimesV.push_back(primesV[j1]);
					chosenPrimesV.push_back(primesV[j2]);
					chosenPrimesV.push_back(primesV[j3]);

					bool isFailed = 0;
					primeCount = 0;
					
					for (unsigned int k = 0; k < failedPrimesV[0].size(); ++k)
					{
						if (chosenPrimesV[0] == failedPrimesV[0][k] && chosenPrimesV[1] == failedPrimesV[1][k] && chosenPrimesV[2] == failedPrimesV[2][k]) isFailed = 1;
					}

					if (isFailed) continue;

					for (unsigned int k1 = 0; k1 < chosenPrimesV.size(); ++k1)
					{
						bool isPrime = 0;

						for (unsigned int k2 = 0; k2 < chosenPrimesV.size(); ++k2)
						{
							if (k1 == k2) continue;
							
							unsigned int digits = chosenPrimesV[k2];
							unsigned int digitCount = 0;

							while (digits > 0)
							{
								digits /= 10;
								++digitCount;
							}

							unsigned int chosenPrimes[2];

							chosenPrimes[0] = chosenPrimesV[k1];
							chosenPrimes[1] = chosenPrimesV[k2];

							while (digitCount > 0)
							{
								chosenPrimes[0] *= 10;
								--digitCount;
							}

							chosenPrimes[0] += chosenPrimes[1];

							unsigned int squareRootOfChoicedPrime = sqrt(chosenPrimes[0]);

							for (unsigned int l = 2; l < chosenPrimes[0]; ++l)
							{
								if (!(chosenPrimes[0] % l))
								{
									isPrime = 0;
									break;
								}

								if (squareRootOfChoicedPrime < l)
								{
									isPrime = 1;
									break;
								}
							}

							if (isPrime) ++primeCount;
							else
							{
								failedPrimesV[0].push_back(chosenPrimesV[0]);
								failedPrimesV[1].push_back(chosenPrimesV[1]);
								failedPrimesV[2].push_back(chosenPrimesV[2]);
								break;
							}
						}

						if (!isPrime) break;
					}

					if (primeCount > 5)
					{
						if (minimumPrimeCombination > chosenPrimesV[0] + chosenPrimesV[1] + chosenPrimesV[2]) minimumPrimeCombination = chosenPrimesV[0] + chosenPrimesV[1] + chosenPrimesV[2];
					}
				}
			}
		}
	}

	cout << minimumPrimeCombination << endl;
}
*/