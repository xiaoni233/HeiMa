#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint6
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};


//���ü����㷨
void testSTLB25()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//������Ϊ����������С����
	vTarget.resize(min(v1.size(), v2.size()));

	vector<int>::iterator itEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//itEnd���˼Ҹ���׼ȷ�Ľ�������Ԫ�صĵ�������v��end�������Ľ��������������ж����0000
	for_each(vTarget.begin(), itEnd, MyPrint6());
}

/*
int main()
{
	testSTLB25();
}
*/