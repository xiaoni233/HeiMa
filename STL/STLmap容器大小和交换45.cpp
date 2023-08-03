#include<iostream>
using namespace std;
#include<map>

void printMap02(map<int, int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "value = " << it->second << endl;
	}
	cout << endl;
}


void testSTL45()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(1, 10));

	if (m.empty())
	{
		cout << "m为空" << endl;

	}
	else
	{
		cout << "m不为空" << endl;
	}

}


void testSTL4502()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "交换前" << endl;
	printMap02(m);
	printMap02(m2);

	m.swap(m2);
	cout << "交换后" << endl;
	printMap02(m);
	printMap02(m2);

}


