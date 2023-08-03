#pragma once
#include<iostream>
#include<string>
using namespace std;
//�Լ���ͨ�õ�������
template<class T>
class MyArray
{
private:
	T *pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//��������

	int m_Size;//�����С

public:
	//�вι��� ���� ����
	MyArray(int capacity)
	{
		//cout << "myArray�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
		
	}
	//�������캯��
	MyArray(const MyArray& arr)
	{
		//cout << "myArray��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//ǳ����this->pAddress = arr.pAddress;
		
		//���
		this->pAddress=new T[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

   	//operator=��ֹǳ����  a=b=c;
	MyArray& operator=(const MyArray& arr)
	{

		//cout << "myArray��Operator=" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_Back(const T& val)
	{
     //�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;//������
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}

	//βɾ��
	void Pop_Back()
	{
      //���û����ʲ�������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;

	}

	//ͨ���±귽ʽ���������е�Ԫ�� arr[0]=100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "myArray��������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}



};