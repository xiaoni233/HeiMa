#include<iostream>
using namespace std;

//普通函数与函数模板区别
//1.普通函数调用发生隐式类型转换
//2.函数模板用自动类型推导，不可以发生隐式类型转换
//3.函数模板用显示指定类型，可以发生隐式类型转换


//普通函数
int myAdd(int a, int b)
{
	return a + b;

}


//函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test05()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd(a, c) << endl;

	//自动类型推导
	//error cout << myAdd02(a, c) << endl;
	//显示指定类型
	cout << myAdd02<int>(a, c) << endl;
}

/*int main()
{

	test05();
}*/