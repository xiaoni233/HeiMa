#include<iostream>
using namespace std;
#include<set>

void printSet02(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set��������͸�ֵ
void testSTL37()
{
	set<int>s1;

	//�������� ֻ��insert��ʽ
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//��������
	//set�����ص�:����Ԫ�ز���ʱ���Զ�����
	//set��������������ظ�ֵ
	

	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ��" << s1.size()<<endl;
	}

	set<int>s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(400);
	s2.insert(200);

	cout << "����ǰ" << endl;
	printSet02(s1);
	s1.swap(s2);
	cout << "������" << endl;
	printSet02(s1);
}

