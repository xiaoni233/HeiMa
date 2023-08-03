#include<iostream>
using namespace std;
#include<map>

void printMap03(map<int, int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "value = " << it->second << endl;
	}
	cout << endl;
}


void testSTL46()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	

	m.insert(make_pair(2, 20));

	m.insert(map<int, int>::value_type(3, 30));

	m[4] = 30;

	//[]不建议插入，用key找到value

	cout << m[4] << endl;
	printMap03(m);

	//删除
	m.erase(m.begin());
	printMap03(m);
	
	m.erase(3);
	printMap03(m);

	m.erase(m.begin(), m.end());
	printMap03(m);

	m.clear();
	printMap03(m);

}


