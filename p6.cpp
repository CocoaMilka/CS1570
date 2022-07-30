#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Days {

public:

	bool isLeapYear(int year)
	{
		return (year % 400 || (year % 4 && year % 100 != 0));
	}

	int daysSince1971(string date)
	{
		int year;
		int month;
		int day;

		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 2));
		day = stoi(date.substr(8, 2));

		vector<int> month_days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		//converts years to days
		for (int i = 1971; i < year; i++)
		{
			if (isLeapYear(year))
			{
				day = day + 366;
			}
			else
			{
				day = day + 365;
			}
		}

		//converts months to days
		for (int j = 1; j < month; j++)
		{
			day = day + month_days[j];

			if (j == 2 && isLeapYear(year))
			{
				day = day + 1;
			}
		}

		return day;
	}

};

int main ()
{
	Days solu;

	string date1 = "2020-01-15";
	string date2 = "2019-12-31";

	int days;

	days = abs(solu.daysSince1971(date1) - solu.daysSince1971(date2));
	cout << days;

	return 0;
}
