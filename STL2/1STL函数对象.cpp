#include<iostream>
using namespace std;
#include<string>
/*
对象（仿函数）
函数对象在使用时，可以像普通函数那样调用，可以有返回值
函数对象超出普通函数的概念，可以有自己的状态
函数对象可以作为参数传递

*/
//1.函数对象在使用时，可以像普通函数那样调用，可以有返回值

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//2.函数对象超出普通函数的概念，可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;//内部自己的状态
};

void STLFun01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;

}

void STLFun02()
{
	MyPrint myPrint;
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");
	cout << "myPrint count: " << myPrint.count << endl;;

}

//3.函数对象可以作为参数传递
void doPrint(MyPrint&mp, string test)
{
	mp(test);
}

void STLFun03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");

}
/*
int main()
{

	//STLFun01();
	STLFun03();
}*/