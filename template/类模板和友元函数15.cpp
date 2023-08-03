#include<iostream>
using namespace std;
#include<string>

//提前让编译器知道Person类存在
template<class T1,class T2>
class Person015;

//类外实现友元全局函数
template<class T1, class T2>
void printPerson(Person015<T1, T2> p)
{
	cout << "（类外）姓名：" << p.m_Name << "\t" << "年龄" << p.m_Age << endl;
}


//全局函数打印
template<class T1, class T2>
class Person015
{
private:
	//全局函数类内实现
	
	friend void printPerson2(Person015<T1, T2> p)
	{
		cout << "（类内）姓名：" << p.m_Name << "\t" << "年龄" << p.m_Age << endl;
	}
	//类外要加<>,使编译器认识他是函数模板
	friend void printPerson<>(Person015<T1, T2> p);


	T1 m_Name;
	T2 m_Age;

public:
	Person015(T1 name, T2 age);

	

};




//构造函数类外实现
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


//全局函数在类外实现
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