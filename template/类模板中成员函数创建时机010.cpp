#include<iostream>
using namespace std;
#include<string>


//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

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
	//类模板中的成员函数
	//类模板的成员函数没有能创建出来是因为没有确定类型
	//当确定了类型才创建成员函数
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