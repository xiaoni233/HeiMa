#include<iostream>
using namespace std;
#include<vector>




//vector��������
void printVectorSTL17(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//1.����ʹ��
void testSTL17()
{
	cout << "����ǰ��" << endl;
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVectorSTL17(v1);

	vector<int>v2;
	for (int i = 10; i >0; i--)
	{
		v2.push_back(i);
	}
	printVectorSTL17(v2);

	cout << "������" << endl;
	v1.swap(v2);
	printVectorSTL17(v1);
	printVectorSTL17(v2);

}


//2.ʵ����;
//����swap�����ڴ�ռ�
void testSTL1702()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	v.resize(3);//����ָ����С
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

    //����swap�����ڴ� 
	vector<int>(v).swap(v);//��������ִ�������д����ջؿռ�
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;



}
//
//int main()
//{
//	testSTL1702();
//	system("pause");
//}