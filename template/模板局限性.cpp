#include<iostream>
using namespace std;
#include<string>


//模板局限性
//模板并不是万能的，有些特定数据类型，需要具体化方式做特殊实现

class Person
{
public:
	//姓名
	string m_Name;
	//年龄
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};


//对比两个数据是否相等函数
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

//利用具体化的Person的版本实现代码，具体化优先调用
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