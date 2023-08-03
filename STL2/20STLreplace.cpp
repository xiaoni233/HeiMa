#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};



//常用查找算法replace
void testSTLB20()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(20);
	v.push_back(20);
	v.push_back(60);


	cout << "替换前:" << endl;
	for_each(v.begin(), v.end(), MyPrint2());
	cout << endl;

	//将20替换成2000
	cout << "替换前后:" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), MyPrint2());
	return;
}

/*
int main()
{
	testSTLB20();
	return 0;
}
*/
