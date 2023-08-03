
#include<iostream>
using namespace std;

#include<list>

//list�����ɾ��
void printList05(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list���� ��ת������
void testSTL34()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList05(L1);

	//��ת
	L1.reverse();
	cout << "��ת��" << endl;
	printList05(L1);


}

bool myCompare(int v1,int v2)
{
	//���� ���õ�һ�������ڶ�����

	return v1 > v2;
}

//����
void testSTL3402()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//����
	cout << "����ǰ" << endl;
	printList05(L1);

	//��֧��������ʵĵ��������������������ñ�׼�㷨
	//sort(L1.begin, L1.end());//��֧��������ʵĵ��������������ڲ����ṩ��Ӧ�㷨
	L1.sort();//����
	cout << "�����" << endl;
	printList05(L1);

	L1.sort(myCompare);
	printList05(L1);

}


