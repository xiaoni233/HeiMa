#include<algorithm>
#include<vector>

#include<iostream>

using namespace std;

void myPrint04(int val)
{
	cout << val << " ";
}


//常用查找算法copy
void testSTLB19()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		
	}
	//目标容器,要先分配空间
	vector<int>v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());


	for_each(v2.begin(), v2.end(), myPrint04);
	cout << endl;

}

/*
int main()
{
	testSTLB19();
}
*/
