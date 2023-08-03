#include<iostream>
using namespace std;



//函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是通用类型
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


//两个整数交换函数
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;

}

void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//函数模板交换
	//两种方式
	//1.自动推导
	//mySwap(a, b);

	//2.显示指定
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	/*double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;*/
}




