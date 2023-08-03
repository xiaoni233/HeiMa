#include<iostream>
using namespace std;

//实现一个通用的对数组排序的函数
//规则从大到小
//算法选择
//测试 char 数组 int数组

//交换模板
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


//排序算法
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)//认定最大值下标
	{
		int max = i;
		for (int j = i + 1;  j < len; j++)
		{   
			//认定的最大值比遍历出来的数值要小，说明j下标的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i元素
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
	//测试char 数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

}

void test04()
{    
	//测试int数组
	int intArr[] = { 7,8,9,6,7,5,1,3 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);

}


/*int main()
{
	test04();
}*/