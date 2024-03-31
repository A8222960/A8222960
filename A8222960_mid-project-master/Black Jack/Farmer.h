#ifndef FARMER_H
#define FARMER_H
#include"Farmer.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

class Farmer {
public:
	Farmer();
	void calculateTotalPoint();		//璸衡產も翴计
	int getTotalPonit();
	void setPokerF(int pokerFIndex,int pokerIndex);
	void PokerA();//干礟籔﹚秤璽
	int getPokerF(int index);
private:
	int pokerF[5];		//產も礟
	int poker[5];		//缠產も礟
	int totalPoint;		//纗璸衡產も礟翴计
	int total;		//缠產も礟翴计
	int page;//も礟眎计
};
#endif// !FARMER_H