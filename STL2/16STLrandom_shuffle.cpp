#include<algorithm>
#include<vector>
#include<ctime>
#include<iostream>

using namespace std;

void myPrint01(int val)
{
	cout << val << " ";
}


//常用查找算法random_shuffle
void testSTLB16()
{
	vector<int>v;
	srand((unsigned int)time(NULL));//加随机数种子
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint01);
	cout << endl;
	
}

/*
int main()
{
	testSTLB16();
}
*/
