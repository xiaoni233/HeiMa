#include<iostream>
using namespace std;
#include<set>

void printSet03(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器插入和删除
void testSTL38()
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
	printSet03(s1);

	s1.erase(s1.begin());//删除升序后的第一个
	printSet03(s1);

	//删除重载版本
	s1.erase(30);
	printSet03(s1);

	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet03(s1);


}

int main()
{
	testSTL38();
	system("pause");
}