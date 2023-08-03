#include<iostream>
using namespace std;
#include<string>


//类模板与函数模板区别
template<class NameType, class AgeType=int>//可以默认class AgeType = int >
class Person03
{
public:
	Person03(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	NameType m_Name;
	AgeType m_Age;

	void showPerson()
	{
		cout << "name: " << this->m_Name << "\n" << "age: " << this->m_Age << endl;
	}

};

//1.类模板没有自动类型推导使用方式
void  test0901()
{
	//Person03 p("孙悟空", 1000);//错误，无法用自动参数类型推导

	Person03<string, int>p("孙悟空", 1000);
	p.showPerson();
}

//2.类模板在模板参数列表中可以有默认参数
void test0902()
{
	
	Person03<string>p("猪八戒", 1000);
	p.showPerson();
}

/*
int main()
{
	test0901();
	test0902();
}
*/