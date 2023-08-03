#include<iostream>
using namespace std;
#include<string>
#include"Person14.hpp"


//1.直接包含源文件
//#include"Person14.cpp"
//2.把。h和。cpp和起来写，后缀名改为hpp

//用。h的声明的时候，模板没有指定类型，不会生成对象，认不出来代码报错


//类模板分文件编写问题以及解决

//template<class T1, class T2>
//class Person014
//{
//public:
//
//	T1 m_Name;
//	T2 m_Age;
//
//public:
//	Person014(T1 name, T2 age);
//
//	void showPerson();
//
//};

////构造函数类外实现
//template<class T1, class T2>
//Person014<T1, T2>::Person014(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//
//}
//
//// 成员函数类外实现
//template<class T1, class T2>
//void Person014<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << "\t" << "年龄" << this->m_Age << endl;
//}

void test014()
{
		Person014<string, int>p("Tom", 666);
		p.showPerson();
}

/*
int main()
{
	test014();
	system("pause");
}*/