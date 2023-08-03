#include<iostream>
using namespace std;
#include<string>
//ÀàÄ£°å
template<class NameType,class AgeType>
class Person02
{
public:
	Person02(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	NameType m_Name;
	AgeType m_Age;

	void showPerson()
	{
		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
	}

};

void test09()
{
	Person02<string, int>p1("ËïÎò¿Õ",999);
	p1.showPerson();
}

/*
int main()
{
	test09();
}*/