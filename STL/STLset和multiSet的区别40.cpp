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

//set容器插入和删除
void testSTL40()
{
	set<int>s1;

	//插入数据 只有insert方式
	pair<set<int>::iterator,bool>ret=s1.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else 
	{
		cout << "第一次插入失败" << endl;
	}
	
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "第2次插入成功" << endl;
	}
	else
	{
		cout << "第2次插入失败" << endl;
	}
	
	multiset<int>ms;

	//允许重复插入
	ms.insert(10);
	ms.insert(10);
	printSet05(ms);
}



//int main()
//{
//	testSTL40();
//	system("pause");
//}