#include<iostream>
using namespace std;
#include<set>

void printSet04(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器插入和删除
void testSTL39()
{
	set<int>s1;

	//插入数据 只有insert方式
	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "找到元素" << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

}

void testSTL3902()
{
	//查找
	set<int>s1;

	s1.insert(40);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//统计30的个数
	int num = s1.count(30);
	//对于set统计是0或1
	//multiset可能大于一
	cout << num << endl;


}

