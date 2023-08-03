#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

//关系仿函数
//大于greater

class MyCompare
{//两个参数就是二元谓词
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

void testSTLB05()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	//sort(v.begin(), v.end(), MyCompare());
	//greater<int>()大于
	//sort默认为less<>()
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}
/*
int main()
{
	testSTLB05();
}
*/