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

void printVectorSTL16(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector赋值
void testSTL16()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//利用[]方式数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	
	//获取第一个元素
	cout << "第一个元素为：" << v1.front() << endl;
    //获取最后一个元素
	cout << "最后一个元素为：" << v1.back() << endl;

}

int  main()
{
	testSTL16();
	system("pause");

}