#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint4
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};


void testSTLB22()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "����ǰ:" << endl;
	for_each(v1.begin(), v1.end(), MyPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint4());
	cout << endl;

	
	cout << "������:" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), MyPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint4());
	cout << endl;
	return;
}
/*
int main()
{
	testSTLB22();
}
*/