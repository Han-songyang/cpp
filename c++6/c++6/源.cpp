#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int a, int b) { x = a, y = b; }
	Point& operator++();
	Point operator++(int);
	Point& operator--();
	Point operator--(int);
	void showPoint();
};
Point& Point::operator++()//前置++ 
{
	++x, ++y;
	return *this;
}
Point Point::operator++(int)//后置++ 
{
	x++, y++;
	return *this;
}
Point& Point::operator--()//前置-- 
{
	--x, --y;
	return *this;
}
Point Point::operator--(int)//后置--
{
	x--, y--;
	return *this;
}
void Point::showPoint()
{
	cout << "x=" << x << "  y=" << y << endl;
}
int main()
{
	int a, b;
	cout << "输入a和b的值：" << endl;
	cin >> a >> b;;
	Point p(a, b);
	p.showPoint();
	cout << "前置++：";
	++p;
	p.showPoint();
	cout << "后置++：";
	p++;
	p.showPoint();
	cout << "前置--：";
	--p;
	p.showPoint();
	cout << "后置--：";
	p--;
	p.showPoint();
	return 0;
}
