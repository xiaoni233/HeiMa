#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint6
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};


//常用集合算法
void testSTLB25()
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
	//最差情况为大容器包含小容器
	vTarget.resize(min(v1.size(), v2.size()));

	vector<int>::iterator itEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//itEnd是人家给的准确的交集最后的元素的迭代器，v。end是容器的结束迭代器，会有多余的0000
	for_each(vTarget.begin(), itEnd, MyPrint6());
}

/*
int main()
{
	testSTLB25();
}
*/