#include<iostream>
using namespace std;
#include<string>

void testSTL10()
{
	string str = "hello";
    
	//����
	str.insert(1, "111");

	//h111ello
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);//����λ�ã�ɾ�����ٸ�
	cout << "str = " << str << endl;
}

//
//int main()
//{
//	testSTL10();
//}