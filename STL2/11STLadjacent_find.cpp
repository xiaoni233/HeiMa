#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//常用查找算法adjacent_find
//查找并返回第一个重复的元素
void testSTLB11()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());

	if (pos == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到相邻重复元素：" << *pos << endl;
	}
}
/*
int main()
{
	testSTLB11();

}
*/