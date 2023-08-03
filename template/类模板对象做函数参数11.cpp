#include<iostream>
using namespace std;
#include<string>

//类模板对象做函数参数

template<class T1,class T2>
class Person011
{
	T1 m_Name;
	T2 m_Age;

public:
	Person011(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	void showPerson()
	{
		cout << "姓名：" << this->m_Name <<"\t"<< "年龄" << this->m_Age << endl;
	}

};


//1.指定传入类型
void printPerson1(Person011<string,int>&p)
{
	p.showPerson();
}

void test011()
{
	Person011<string, int>p("孙悟空", 100);
	printPerson1(p);
}



//2.参数模板化
template<class T1,class T2>
void printPerson2(Person011<T1, T2>&p)
{
	p.showPerson();
	cout << "T1的类型：" << typeid(T1).name() << endl;//看类型
	cout << "T2的类型：" << typeid(T2).name() << endl;
}

void test0112()
{
	Person011<string, int>p("猪八戒", 90);
	printPerson2(p);
}



//3.整个类模板化,把类作为自定义数据类型传入
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T的类型：" << typeid(T).name() << endl;//看类型
}
void test0113()
{
	Person011<string, int>p("唐僧", 30);
	printPerson3(p);
}



/*
int main()
{
	
	test0113();
}*/