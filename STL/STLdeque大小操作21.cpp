#include<iostream>
using namespace std;

#include<deque>

//deque���캯��
void printDeque03(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}


//��vector��һ������û��capacity�ĸ����Ϊ�����п���
void testSTL21()
{
	deque<int>d1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque03(d1);

	//�Ƿ�Ϊ��
	if (d1.empty())
	{
		cout << "d1 is empty" << endl;
	}
	else
	{
		cout << "d1 is not empty" << endl;
		//size
		cout << "d1��С��" << d1.size() << endl;
	}


	//����ָ����С
	//d1.resize(15);
	//d1.resize(15, 1);
	d1.resize(5);
	printDeque03(d1);

	

}

