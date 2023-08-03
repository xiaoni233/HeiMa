#include"MyArray.hpp"

void printIntArray(MyArray <int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test016()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
    }
	cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	
	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ:" << endl;
	printIntArray(arr2);
	
	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}

//�����Զ�����������
class Person016
{
public:
	Person016();
	Person016(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}


	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person016>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name <<"\t "<<"����" << arr[i].m_Age << endl;
	}
}


void test0162()
{
	MyArray<Person016>arr(10);
	Person016 p1("�����", 999);
	Person016 p2("����", 20);
	Person016 p3("ţ��", 20);
	Person016 p4("����", 20);
	Person016 p5("������", 20);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);
	
	//��ӡ�����ʹ�С
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;

}


int main()
{
	test0162();
	system("pause");
}