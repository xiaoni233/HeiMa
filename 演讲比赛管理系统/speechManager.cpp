#include"speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器
	this->initSpeech();
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

//析构函数
SpeechManager::~SpeechManager()
{

}