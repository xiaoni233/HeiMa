#include<iostream>
using namespace std;
#include<string>
/*
���󣨷º�����
����������ʹ��ʱ����������ͨ�����������ã������з���ֵ
�������󳬳���ͨ�����ĸ���������Լ���״̬
�������������Ϊ��������

*/
//1.����������ʹ��ʱ����������ͨ�����������ã������з���ֵ

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//2.�������󳬳���ͨ�����ĸ���������Լ���״̬
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
	int count;//�ڲ��Լ���״̬
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

//3.�������������Ϊ��������
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