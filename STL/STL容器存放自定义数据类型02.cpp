#include<iostream>
using namespace std;
#include<vector>
#include<string>

//vector�����д���Զ�����������
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

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	for (vector<PersonSTL02>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << " " << "���䣺" << (*it).m_Age << endl;
		cout << "������" << it->m_Name << " " << "���䣺" << it->m_Age << endl;
	}

}

//����Զ����������� ָ��
void testSTL02_02()
{
	vector<PersonSTL02*>v;
	PersonSTL02 p1("aaa", 666);
	PersonSTL02 p2("bbb", 20);
	PersonSTL02 p3("ccc", 30);
	PersonSTL02 p4("ddd", 40);
	PersonSTL02 p5("eee", 50);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//��������
	for (vector<PersonSTL02*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)���ݿ�<>��������ָ��
		cout << "������" << (*it)->m_Name << " " << "���䣺" << (*it)->m_Age << endl;
	}
}

int main()
{
   	//testSTL02();
	testSTL02_02();
	system("pause");
}