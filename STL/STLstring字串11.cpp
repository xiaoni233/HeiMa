#include<iostream>
using namespace std;
#include<string>

void testSTL11()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

}

//ʵ�ò���
void testSTL1102()
{
	string email = "zhangsan@sina.com";

    //���ʼ���ַ�л�ȡ�û�����Ϣ
	int pos=email.find("@");
	cout << pos << endl;
	string usrName = email.substr(0, pos);
}

//int main()
//{
//	//testSTL11();
//	testSTL1102();
//	system("pause");
//}
//