#include<iostream>
using namespace std;
#include<vector>

/*
//- push_back(ele);                                         //尾部插入元素ele
//- pop_back();                                                //删除最后一个元素
//- insert(const_iterator pos, ele);        //迭代器指向位置pos插入元素ele
//- insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele
//- erase(const_iterator pos);                     //删除迭代器指向的元素
//- erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
//- clear();                                                        //删除容器中所有元素
//*/

void printVectorSTL15(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector赋值
void testSTL15()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 5; i++)
	{
		v1.push_back((i+1)*10);
	}
	printVectorSTL15(v1);

	//尾删
	v1.pop_back();
	printVectorSTL15(v1);

	//插入 第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	printVectorSTL15(v1);

	//重载版本
	v1.insert(v1.begin(), 2, 1000);
	printVectorSTL15(v1);

	//删除  参数也是迭代器
	v1.erase(v1.begin());
	printVectorSTL15(v1);

	//清空
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVectorSTL15(v1);


}

//int  main()
//{
//	testSTL15();
//	system("pause");
//
//}