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
		//���併��
		return p1.m_Age > p2.m_Age;
	}

};

void testSTL50()
{
	//�Զ����������Ͷ���ָ���������
	set<Person,ComparePerson>s;
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������ "<< it->m_Name << " ���� : " << it->m_Age << endl;
	}

}
/*
int main() {
	testSTL50();

	system("pause");
	
	return 0;
}*/
