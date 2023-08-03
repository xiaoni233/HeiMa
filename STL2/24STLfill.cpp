#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

class MyPrint5
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};

void testSTLB24()
{
	vector<int>v1;
	v1.resize(10);
	
	//ºóÆÚÖØĞ´Ìî³ä
	fill(v1.begin(), v1.end(), 100);
	
	for_each(v1.begin(), v1.end(), MyPrint5());

	return;
}
/*
int main()
{
	testSTLB24();
	return 0;
}
*/
