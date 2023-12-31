#include<iostream>
using namespace std;

#include<list>

//list大小操作
void printList03(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//赋值
void testSTL31()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList03(L1);

	//判断容器是否为空
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为:" << L1.size() << endl;
	}

	//重新指定大小
	L1.resize(10,10000);
	printList03(L1);

	L1.resize(2);
	printList03(L1);


}

