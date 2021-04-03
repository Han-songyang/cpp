#include <iostream>
using namespace std;
inline int add(int a, int b)
{
	return a + b;
}
void test()
{
	int a = add(10, 20);
	cout << a << endl;

}
int main()
{
	test();
	return 0;
}