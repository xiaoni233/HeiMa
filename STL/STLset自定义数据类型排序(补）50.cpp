#include<iostream>
using namespace std;
#include<set>
#include<string>


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class ComparePerson
{
public:
	bool operator()(const Person&p1, const Person&p2)
	{
		//年龄降序
		return p1.m_Age > p2.m_Age;
	}

};

void testSTL50()
{
	//自定义数据类型都会指定排序规则
	set<Person,ComparePerson>s;
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名： "<< it->m_Name << " 年龄 : " << it->m_Age << endl;
	}

}
/*
int main() {
	testSTL50();

	system("pause");
	
	return 0;
}*/
