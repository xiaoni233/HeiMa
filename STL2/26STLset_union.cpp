#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint7
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};


//常用集合算法
void testSTLB26()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	//目标容器需要提前开辟空间
	//最差情况为容器没有交集
	vTarget.resize(v1.size()+v2.size());

	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//itEnd是人家给的准确的交集最后的元素的迭代器，v.end()是容器的结束迭代器，会有多余的0000
	for_each(vTarget.begin(),itEnd, MyPrint7());
}

/*
int main()
{
	testSTLB26();
}
*/