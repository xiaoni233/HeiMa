#include<iostream>
using namespace std;
#include<functional>//�ڽ���������ͷ�ļ�

//�ڽ��������������º���

//negate һԪ�º��� ȡ���º���
void testSTLB04()
{
	negate<int>n;
	cout << n(50) << endl;

}

//plus ��Ԫ�º��� �ӷ�
void testSTLB0402()
{
	plus<int>p;
	multiplies<int>s;
	minus<int>m;

	cout << p(10, 20) << endl;
}
/*
int main()
{
	testSTLB04();
	testSTLB0402();
}*/