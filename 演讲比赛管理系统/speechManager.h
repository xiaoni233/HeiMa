#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�����
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������
	void initSpeech();

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	//�ڶ���
	vector<int>v2;

	//ǰ����
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;

	//��������
	int m_Index;
};