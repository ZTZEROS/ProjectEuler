/*
다음은 달력에 관한 몇 가지 일반적인 정보입니다 (필요한 경우 좀 더 연구를 해 보셔도 좋습니다).
•1900년 1월 1일은 월요일이다.
•4월, 6월, 9월, 11월은 30일까지 있고, 1월, 3월, 5월, 7월, 8월, 10월, 12월은 31일까지 있다.
•2월은 28일이지만, 윤년에는 29일까지 있다.
•윤년은 연도를 4로 나누어 떨어지는 해를 말한다. 하지만 400으로 나누어 떨어지지 않는 매 100년째는 윤년이 아니며, 400으로 나누어 떨어지면 윤년이다

20세기 (1901년 1월 1일 ~ 2000년 12월 31일) 에서, 매월 1일이 일요일인 경우는 총 몇 번입니까?
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	enum CurrentMonths { JANUARY = 31, FEBRUARY = 28, MARCH = 31, APRIL = 30, MAY = 31, JUNE = 30, JULY = 31, AUGUST = 31, SEPTEMBER = 30, OCTOBER = 31, NOVEMBER = 30, DECEMBER = 31 };
	enum CurrentWeekdays { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATERDAY, SUNDAY };
	
	vector<unsigned int> WeekdaysV[7];
	
	unsigned int daysOfMonths[12];
	unsigned int count;
	unsigned int dayFrom1901_0101;
	unsigned int week;
	
	count = 0;
	dayFrom1901_0101 = JANUARY + FEBRUARY + MARCH + APRIL + MAY + JUNE + JULY + AUGUST + SEPTEMBER + OCTOBER + NOVEMBER + DECEMBER;
	week = dayFrom1901_0101 % 7; //TUESDAY

	//월화수목금토일
	//1 2 3 4 5 6 7
	//
	//1902 수
	//1903 목
	//1904 금
	//1905 일
	//1906 월
	//1907 화
	//1908 수
	//1909 금
	//1910 토
	//1911 일
	//1912 월
	//1913 수
	//1914 목
	//1915 금
	//1916 토
	//1917 월
	//1918 화
	//1919 수
	//1920 목

	daysOfMonths[0] = JANUARY;
	daysOfMonths[1] = FEBRUARY;
	daysOfMonths[2] = MARCH;
	daysOfMonths[3] = APRIL;
	daysOfMonths[4] = MAY;
	daysOfMonths[5] = JUNE;
	daysOfMonths[6] = JULY;
	daysOfMonths[7] = AUGUST;
	daysOfMonths[8] = SEPTEMBER;
	daysOfMonths[9] = OCTOBER;
	daysOfMonths[10] = NOVEMBER;
	daysOfMonths[11] = DECEMBER;

	//for (unsigned int k = 1901; k < 2001; ++k)
	for(unsigned int k = 0; k < 100; ++k)
	{
		if ((k + 1) % 4 != 0) daysOfMonths[1] = FEBRUARY;
		else daysOfMonths[1] = FEBRUARY + 1;

		for (unsigned int i = 0; i < 12; ++i)
		{
			for (unsigned int j = 0; j < daysOfMonths[i]; ++j)
			{
				WeekdaysV[(j + week) % 7].push_back(j + 1);
			}

			week += daysOfMonths[i] % 7;
			week %= 7;
		}
	}

	for (unsigned int i = 0; i < WeekdaysV[SUNDAY].size(); ++i)
	{
		if (WeekdaysV[SUNDAY][i] == 1) ++count;
	}

	cout << count << endl;

	//int year = 1901;
	//int monthCount = 0;
	//
	//for (unsigned int i = 0; i < WeekdaysV[SUNDAY].size(); ++i)
	//{
	//	if (WeekdaysV[MONDAY][i] == 1 || WeekdaysV[TUESDAY][i] == 1 || WeekdaysV[WEDNESDAY][i] == 1 || WeekdaysV[THURSDAY][i] == 1 || WeekdaysV[FRIDAY][i] == 1 || WeekdaysV[SATERDAY][i] == 1 || WeekdaysV[SUNDAY][i] == 1)
	//	{
	//		if (monthCount % 12 == 0)
	//		{
	//			cout << "=====" << year++ << "=====" << endl;
	//			monthCount %= 12;
	//		}
	//
	//		++monthCount;
	//	}
	//
	//	cout << ++week << " : "<< WeekdaysV[MONDAY][i] << " " << WeekdaysV[TUESDAY][i] << " " << WeekdaysV[WEDNESDAY][i] << " " << WeekdaysV[THURSDAY][i] << " " << WeekdaysV[FRIDAY][i] << " " << WeekdaysV[SATERDAY][i] << " " << WeekdaysV[SUNDAY][i] << endl;
	//}
}
//171
*/