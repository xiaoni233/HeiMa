#include<iostream>
using namespace std;
#include<string>


//ģ�������
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ���廯��ʽ������ʵ��

class Person
{
public:
	//����
	string m_Name;
	//����
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};


//�Ա����������Ƿ���Ⱥ���
template<class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}


}

//���þ��廯��Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person &a, Person &b)
{
	if (a.m_Name == b.m_Name&&a.m_Age == b.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

void test07()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}

}

void test08()
{
	Person p1("tom", 10);
	Person p2("tom", 20);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}


}

/*
int main()
{
	test08();

}*/