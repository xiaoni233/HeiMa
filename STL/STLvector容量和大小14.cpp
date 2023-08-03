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

//vector赋值
void testSTL14()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVectorSTL14(v1);
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为多少" << v1.capacity() << endl;
		cout << "v1的大小为:" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15, 100);//利用重载版本，可以指定默认填充值，参数2
	printVectorSTL14(v1);//如果重新指定比原来长了，默认用0填充新的位置
	
	v1.resize(5);
	printVectorSTL14(v1);//如果重新指定比原来短，超出部分会删除掉

}

//int  main()
//{
//	testSTL14();
//	system("pause");
//
//}