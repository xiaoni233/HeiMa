#include<iostream>
using namespace std;
#include<string>


//类模板成员函数类外实现
template<class T1,class T2>
class Person013
{
public:

	T1 m_Name;
	T2 m_Age;

public:
	   Person013(T1 name, T2 age);

		void showPerson();

};

//构造函数类外实现
template<class T1, class T2>
Person013<T1,T2>::Person013(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;

}

//成员函数类外实现
template<class T1, class T2>
void Person013<T1,T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "\t" << "年龄" << this->m_Age << endl;
}


void test013()
{
	Person013<string, int>p("Tom", 666);
	p.showPerson();
}


int main()
{
	test013();
}