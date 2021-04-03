#include<iostream>
#include<stdio.h>
using namespace std;
void test1()
{
	auto a = 10;
	auto b = 2.0;
	auto c = 'a' + b;

	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;

}



int main() 
{
	test1();
	return 0;
}