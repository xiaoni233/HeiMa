#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};


//常用查找算法count_if
void testSTLB14()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	
   int num=count_if(v.begin(), v.end(), Greater20());

	cout << ">20的元素个数为：" << num << endl;

}

//2.自定义类型
class Person02
{
public:
	Person02(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载== 让底层find知道如何对比Person
	bool operator==(const Person02&p)
	{
		if (this->m_Age == p.m_Age)
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

class AgeGreater20
{
public:
	bool operator()(const Person02&p)
	{
		return p.m_Age > 20;
	}
};

void testSTLB1402()
{
	vector<Person02>v;
	Person02 p1("刘备", 35);
	Person02 p2("关羽", 35);
	Person02 p5("曹操", 35);
	Person02 p3("张飞", 30);
	Person02 p4("赵云", 20);

	//放入容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person02 p("诸葛亮", 35);

	int num = count_if(v.begin(), v.end(), AgeGreater20());

	cout << ">20的有" << num << "个" << endl;

}
/*
int main()
{
	testSTLB1402();

}
*/
