#include<iostream>
using namespace std;
#include<string>

/*
string();//���ַ���������string str��
string(const char* str) �ַ���s��ʼ��
string(const string& str); string�����ʼ����һ������
stirng(int n,char c); n���ַ� 5��a
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