#include<iostream>
using namespace std;


int main() {

	// �d��
	char cardType = 'n', temp;
	int cost, originalTotal = 0, discountTotal = 0;
	
	// A = MRT, B = BUS
	for (int i = 0; i < 5; i++) {	
		cin >> cardType >> cost;
		if( i == 0)	temp = cardType;
		
		originalTotal += cost; //�����l���B�[�J
			
		// �p�G�fMRT(A)
		if (cardType == 'A' && cardType != temp)	// �p�G�M�W�@�����P �N-8�� 
			discountTotal += (cost * 0.8) - 8;
		else if (cardType == 'A' )
			discountTotal += cost * 0.8;

		//�p�G�fBUS(B)
		else if (cardType == 'B' && cardType != temp) // �p�G�M�W�@�����P �N-8��
			discountTotal += cost - 8;
		else if (cardType == 'B')
			discountTotal += cost;

		cout << originalTotal << " " << discountTotal << endl;
		temp = cardType;


	}

	system("pause");
	return 0;
}
