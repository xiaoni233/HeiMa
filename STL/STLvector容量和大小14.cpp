#include<iostream>
using namespace std;
#include<vector>


void printVectorSTL14(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void testSTL14()
{
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVectorSTL14(v1);
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ����" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ:" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15, 100);//�������ذ汾������ָ��Ĭ�����ֵ������2
	printVectorSTL14(v1);//�������ָ����ԭ�����ˣ�Ĭ����0����µ�λ��
	
	v1.resize(5);
	printVectorSTL14(v1);//�������ָ����ԭ���̣��������ֻ�ɾ����

}

//int  main()
//{
//	testSTL14();
//	system("pause");
//
//}