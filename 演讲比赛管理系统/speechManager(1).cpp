#include"speechManager.h"


//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������
	this->initSpeech();
	//����12��ѡ��
	this->createSpeaker();
}

//�˵�����
void SpeechManager::show_Menu()
{
	cout << "--------------------------------" << endl;
	cout << "------- ��ӭ�μ��ݽ����� -------" << endl;
	cout << "------- 1.��ʼ�ݽ����� ---------" << endl;
	cout << "------- 2.�鿴�����¼ ---------" << endl;
	cout << "------- 3.��ձ�����¼ ---------" << endl;
	cout << "------- 0.�˳��������� ---------" << endl;
	cout << "--------------------------------" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem() 
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ����������
	this->m_Index = 1;
}
//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;

		}

		//��һ��ѡ�ֱ�ź͸�ֵ
		this->v1.push_back(i + 10001);

		//��ź�ѡ�ִ浽map
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}

}

//��ʼ����
void SpeechManager::startSpeech()
{
	//��һ��

	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�����ɹ�

	//�ڶ��ֿ�ʼ����

	//1.��ǩ

	//2.����

	//3.��ʾ���ս��

	//4.����������ļ���

}

void SpeechManager::speechDraw()
{
	cout << "�� " << this->m_Index << " ��ѡ�����ڳ�ǩ " << endl;
	cout << "--------------" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;

	if (this->m_Index == 1)
	{
		
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "---------------" << endl;
	system("pause");
	cout << endl;
}

//����
void SpeechManager::speechContest()
{
	cout << "----- �� " << this->m_Index << " �ֱ�����ʽ��ʼ ------" << endl;


	vector<int>v_Src;//����ѡ������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//��������ѡ��,���б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			//600-1000
			double score = (rand() % 401 + 600) / 10.f;//rand()%401 ,0-400
			//cout << score << " ";
			d.push_back(score);
		}
		cout << endl;
		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//ƽ����

		//��ӡƽ����
		cout << "��ţ�" << *it << " ���� " << this->m_Speaker[*it].m_Name << " ƽ���� ��" << avg;
		//��ƽ���ַ���map������
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

	}
	cout << endl;
}

//��������
SpeechManager::~SpeechManager()
{
	
}