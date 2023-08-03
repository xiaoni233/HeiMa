#include<iostream>
using namespace std;

#include<vector>


void printVectorSTL13(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void testSTL13()
{
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVectorSTL13(v1);

	//��ֵ operator=
	vector<int>v2;
	v2 = v1;
	printVectorSTL13(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//ǰ�պ�����
	printVectorSTL13(v3);

	//n��elem��ʽ��ֵ
	vector<int>v4;
	v4.assign(10, 100);
	printVectorSTL13(v4);
}

//int  main()
//{
//	testSTL13();
//	system("pause");
//
//}