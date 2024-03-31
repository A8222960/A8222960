#include"Farmer.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	char choose=121;
	Farmer farmer1;
	string Poker[53] = {" ",A,2,3,4,5,6,7,8,9,10.J,Q,K,A,2,3,4,5,6,7,8,9,10.J,Q,K ,A,2,3,4,5,6,7,8,9,10.J,Q,K ,A,2,3,4,5,6,7,8,9,10.J,Q,K };

	cout << "*************21點遊戲******************" << endl;

	while (choose == 121 && page < 5 && getTotalPonit() <= 21) {		//y的ASCII碼為121
		farmer1.PokerA();//發一張牌

		cout << "你手上的牌為:";
		for (int i = 0; i < 5; i++)
			cout << Poker[farmer1.getPokerF(i)] << " ";

		cout << "補牌>>>輸入y ; 不補牌>>>輸入n" << endl;
		cin >> choose;		//再次輸入決定
	}
}