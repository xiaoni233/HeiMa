#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>
//常用查找算法
//find

void testSTLB0901()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 50);
		if (it == v.end())
		{
			cout << "没有找到！" << endl;
		}
		else
		{
			cout << "找到：" << *it << endl;
		}

}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载== 让底层find知道如何对比Person
	bool operator==(const Person&p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void testSTLB0902()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	Person pp("bbb", 20);
	//放入容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到,姓名" << it->m_Name << endl;
	}
}
/*
int main()
{
	//testSTLB0901();
	testSTLB0902();
}
*/