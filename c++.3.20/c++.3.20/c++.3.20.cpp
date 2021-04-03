#include <iostream>
#include <string>

using namespace std;

void test1()
{
	string str = "12345";
	//起始位置的迭代器
	string::iterator it = str.begin();
	for (; it != str.end(); it++)
	{
		//迭代器的解引用
		cout << *it << " " ;
	}
}


void test2()
{
	string str="12345";
	string::reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{ 
		cout << *it << " ";
		++it;

	}

	string str2 = "12345";
	string::const_reverse_iterator cit = str.crbegin();
	//*cit = 'a';
	

}

void test3()
{
	//范围for
	string str = "12345";
	for ( auto& ch : str)
	{
		cout << ch << " " << endl;
		ch = 'a';
	}
	cout << str << endl;
}

int main()
{
	test3();
	return 0;
}