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
		cout << "查找到了元素key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复key的元素，count统计而言，结果要么是0要么1
	//multimap的count可能大于1

	int num = m.count(3);
	cout << "num = " << num << endl;

}


int main()
{

	testSTL47();
	system("pause");
}