#include<iostream>
using namespace std;

//�ַ����Ƚ�,��Ҫ���಻���
void testSTL08()
{
	
	//����Ƚ�ASCII
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1����str2" << endl;

	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1����str2" << endl;
	}
	else
	{
		cout << "str1С��str2" << endl;
	}

}
int main()
{
	testSTL08();
}