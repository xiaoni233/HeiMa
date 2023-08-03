#include<iostream>
using namespace std;
#include<map>

void printMap04(map<int, int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "value = " << it->second << endl;
	}
	cout << endl;
}


void testSTL47()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 30));
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "���ҵ���Ԫ��key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�key��Ԫ�أ�countͳ�ƶ��ԣ����Ҫô��0Ҫô1
	//multimap��count���ܴ���1

	int num = m.count(3);
	cout << "num = " << num << endl;

}


int main()
{

	testSTL47();
	system("pause");
}