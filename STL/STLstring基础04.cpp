#include<iostream>
using namespace std;
#include<string>

/*
string();//空字符串创建，string str；
string(const char* str) 字符串s初始化
string(const string& str); string对象初始化另一个对象
stirng(int n,char c); n个字符 5个a
*/


void testSTL04()
{
	string s1;
	const char * str = "HelloWorld";
	string s2(str);
	cout << "s2 = " << s2 << endl;
	string s3(s2);
	cout << "s3 = " << s3 << endl;
	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}
//int main()
//{
//
//	testSTL04();
//
//}