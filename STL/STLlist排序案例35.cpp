#include<iostream>
#include<string>
using namespace std;
#include<list>

class Person
{
public:
	string m_Name;
	int m_Age;
	int m_Height;

	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}


};

bool comparePerson(Person &p1, Person &p2)
{
	//°´ÕÕÄêÁäÉıĞò
	return p1.m_Age < p2.m_Age;
}



void testSTL35()
{
	list<Person>L1;

	Person p1("ÕÔÔÆ",28,180);
	Person p2("²Ü²Ù", 45, 180);
	Person p3("Áõ±¸", 32, 180);
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	
	for (list<Person>::const_iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << (*it).m_Name<< " "<<it->m_Age<<it->m_Height<<endl;
	}

	cout << "ÅÅĞòºó" << endl;

	L1.sort(comparePerson);
	for (list<Person>::const_iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << (*it).m_Name << " " << it->m_Age << it->m_Height << endl;
	}

}



int main()
{

	testSTL35();
	system("pause");
}