#include<iostream>
using namespace std;


int main() {

	// 卡片
	char cardType = 'n', temp;
	int cost, originalTotal = 0, discountTotal = 0;
	
	// A = MRT, B = BUS
	for (int i = 0; i < 5; i++) {	
		cin >> cardType >> cost;
		if( i == 0)	temp = cardType;
		
		originalTotal += cost; //先把原始金額加入
			
		// 如果搭MRT(A)
		if (cardType == 'A' && cardType != temp)	// 如果和上一輪不同 就-8元 
			discountTotal += (cost * 0.8) - 8;
		else if (cardType == 'A' )
			discountTotal += cost * 0.8;

		//如果搭BUS(B)
		else if (cardType == 'B' && cardType != temp) // 如果和上一輪不同 就-8元
			discountTotal += cost - 8;
		else if (cardType == 'B')
			discountTotal += cost;

		cout << originalTotal << " " << discountTotal << endl;
		temp = cardType;


	}

	system("pause");
	return 0;
}
