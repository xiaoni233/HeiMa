#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//���ò����㷨count
void testSTLB13()
{
	vector<int>v;
	
		v.push_back(10);
		v.push_back(40);
		v.push_back(30);
		v.push_back(40);
		v.push_back(20);
		v.push_back(40);
	
	//�����������Ƿ�9Ԫ��
	//ע�⣺�����ڵ�Ԫ�ر�������������У�������δ֪���
	int num = count(v.begin(), v.end(), 40);

	cout << "40��Ԫ�ظ���Ϊ��" << num << endl;

}

//2.�Զ�������
class Person01
{
public:
	Person01(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//����== �õײ�find֪����ζԱ�Person
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
	Person01 p1("����", 35);
	Person01 p2("����", 35);
	Person01 p5("�ܲ�", 35);
	Person01 p3("�ŷ�", 30);
	Person01 p4("����", 40);
	
	//����������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person01 p("�����", 35);

    int num= count(v.begin(), v.end(), p);

	
	cout << "��������ͬ����"<< num<<"��" << endl;
	
}
/*
int main()
{
	testSTLB1302();

}
*/