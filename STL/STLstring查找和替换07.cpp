#include<iostream>

using namespace std;
#include<string>

//�ַ������Һ��滻

//1.����

void testSTL07()
{
	string str1 = "abcdefgde";

	int pos=str1.find("de");

	//cout << "pos =" << pos << endl;//0123 ����3
	//int posdf = str1.find("df");
	//cout << "posdf = " << posdf << endl;//δ�ҵ�����-1��

	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos << endl;
	}

	//rfind

    //rind�Ǵ��������ң�find�������Ҳ���
	pos= str1.rfind("de");
	cout<<"pos = "<<pos<<endl;

	
}

//2.�滻
void testSTLtest0702()
{
	string str1 = "abcdefg";
	//��һ��λ����3���ַ��滻Ϊ��1111��
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

/*
int main()
{
	//testSTL07();
	testSTLtest0702();
}*/


