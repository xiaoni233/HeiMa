#include<iostream>
using namespace std;
#include<set>

void printSet02(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器构造和赋值
void testSTL37()
{
	set<int>s1;

	//插入数据 只有insert方式
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//遍历容器
	//set容器特点:所有元素插入时候自动排序
	//set容器不允许插入重复值
	

	//判断是否为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size()<<endl;
	}

	set<int>s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(400);
	s2.insert(200);

	cout << "交换前" << endl;
	printSet02(s1);
	s1.swap(s2);
	cout << "交换后" << endl;
	printSet02(s1);
}

