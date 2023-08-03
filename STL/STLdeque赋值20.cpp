#include<iostream>
using namespace std;

#include<deque>

//deque���캯��
void printDeque02(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}


//��vectorһ��
void testSTL20()
{
	deque<int>d1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque02(d1);

	//operator=
	deque<int>d2;
	d2 = d1;
	printDeque02(d2);

	//assign��ֵ
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());

	deque<int>d4;
	d4.assign(10, 100);
	printDeque02(d4);

}

//int main()
//{
//	testSTL20();
//	system("pause");
//}