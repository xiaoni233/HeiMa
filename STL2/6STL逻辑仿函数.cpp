
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

//逻辑仿函数
//逻辑非 logical_not

class MyCompare
{//两个参数就是二元谓词
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

void testSTLB06()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//利用逻辑非 将容器v 搬运到 容器v2中，执行取反操作
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	testSTLB06();
}
