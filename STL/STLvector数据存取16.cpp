#include<iostream>
using namespace std;
#include<vector>

/*
//- push_back(ele);                                         //β������Ԫ��ele
//- pop_back();                                                //ɾ�����һ��Ԫ��
//- insert(const_iterator pos, ele);        //������ָ��λ��pos����Ԫ��ele
//- insert(const_iterator pos, int count,ele);//������ָ��λ��pos����count��Ԫ��ele
//- erase(const_iterator pos);                     //ɾ��������ָ���Ԫ��
//- erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
//- clear();                                                        //ɾ������������Ԫ��
//*/

void printVectorSTL16(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void testSTL16()
{
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//����[]��ʽ������Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	
	//��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
    //��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;

}

int  main()
{
	testSTL16();
	system("pause");

}