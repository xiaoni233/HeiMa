#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>


void testSTLB23()
{
	vector<int>v1;

	for (int i = 0; i <=100; i++)
	{
		v1.push_back(i);
		
	}
	//参数三 起始累加值
	int total=accumulate(v1.begin(), v1.end(), 1000);
	cout << "total = " << total << endl;
	
	return;
}
/*
int main()
{
	testSTLB23();
}
*/