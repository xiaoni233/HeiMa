#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//常用查找算法count
void testSTLB13()
{
	vector<int>v;
	
		v.push_back(10);
		v.push_back(40);
		v.push_back(30);
		v.push_back(40);
		v.push_back(20);
		v.push_back(40);
	
	//查找容器中是否9元素
	//注意：容器内的元素必须是有序的序列，无序则未知结果
	int num = count(v.begin(), v.end(), 40);

	cout << "40的元素个数为：" << num << endl;

}

//2.自定义类型
class Person01
{
public:
	Person01(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载== 让底层find知道如何对比Person
	bool operator==(const Person01&p)
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

void testSTLB1302()
{
	vector<Person01>v;
	Person01 p1("刘备", 35);
	Person01 p2("关羽", 35);
	Person01 p5("曹操", 35);
	Person01 p3("张飞", 30);
	Person01 p4("赵云", 40);
	
	//放入容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person01 p("诸葛亮", 35);

    int num= count(v.begin(), v.end(), p);

	
	cout << "与年龄相同的有"<< num<<"个" << endl;
	
}
/*
int main()
{
	testSTLB1302();

}
*/