#include <iostream>
#include <string>

using namespace std;

void test1()
{
	string str = "12345";
	//��ʼλ�õĵ�����
	string::iterator it = str.begin();
	for (; it != str.end(); it++)
	{
		//�������Ľ�����
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
	//��Χfor
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