#pragma once
#include<iostream>
using namespace std;


class Speaker
{
	//一般属性不能public，用get 和setter，这里是教程图方便
public:
	string m_Name;//姓名
	double m_Score[2];//两轮成绩

};