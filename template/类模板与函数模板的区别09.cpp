#include<iostream>
using namespace std;
#include<string>


//��ģ���뺯��ģ������
template<class NameType, class AgeType=int>//����Ĭ��class AgeType = int >
class Person03
{
public:
	Person03(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	NameType m_Name;
	AgeType m_Age;

	void showPerson()
	{
		cout << "name: " << this->m_Name << "\n" << "age: " << this->m_Age << endl;
	}

};

//1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void  test0901()
{
	//Person03 p("�����", 1000);//�����޷����Զ����������Ƶ�

	Person03<string, int>p("�����", 1000);
	p.showPerson();
}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test0902()
{
	
	Person03<string>p("��˽�", 1000);
	p.showPerson();
}

/*
int main()
{
	test0901();
	test0902();
}
*/