#include<iostream>
using namespace std;
#include<string>



void testSTL09()
{


	string str = "hello";
	cout << "str = " << str << endl;

	//1.通过[]访问当个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";

	}
	cout << endl;

	//修改单个字符
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