#include<iostream>
using namespace std;
#include<set>

void printSet05(multiset<int>&s)
{
	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set���������ɾ��
void testSTL40()
{
	set<int>s1;

	//�������� ֻ��insert��ʽ
	pair<set<int>::iterator,bool>ret=s1.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else 
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "��2�β���ɹ�" << endl;
	}
	else
	{
		cout << "��2�β���ʧ��" << endl;
	}
	
	multiset<int>ms;

	//�����ظ�����
	ms.insert(10);
	ms.insert(10);
	printSet05(ms);
}



//int main()
//{
//	testSTL40();
//	system("pause");
//}