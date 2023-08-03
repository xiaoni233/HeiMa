#include<iostream>
using namespace std;

#include<deque>

//deque构造函数
void printDeque03(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const后容器中的数据不可修改了
		cout << *it << " ";
	}
	cout << endl;
}


//和vector不一样，他没有capacity的概念，因为他的中控器
void testSTL21()
{
	deque<int>d1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque03(d1);

	//是否为空
	if (d1.empty())
	{
		cout << "d1 is empty" << endl;
	}
	else
	{
		cout << "d1 is not empty" << endl;
		//size
		cout << "d1大小：" << d1.size() << endl;
	}


	//重新指定大小
	//d1.resize(15);
	//d1.resize(15, 1);
	d1.resize(5);
	printDeque03(d1);

	

}

