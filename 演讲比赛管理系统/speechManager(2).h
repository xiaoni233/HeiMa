#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单功能
	void show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器
	void initSpeech();

	//创建12名选手
	void createSpeaker();
	
	//开始比赛 整个流程
	void startSpeech();
	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第二轮
	vector<int>v2;

	//前三名
	vector<int>vVictory;

	//存放编号以及对应队友选手容器
	map<int, Speaker>m_Speaker;

	//比赛轮数
	int m_Index;
};