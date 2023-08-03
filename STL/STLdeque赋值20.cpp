#include<iostream>
using namespace std;

#include<deque>

//deque构造函数
void printDeque02(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const后容器中的数据不可修改了
		cout << *it << " ";
	}
	cout << endl;
}


//和vector一样
void testSTL20()
{
	deque<int>d1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque02(d1);

	//operator=
	deque<int>d2;
	d2 = d1;
	printDeque02(d2);

	//assign赋值
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());

	deque<int>d4;
	d4.assign(10, 100);
	printDeque02(d4);

}

//int main()
//{
//	testSTL20();
//	system("pause");
//}