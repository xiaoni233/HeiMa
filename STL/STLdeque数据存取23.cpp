
#include<iostream>
using namespace std;

#include<deque>


void printDeque05(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const后容器中的数据不可修改了
		cout << *it << " ";
	}
	cout << endl;
}


void testSTL23()
{
	deque<int>d;//默认构造 无参构造
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过[]元素访问元素
	//300 200 100 10 20 30
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	//通过at方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d.front() << endl;
	cout << "最后一个元素为：" << d.back() << endl;

}



//int main()
//{
//	testSTL23();
//	system("pause");
//}