#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Transform
{
public:
	int operator()(int v)
	{
		return v+100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

//常用遍历算法 transform
void testSTLB08()
{

	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;//目标容器
	vTarget.resize(v.size());//必须提前开辟空间

	transform(v.begin(), v.end(), vTarget.begin(),Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}
/*
int main()
{
	testSTLB08();
}
*/