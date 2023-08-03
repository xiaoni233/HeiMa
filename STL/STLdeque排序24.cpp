
#include<iostream>
using namespace std;
#include<algorithm>//标准算法头文件
#include<deque>


void printDeque06(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const后容器中的数据不可修改了
		cout << *it << " ";
	}
	cout << endl;
}


void testSTL24()
{
	deque<int>d;//默认构造 无参构造
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//300 200 100 10 20 30
	cout << "升序前" << endl;
	printDeque06(d);
	//排序
	//对于支持随机访问的迭代器的容器，都可以sort算法直接对其进行排序
	//vector容器也可以进行sort排序
	sort(d.begin(),d.end());//升序
	cout << "升序后" << endl;
	printDeque06(d);
}



int main()
{
	testSTL24();
	system("pause");
}