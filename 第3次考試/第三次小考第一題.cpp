#include<iostream>
using namespace std;

int main(){
	
	int mon;
	cin>>mon;
	if(mon>=1 && mon<=12){
		if(mon==2) cout<<"28"; 
		else if(mon<=7){
			if(mon%2==1) cout<<"31";
			else cout<<"30";
		}
		else if(mon){
			if(mon%2==1) cout<<"30";
			else cout<<"31";
		}
	}
	else cout<<"Error"; 
	
}
