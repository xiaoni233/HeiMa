#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//���ò����㷨adjacent_find
//���Ҳ����ص�һ���ظ���Ԫ��
void testSTLB11()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());

	if (pos == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ�أ�" << *pos << endl;
	}
}
/*
int main()
{
	testSTLB11();

}
*/