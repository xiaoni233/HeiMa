
#include<iostream>
using namespace std;

#include<deque>

//deque���캯��
void printDeque04(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//const�������е����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}


void testSTL22()
{
	deque<int>d1;//Ĭ�Ϲ��� �޲ι���
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	printDeque04(d1);

	//βɾ
	d1.pop_back();

	//200 100 10
	printDeque04(d1);

	//ͷɾ
	d1.pop_front();
	printDeque04(d1);

}

void testSTL2202()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);
	//ͷ��
	d1.push_front(100);
	d1.push_front(200);
	printDeque04(d1);

	//insert����
	d1.insert(d1.begin(), 1000);
	//1000 200 100 10 20
	printDeque04(d1);

	d1.insert(d1.begin(), 2, 10000);
	//10000 10000 1000 200 100 10 20
	printDeque04(d1);

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	//1 2 3 10000 10000 1000 200 100 10 20
	printDeque04(d1);

}


void testSTL2203()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);
	//ͷ��
	d1.push_front(100);
	d1.push_front(200);
	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	//200 10 20
	//printDeque04(d1);

	//��������ɾ��
	//d1.erase(d1.begin(), d1.end());
	//���
	d1.clear();
	printDeque04(d1);

}



int main()
{
	testSTL2203();
	system("pause");
}