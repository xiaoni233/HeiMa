
#include<iostream>
using namespace std;
#include<algorithm>//��׼�㷨ͷ�ļ�
#include<deque>


void printDeque06(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}


void testSTL24()
{
	deque<int>d;//Ĭ�Ϲ��� �޲ι���
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//300 200 100 10 20 30
	cout << "����ǰ" << endl;
	printDeque06(d);
	//����
	//����֧��������ʵĵ�������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ���Խ���sort����
	sort(d.begin(),d.end());//����
	cout << "�����" << endl;
	printDeque06(d);
}



int main()
{
	testSTL24();
	system("pause");
}