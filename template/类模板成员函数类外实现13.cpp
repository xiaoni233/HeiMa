#include<iostream>
using namespace std;
#include<string>


//��ģ���Ա��������ʵ��
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

//���캯������ʵ��
template<class T1, class T2>
Person013<T1,T2>::Person013(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;

}

//��Ա��������ʵ��
template<class T1, class T2>
void Person013<T1,T2>::showPerson()
{
	cout << "������" << this->m_Name << "\t" << "����" << this->m_Age << endl;
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