#include<iostream>
using namespace std;
#include<string>

//父类是模板，子类要指定父类类型
//类模板与继承
template<class T>
class Base
{
	T m;
};

//class Son :public Base//错误，必须知道父类中的T类型，才能继承给父类
class Son:public Base<int>
{


};

void test012()
{
	Son s1;
}


//如果想灵活指定父类T类型，子类也需要变模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型：" << typeid(T1).name() << endl;//看类型
		cout << "T2的类型：" << typeid(T2).name() << endl;//看类型
	}
	T1 obj;
};

void test0122()
{
	Son2<int, char>S2;
}

/*
int main()
{
	test0122();
}
*/
