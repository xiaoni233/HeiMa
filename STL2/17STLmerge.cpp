#include<algorithm>
#include<vector>
#include<ctime>
#include<iostream>

using namespace std;

void myPrint02(int val)
{
	cout << val << " ";
}


//常用查找算法random_shuffle
void testSTLB17()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	//目标容器,要先分配空间
	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	
	for_each(vTarget.begin(), vTarget.end(), myPrint02);
	cout << endl;

}


int main()
{
	testSTLB17();
}
