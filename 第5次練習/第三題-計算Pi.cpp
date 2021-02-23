#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int num, b=1;
	cin>>num;
	
	double PI=0;
	for(int i=1; i<=num; i++){
		
		if(i%2==1){
			PI+=4.0/b;
		}
		else{
			PI-=4.0/b;
		}
		b+=2;
		
	} 
	
	cout<<fixed<<setprecision(8)<<PI;
	
}
