#include<iostream>
using namespace std;
#include<vector>
#include<string>

//vector容器中存放自定义数据类型
class PersonSTL02
{
public:
	PersonSTL02(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;

};
void testSTL02()
{
	vector<PersonSTL02>v;
	PersonSTL02 p1("aaa", 10);
	PersonSTL02 p2("bbb", 20);
	PersonSTL02 p3("ccc", 30);
	PersonSTL02 p4("ddd", 40);
	PersonSTL02 p5("eee", 50);

	//向容器里添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<PersonSTL02>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " " << "年龄：" << (*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << " " << "年龄：" << it->m_Age << endl;
	}

}

//存放自定义数据类型 指针
void testSTL02_02()
{
	vector<PersonSTL02*>v;
	PersonSTL02 p1("aaa", 666);
	PersonSTL02 p2("bbb", 20);
	PersonSTL02 p3("ccc", 30);
	PersonSTL02 p4("ddd", 40);
	PersonSTL02 p5("eee", 50);

	//向容器里添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<PersonSTL02*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)内容看<>，这里是指针
		cout << "姓名：" << (*it)->m_Name << " " << "年龄：" << (*it)->m_Age << endl;
	}
}

int main()
{
   	//testSTL02();
	testSTL02_02();
	system("pause");
}