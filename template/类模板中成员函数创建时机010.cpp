#include<iostream>
using namespace std;
#include<string>


//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person0101
{
public:
	void showPerson0101()
	{
		cout << "Person01 show" << endl;
	}

};

class Person0102
{
public:
	void showPerson0202()
	{
		cout << "Person02 show" << endl;
	}

};


template<class T>
class MyClass
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	//��ģ��ĳ�Ա����û���ܴ�����������Ϊû��ȷ������
	//��ȷ�������ͲŴ�����Ա����
	void func1()
	{
		obj.showPerson0101();
	}
	void func2()
	{
		obj.showPerson0202();
	}

};

void test010()
{

	MyClass<Person0101>m;
	m.func1();
	//m.func2();
}


int main()
{
	test010();

}