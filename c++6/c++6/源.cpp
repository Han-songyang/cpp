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
Point& Point::operator++()//ǰ��++ 
{
	++x, ++y;
	return *this;
}
Point Point::operator++(int)//����++ 
{
	x++, y++;
	return *this;
}
Point& Point::operator--()//ǰ��-- 
{
	--x, --y;
	return *this;
}
Point Point::operator--(int)//����--
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
	cout << "����a��b��ֵ��" << endl;
	cin >> a >> b;;
	Point p(a, b);
	p.showPoint();
	cout << "ǰ��++��";
	++p;
	p.showPoint();
	cout << "����++��";
	p++;
	p.showPoint();
	cout << "ǰ��--��";
	--p;
	p.showPoint();
	cout << "����--��";
	p--;
	p.showPoint();
	return 0;
}
