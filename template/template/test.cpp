#include<iostream>
using namespace std;

template<class T>
class seqList
{
public:
	seqList(int n)
		:_data(new T[n])
		,_size(0)
		,_capacity(n)
	{}

	T seqListAt(size_t pos);

private:
	T* _data;
	size_t _size;
	size_t _capacity;
};

template<class T>
T seqList<T>::seqListAt(size_t pos)
{
	return _data[pos];
}

void test()
{
	88888888888888888888888888888888888888888888888888888888888888888888
}

//template<typename T1,typename T2>
//T1 Add(T1 a, T2 b)
//{
//	return a + b;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//
//void test()
//{
//	
//	Add(1, 2);
//	Add(1, 1.2);
//	
//}

//template<typename T>
//void Swap(T& a, T& b)
//{
//	T tem = a;
//	a = b;
//	b = tem;
//}

//void test()
//{
//	int a = 1, b = 2;
//	char c = 'a', d = 'b';
//	float e = 1.2, f = 1.5;
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);
//	cout << a << " " << b << endl;
//	cout << c << " " << d << endl;
//	cout << e << " " << f << endl;
//}

int main()
{
	test();
	return 0;
}