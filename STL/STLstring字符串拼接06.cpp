#include<iostream>
using namespace std;
#include<string>

//- string& operator+=(const char* str);                   //����+=������
//- string& operator+=(const char c);                         //����+=������
//- string& operator+=(const string& str);                //����+=������
//- string& append(const char *s);                               //���ַ���s���ӵ���ǰ�ַ�����β
//- string& append(const char *s, int n);                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//- string& append(const string &s);                           //ͬoperator+=(const string& str)
//- string& append(const string &s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β


void testSTL06()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1 = " << str1 << endl;
	str1 += ':';
	cout << "str1 = " << str1 << endl;
	string str2 = "LOL DNF";
	
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;

	//str3.append(str2);
	//cout << "str3 = " << str3 << endl;

	str3.append(str2, 4, 3);//�ַ����鿪ͷ��0
	cout << "str3 = " << str3 << endl;

}

/*
int main()
{
	testSTL06();
}*/