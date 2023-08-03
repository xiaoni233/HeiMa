#include<iostream>
using namespace std;
#include<string>

void testSTL10()
{
	string str = "hello";
    
	//插入
	str.insert(1, "111");

	//h111ello
	cout << "str = " << str << endl;

	//删除
	str.erase(1, 3);//数组位置，删除多少个
	cout << "str = " << str << endl;
}

//
//int main()
//{
//	testSTL10();
//}