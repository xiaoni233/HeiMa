#include<iostream>
using namespace std;
#include<string>

void testSTL11()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

}

//实用操作
void testSTL1102()
{
	string email = "zhangsan@sina.com";

    //从邮件地址中获取用户名信息
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