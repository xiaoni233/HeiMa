#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set��������͸�ֵ
void testSTL36()
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
	printSet(s1);

	//��������
	set<int>s2(s1);
	printSet(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s3);
}

