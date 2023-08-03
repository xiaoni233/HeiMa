#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person014
{
public:

	T1 m_Name;
	T2 m_Age;

public:
	Person014(T1 name, T2 age);

	void showPerson();

};




//构造函数类外实现
template<class T1, class T2>
Person014<T1, T2>::Person014(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;

}

// 成员函数类外实现
template<class T1, class T2>
void Person014<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "\t" << "年龄" << this->m_Age << endl;
}

