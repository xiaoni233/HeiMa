#include<iostream>
using namespace std;

#include<string>


//pair�Ĵ���
void testSTL41()
{
	//1.
	pair<string, int>p("Tom", 20);
	cout << "����" << p.first << "����" << p.second << endl;

	//2.
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "����" << p2.first << "����" << p2.second << endl;

}


int main()
{

	testSTL41();

	system("pause");
}