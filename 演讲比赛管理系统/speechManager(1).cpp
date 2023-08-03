#include"speechManager.h"


//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器
	this->initSpeech();
	//创建12个选手
	this->createSpeaker();
}

//菜单功能
void SpeechManager::show_Menu()
{
	cout << "--------------------------------" << endl;
	cout << "------- 欢迎参加演讲比赛 -------" << endl;
	cout << "------- 1.开始演讲比赛 ---------" << endl;
	cout << "------- 2.查看往届记录 ---------" << endl;
	cout << "------- 3.清空比赛记录 ---------" << endl;
	cout << "------- 0.退出比赛程序 ---------" << endl;
	cout << "--------------------------------" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::exitSystem() 
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//初始化比赛轮数
	this->m_Index = 1;
}
//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;

		}

		//第一轮选手编号和赋值
		this->v1.push_back(i + 10001);

		//编号和选手存到map
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}

}

//开始比赛
void SpeechManager::startSpeech()
{
	//第一轮

	//1.抽签
	this->speechDraw();
	//2.比赛
	this->speechContest();
	//3.显示晋级成果

	//第二轮开始比赛

	//1.抽签

	//2.比赛

	//3.显示最终结果

	//4.保存分数在文件中

}

void SpeechManager::speechDraw()
{
	cout << "第 " << this->m_Index << " 轮选手正在抽签 " << endl;
	cout << "--------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;

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
		//第二轮比赛
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

//比赛
void SpeechManager::speechContest()
{
	cout << "----- 第 " << this->m_Index << " 轮比赛正式开始 ------" << endl;


	vector<int>v_Src;//比赛选手容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//遍历所有选手,进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			//600-1000
			double score = (rand() % 401 + 600) / 10.f;//rand()%401 ,0-400
			//cout << score << " ";
			d.push_back(score);
		}
		cout << endl;
		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_front();//去除最高分
		d.pop_back();//去除最低分
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//平均分

		//打印平均分
		cout << "编号：" << *it << " 姓名 " << this->m_Speaker[*it].m_Name << " 平均分 ：" << avg;
		//将平均分放入map容器中
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

	}
	cout << endl;
}

//析构函数
SpeechManager::~SpeechManager()
{
	
}