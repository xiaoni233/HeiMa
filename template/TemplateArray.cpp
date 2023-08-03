#include<iostream>
using namespace std;

//ʵ��һ��ͨ�õĶ���������ĺ���
//����Ӵ�С
//�㷨ѡ��
//���� char ���� int����

//����ģ��
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


//�����㷨
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)//�϶����ֵ�±�
	{
		int max = i;
		for (int j = i + 1;  j < len; j++)
		{   
			//�϶������ֵ�ȱ�����������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}

}


template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";	
	}
	cout << endl;
}

void test03()
{
	//����char ����
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

}

void test04()
{    
	//����int����
	int intArr[] = { 7,8,9,6,7,5,1,3 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);

}


/*int main()
{
	test04();
}*/