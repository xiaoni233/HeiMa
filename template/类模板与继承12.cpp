#include<iostream>
using namespace std;
#include<string>

//������ģ�壬����Ҫָ����������
//��ģ����̳�
template<class T>
class Base
{
	T m;
};

//class Son :public Base//���󣬱���֪�������е�T���ͣ����ܼ̳и�����
class Son:public Base<int>
{


};

void test012()
{
	Son s1;
}


//��������ָ������T���ͣ�����Ҳ��Ҫ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1�����ͣ�" << typeid(T1).name() << endl;//������
		cout << "T2�����ͣ�" << typeid(T2).name() << endl;//������
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
