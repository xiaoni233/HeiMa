
#include<iostream>
using namespace std;

#include<list>

//list插入和删除
void printList05(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list容器 反转和排序
void testSTL34()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList05(L1);

	//反转
	L1.reverse();
	cout << "反转后" << endl;
	printList05(L1);


}

bool myCompare(int v1,int v2)
{
	//降序 就让第一个数》第二个数

	return v1 > v2;
}

//排序
void testSTL3402()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//排序
	cout << "排序前" << endl;
	printList05(L1);

	//不支持随机访问的迭代器的容器，不可以用标准算法
	//sort(L1.begin, L1.end());//不支持随机访问的迭代器的容器，内部会提供对应算法
	L1.sort();//升序
	cout << "排序后：" << endl;
	printList05(L1);

	L1.sort(myCompare);
	printList05(L1);

}


