#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint8
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};


//���ü����㷨
void testSTLB27()
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
	//������Ϊ����û�н����������ļ���

	vTarget.resize(max(v1.size(),v2.size()));

	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//itEnd���˼Ҹ���׼ȷ�Ľ�������Ԫ�صĵ�������v.end()�������Ľ��������������ж����0000
	for_each(vTarget.begin(), itEnd, MyPrint8());
	cout << endl;
	cout << "v2 �� v1" << endl;
	itEnd = set_difference( v2.begin(), v2.end(),v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint8());
}

/*
int main()
{
	testSTLB27();
}
*/
