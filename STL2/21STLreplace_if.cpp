#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint3
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};

class Greater30
{
public:
	bool operator()(int val)
	{
		return val > 30;
	}
};


//���ò����㷨replace_if
void testSTLB21()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(20);
	v.push_back(20);
	v.push_back(60);


	cout << "�滻ǰ:" << endl;
	for_each(v.begin(), v.end(), MyPrint3());
	cout << endl;

	//��20�滻��2000
	cout << "�滻ǰ��:" << endl;
	replace_if(v.begin(), v.end(), Greater30(), 3000);
	for_each(v.begin(), v.end(), MyPrint3());
	return;
}


int main()
{
	testSTLB21();
	return 0;
}

