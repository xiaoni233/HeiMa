
#include<iostream>
using namespace std;

#include<list>


//list���� ���ݴ�ȡ
void testSTL33()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0]��������[]����list�����е�Ԫ��
	//L1.at(0) ��������at����list�����е�Ԫ��

	//ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ��֧���������

	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ:" << L1.back() << endl;

	//��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = L1.begin();
	//it = it + 1;//��֧���������
	it++;//֧��˫��
	it--;


}



