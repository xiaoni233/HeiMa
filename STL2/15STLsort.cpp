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


//���ò����㷨sort
void testSTLB15()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(60);

	//����sort��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout  << endl;
	//����sort���н���
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);

}

/*
int main()
{
	testSTLB15();

}
*/