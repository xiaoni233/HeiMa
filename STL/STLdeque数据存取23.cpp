
#include<iostream>
using namespace std;

#include<deque>


void printDeque05(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}


void testSTL23()
{
	deque<int>d;//Ĭ�Ϲ��� �޲ι���
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//ͨ��[]Ԫ�ط���Ԫ��
	//300 200 100 10 20 30
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	//ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;

}



//int main()
//{
//	testSTL23();
//	system("pause");
//}