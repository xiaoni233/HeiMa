#include<iostream>
using namespace std;

//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//3.����ģ����Է�������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//��Ȼ�ṩ�˺���ģ��Ͳ�Ҫ����ͨ���������׳���2����

void myPrint(int a, int b)//ֻ��������������ǵ��ú���
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "���ص�ģ��" << endl;
}

void test06()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	char d = 'd';

	//myPrint(a, b);

	//2.����ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	//�������ģ��������õ�ƥ�䣬�������ȵ��ú���ģ��
	myPrint(c, d);


}
/*
int main()
{
	test06();
}*/