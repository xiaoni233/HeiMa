#include<iostream>
using namespace std;
#include<string>
#include<map>
#include<vector>
#include<ctime>
/*
��˾����10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����Ĳ��Ź���
Ա����Ϣ������ ������� ���ŷ�Ϊ �߻� ���� �з�
�����10��Ա�����䲿�ź͹���
ͨ��mutimap������Ϣ�Ĳ��� key�����ű�ţ�value ��Ա����
�ֲ�����ʾԱ����Ϣ
*/
#define CEHUA 0
#define MEISHU 1
#define YANFA 2


class Worker
{
public:
	string m_Name;
	int m_Salary;

};

void createWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 1000 + 10000;//10000-19999
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>&v, multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;//0 1 2

		//��Ա�����뵽������
		//key
		m.insert(make_pair(deptId, *it));

	}

}

void showWorkerByGroup(multimap<int, Worker>&m)
{
	//0 A B C 1D E 2F G
	cout << " �߻����ţ� " << endl;
	multimap<int,Worker>::iterator pos =m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;

	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;

	}
	cout << "-------------------" << endl;
	cout << "�������ţ� " << endl;
    pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;

	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;

	}

	cout << "-------------------" << endl;
	cout << "�з����ţ� " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;

	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;

	}
}

/*int  main()
{
	srand((unsigned int)time(NULL));
	//1.����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//2.Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);


	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
		//cout << " ���� ��" << it->m_Name << "  ���� : " << it->m_Salary << endl;
	//}

	//3.������ʾԱ��
	showWorkerByGroup(mWorker);

}*/