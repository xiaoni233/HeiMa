#include<iostream>

using namespace std;
#include<string>

//字符串查找和替换

//1.查找

void testSTL07()
{
	string str1 = "abcdefgde";

	int pos=str1.find("de");

	//cout << "pos =" << pos << endl;//0123 返回3
	//int posdf = str1.find("df");
	//cout << "posdf = " << posdf << endl;//未找到返回-1；

	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，pos = " << pos << endl;
	}

	//rfind

    //rind是从右往左找，find从左往右查找
	pos= str1.rfind("de");
	cout<<"pos = "<<pos<<endl;

	
}

//2.替换
void testSTLtest0702()
{
	string str1 = "abcdefg";
	//从一号位置起3个字符替换为“1111”
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

/*
int main()
{
	//testSTL07();
	testSTLtest0702();
}*/


