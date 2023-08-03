#include<iostream>
#include<algorithm>
#include<numeric>
#include<functional>
#include<vector>
using namespace std;

//��ͨ����
void print01(int val)
{
	cout << val << " ";
}

//�º���
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};


//��ñ����㷨 for_each
void testSTLB07()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

/*
int main()
{
	testSTLB07();
}
*/