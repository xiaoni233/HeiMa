#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint03(int val)
{
	cout << val << " ";
}


//���ò����㷨reverse
void testSTLB18()
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
	for_each(v.begin(), v.end(), myPrint03);
	cout << endl;
	

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint03);
	return;
}

/*
int main()
{
	testSTLB18();
	return 0;
}
*/
