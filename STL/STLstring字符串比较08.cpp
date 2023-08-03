#include<iostream>
using namespace std;

//字符串比较,主要比相不相等
void testSTL08()
{
	
	//逐个比较ASCII
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1等于str2" << endl;

	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1大于str2" << endl;
	}
	else
	{
		cout << "str1小于str2" << endl;
	}

}
int main()
{
	testSTL08();
}