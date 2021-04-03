#include <iostream>
using namespace std;

class Data
{
public:
	Data(int year = 1, int month = 1, int day= 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	bool operator==(const Data& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}
	Data operator=(const Data& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
			cout << "operator=" << endl;
		}
		
		return *this;
	}

	Data(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "const Data&" << endl;
	}

public:
	int _year;
	int _month;
	int _day;
};

void test()
{
	Data d1(2021, 3, 14);
	Data d2(2021, 3, 15);
	Data d3;
	d1 = d2 = d3;
	//Data d4 (d1);
	
}
int main()
{
	test();
	return 0;
}