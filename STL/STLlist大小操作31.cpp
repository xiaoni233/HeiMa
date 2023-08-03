#include<iostream>
using namespace std;

#include<list>

//list��С����
void printList03(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//��ֵ
void testSTL31()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList03(L1);

	//�ж������Ƿ�Ϊ��
	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1��Ԫ�ظ���Ϊ:" << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10,10000);
	printList03(L1);

	L1.resize(2);
	printList03(L1);


}

