#include<iostream>
using namespace std;

// ���S���A�y���M�šA�X�H+�X�� 
int Clear(int baseBag[3]){
	
	int count = 0;
	for(int i=1; i<4; i++){
		if(baseBag[i] != 0) count++;
		baseBag[i] = 0; 
	}
	return count +1;
}

int main(){
	
	int baseBag[4] = {}, out = 0, M = -1, Point = 0;

	while(1<=M && M<=4 || -1 == M ){
		
		cin>>M;		
		if(M == -1) out++; //�T�� 
		
		//���X�h	
		else{
		
			//���S�� 	
			if(M == 4) { 
				baseBag[0]+=Clear(baseBag);
				continue;
			}	
			//�p�G�]�S�W���H		
			for(int i=3; i>=1; i--){
				if( baseBag[i] != 0 ){
					baseBag[i]--;					
					(i+M<4) ? baseBag[i+M]++ : baseBag[0]++;;									
				}
			}			
			baseBag[M]++; //�W�S 
		}		
				
		if(out == 3) break; //�T�X�� 
	}
	cout<<"Point: "<<baseBag[0];
	
}
