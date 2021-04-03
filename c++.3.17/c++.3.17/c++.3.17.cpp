#include <iostream>
using namespace std;


class Data
{
public:

	//���캯��
	Data(int year = 1, int month = 1, int day = 1)
	{
		if (year < 0 || month < 0 || month>12 || day<0 || day>getDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
			cout << "���������ΪĬ��ֵ��1��1��1" << endl;
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


	//��������

	//Data +=
	Data& operator +=(int day)
	{
		_day += day;

		//�ж������Ƿ����
		while (_day > getDay(_year, _month))
		{
			_day -= getDay(_year, _month);

			//�·ݽ�λ
			++_month;

			//�ж�����Ƿ����
			if (_month == 13)
			{
				//��ݽ�λ
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
	Data operator++(int)  //int���������ã�Ϊ�˺�ǰ��++��������
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