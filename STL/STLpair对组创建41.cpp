#include<iostream>
using namespace std;

#include<string>


//pair的创建
void testSTL41()
{
	//1.
	pair<string, int>p("Tom", 20);
	cout << "姓名" << p.first << "年龄" << p.second << endl;

	//2.
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "姓名" << p2.first << "年龄" << p2.second << endl;

}


int main()
{

	testSTL41();

	system("pause");
}