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

//vector赋值
void testSTL13()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVectorSTL13(v1);

	//赋值 operator=
	vector<int>v2;
	v2 = v1;
	printVectorSTL13(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//前闭后开区间
	printVectorSTL13(v3);

	//n给elem方式赋值
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