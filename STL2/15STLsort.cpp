#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<functional>
using namespace std;

void myPrint(int val)
{
	cout << val << " ";
}


//常用查找算法sort
void testSTLB15()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(60);

	//利用sort进行升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout  << endl;
	//利用sort进行降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);

}

/*
int main()
{
	testSTLB15();

}
*/