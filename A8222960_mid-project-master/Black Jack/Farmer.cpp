#include"Farmer.h"

srand(time(0));

Farmer::Farmer() {

	pokerF[5] = {};
	poker[5] = {};
	total = 0;
	totalPoint = 0;
	page = 0;//計數

	//for (int j = 0; j < 2; j++) {		//遊戲開始，先發給玩家兩張牌
		int randomCard = rand() % 52 + 1;
		setPokerF(page, randomCard);
		page++;
	//}********因為有bug所以初始化發一次就好********
	calculateTotalPoint();
}

void Farmer::calculateTotalPoint() {

	int point=0;

	for (int const &item : pokerF ) {

		if (item != 0) {		//確認手牌存在再繼續執行以下的分數判斷
			if (item % 13 >= 10 || item % 13 == 0)		//將10、J、Q、K都當作10分
				point = 10;
			else if (item % 13 == 1)		//A當作11分
				point = 11;
			else
				point = item % 13;		//剩下的依照牌面數字計算
		}

		totalPoint += point;		//加總
	}

	if (totalPoint > 21) {		//爆牌時若手牌中有A，將A判斷成1分

		for (int const &item : pokerF) {
			if (item == 1 || item == 14 || item == 27 || item == 40)
				totalPoint -= 10;
		}
	}
}

int Farmer::getTotalPonit() {
	return totalPoint;
}

void Farmer::setPokerF(int pokerFIndex, int pokerIndex) {
	pokerF[pokerFIndex] = pokerIndex;
}

void Farmer::PokerA()
{
	if (getTotalPonit() == 21)		//如果2張手牌和=21，直接贏得比賽
		cout << "BlackJack!!!!你贏了!!!!!" << endl;
	else if (getTotalPonit() < 21) {
		int randomCard = rand() % 52 + 1;		//抽一張牌
		setPokerF(page, randomCard);		//抽到的牌給玩家
		calculateTotalPoint();		//計算總點數
		page++;	//計數器加一
	}
	else {
		cout << "你爆了，哈哈" << endl;
		cout << endl;

		for (int i = 0, i < 5; i++) {//清空玩家手上的牌
			setPokerF(i, 0);
		}

	}
	
	int getPokerF(index) {
		return getPokerF(index);
	}