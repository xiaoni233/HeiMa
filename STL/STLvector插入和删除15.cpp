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

void printVectorSTL15(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void testSTL15()
{
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 5; i++)
	{
		v1.push_back((i+1)*10);
	}
	printVectorSTL15(v1);

	//βɾ
	v1.pop_back();
	printVectorSTL15(v1);

	//���� ��һ�������ǵ�����
	v1.insert(v1.begin(), 100);
	printVectorSTL15(v1);

	//���ذ汾
	v1.insert(v1.begin(), 2, 1000);
	printVectorSTL15(v1);

	//ɾ��  ����Ҳ�ǵ�����
	v1.erase(v1.begin());
	printVectorSTL15(v1);

	//���
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVectorSTL15(v1);


}

//int  main()
//{
//	testSTL15();
//	system("pause");
//
//}