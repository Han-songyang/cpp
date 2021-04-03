#include <iostream>
using namespace std;


class Data
{
public:

	//构造函数
	Data(int year = 1, int month = 1, int day = 1)
	{
		if (year < 0 || month < 0 || month>12 || day<0 || day>getDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
			cout << "输入错误，设为默认值：1—1—1" << endl;
		}
		else
		{
			_year = year;
			_month = month;
			_day = day;

		}
	}

	int getDay(int year, int month)
	{
		static int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month];
		if (month == 2 && (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0))
		{
			day += 1;
		}
		return day;

	}


	//日期运算

	//Data +=
	Data& operator +=(int day)
	{
		_day += day;

		//判断日期是否溢出
		while (_day > getDay(_year, _month))
		{
			_day -= getDay(_year, _month);

			//月份进位
			++_month;

			//判断年份是否溢出
			if (_month == 13)
			{
				//年份进位
				++_year;
				_month = 1;
			}
		}
		return *this;
	}

	//Data +
	Data operator+(int day)
	{
		Data copy = *this;
		copy += day;
		return copy;
	}

	//++Data
	Data& operator++()
	{
		return *this += 1;
	}

	//Data++
	Data operator++(int)  //int参数的作用：为了和前置++构成重载
	{
		Data copy;
		copy = *this;
		copy += 1;
		return copy;

	}

private:
	int _year;
	int _month;
	int _day;
};


void test()
{
	Data d1(2021, 2, 4);
	Data d2(2021, 2, 4);
	Data d3(2021, 2, 4);
	Data d4(2021, 2, 4);

	d1 += 1;
	d2 += 30;
	d3 += 90;
	d4 += 360;

	d3 = d4 + 90;
	d1= d3++;
	d2 = ++d3;
}


int main()
{
	test();
	return 0;
}