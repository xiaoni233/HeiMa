#include<iostream>
using namespace std;
#include<set>

void printSet03(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set���������ɾ��
void testSTL38()
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
	printSet03(s1);

	s1.erase(s1.begin());//ɾ�������ĵ�һ��
	printSet03(s1);

	//ɾ�����ذ汾
	s1.erase(30);
	printSet03(s1);

	//���
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet03(s1);


}

int main()
{
	testSTL38();
	system("pause");
}