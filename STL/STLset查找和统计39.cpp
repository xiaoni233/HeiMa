#include<iostream>
using namespace std;
#include<set>

void printSet04(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set���������ɾ��
void testSTL39()
{
	set<int>s1;

	//�������� ֻ��insert��ʽ
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

}

void testSTL3902()
{
	//����
	set<int>s1;

	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//ͳ��30�ĸ���
	int num = s1.count(30);
	//����setͳ����0��1
	//multiset���ܴ���һ
	cout << num << endl;


}

