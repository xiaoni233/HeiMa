#include<iostream>
using namespace std;
#include<functional>//内建函数对象头文件

//内建函数对象算术仿函数

//negate 一元仿函数 取反仿函数
void testSTLB04()
{
	negate<int>n;
	cout << n(50) << endl;

}

//plus 二元仿函数 加法
void testSTLB0402()
{
	plus<int>p;
	multiplies<int>s;
	minus<int>m;

	cout << p(10, 20) << endl;
}
/*
int main()
{
	testSTLB04();
	testSTLB0402();
}*/