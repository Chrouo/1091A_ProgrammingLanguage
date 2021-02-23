#include<iostream>
using namespace std;

// 全壘打，球場清空，幾人+幾分 
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
		if(M == -1) out++; //三振 
		
		//打出去	
		else{
		
			//全壘打 	
			if(M == 4) { 
				baseBag[0]+=Clear(baseBag);
				continue;
			}	
			//如果跑壘上有人		
			for(int i=3; i>=1; i--){
				if( baseBag[i] != 0 ){
					baseBag[i]--;					
					(i+M<4) ? baseBag[i+M]++ : baseBag[0]++;;									
				}
			}			
			baseBag[M]++; //上壘 
		}		
				
		if(out == 3) break; //三出局 
	}
	cout<<"Point: "<<baseBag[0];
	
}
