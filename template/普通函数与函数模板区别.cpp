#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ������
//1.��ͨ�������÷�����ʽ����ת��
//2.����ģ�����Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ������ʾָ�����ͣ����Է�����ʽ����ת��


//��ͨ����
int myAdd(int a, int b)
{
	return a + b;

}


//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test05()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd(a, c) << endl;

	//�Զ������Ƶ�
	//error cout << myAdd02(a, c) << endl;
	//��ʾָ������
	cout << myAdd02<int>(a, c) << endl;
}

/*int main()
{

	test05();
}*/