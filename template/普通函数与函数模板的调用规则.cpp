#include<iostream>
using namespace std;

//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表强制调用函数模板
//3.函数模板可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板
//既然提供了函数模板就不要用普通函数，容易出现2义性

void myPrint(int a, int b)//只是声明的情况还是调用函数
{
	cout << "调用的普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用的模板" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "重载的模板" << endl;
}

void test06()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	char d = 'd';

	//myPrint(a, b);

	//2.可以通过空模板参数列表强制调用函数模板
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	//如果函数模板产生更好的匹配，优先优先调用函数模板
	myPrint(c, d);


}
/*
int main()
{
	test06();
}*/