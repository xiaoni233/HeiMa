#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//���ò����㷨binary_search
void testSTLB12()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//�����������Ƿ�9Ԫ��
	//ע�⣺�����ڵ�Ԫ�ر�������������У�������δ֪���
	bool ret=binary_search(v.begin(), v.end(), 9);

	if(ret)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		
		cout << "û���ҵ���" << endl;
	}

}
/*
int main()
{
	testSTLB12();

}
*/