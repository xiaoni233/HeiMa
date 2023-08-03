#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


//常用查找算法binary_search
void testSTLB12()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中是否9元素
	//注意：容器内的元素必须是有序的序列，无序则未知结果
	bool ret=binary_search(v.begin(), v.end(), 9);

	if(ret)
	{
		cout << "找到：" << endl;
	}
	else
	{
		
		cout << "没有找到！" << endl;
	}

}
/*
int main()
{
	testSTLB12();

}
*/