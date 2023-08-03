#include<iostream>
using namespace std;

#include<deque>

//deque���캯��
void printDeque01(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}

void testSTL19()
{
	deque<int>d1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque01(d1);

	deque<int>d2(d1.begin(), d1.end());
	printDeque01(d2);

	deque<int>d3(10, 100);
	printDeque01(d3);

	deque<int>d4(d3);
	printDeque01(d4);
}

int main()
{
	testSTL19();
	system("pause");
}