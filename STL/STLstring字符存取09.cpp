#include<iostream>
using namespace std;
#include<string>



void testSTL09()
{


	string str = "hello";
	cout << "str = " << str << endl;

	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";

	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';
	//xello
	cout << "str = "<< str << endl;

	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

//
//int main()
//{
//	testSTL09();
//}