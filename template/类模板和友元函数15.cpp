#include<iostream>
using namespace std;
#include<string>

//��ǰ�ñ�����֪��Person�����
template<class T1,class T2>
class Person015;

//����ʵ����Ԫȫ�ֺ���
template<class T1, class T2>
void printPerson(Person015<T1, T2> p)
{
	cout << "�����⣩������" << p.m_Name << "\t" << "����" << p.m_Age << endl;
}


//ȫ�ֺ�����ӡ
template<class T1, class T2>
class Person015
{
private:
	//ȫ�ֺ�������ʵ��
	
	friend void printPerson2(Person015<T1, T2> p)
	{
		cout << "�����ڣ�������" << p.m_Name << "\t" << "����" << p.m_Age << endl;
	}
	//����Ҫ��<>,ʹ��������ʶ���Ǻ���ģ��
	friend void printPerson<>(Person015<T1, T2> p);


	T1 m_Name;
	T2 m_Age;

public:
	Person015(T1 name, T2 age);

	

};




//���캯������ʵ��
template<class T1, class T2>
Person015<T1, T2>::Person015(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;

}



void test0152()
{
	/*Person015<string, int>p("Jerry", 20);
	printPerson2(p);*/
}


//ȫ�ֺ���������ʵ��
void test015()
{
	Person015<string, int>p("tom", 666);
	printPerson(p);
}



int main()
{
	test015();
	system("pause");
}