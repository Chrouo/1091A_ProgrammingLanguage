#include<iostream>
using namespace std;

int main(){
	
	int num, high;
	cin>>num>>high;
	
	if(num==1){
		for(int i=0; i<high; i++){
			for(int j=0; j<high; j++){
				if(i>=j) cout<<"*"; //00, 10, 11
				else cout<<"-";
			}
			cout<<endl;
		}
	}
	else if(num==2){
		for(int i=0; i<high; i++){
			for(int j=0; j<high; j++){
				if(i<high-j) cout<<"*";
				else cout<<"-";
			}
			cout<<endl;
		}
	}
	else if(num==3){
		for(int i=0; i<high; i++){
			for(int j=0; j<high; j++){
				if(i+1>=high-j) cout<<"*";
				else cout<<"-";
			}
			cout<<endl;
		}
	}
	else if(num==4){
		for(int i=0; i<high; i++){
			for(int j=0; j<high; j++){
				if(i<=j) cout<<"*";
				else cout<<"-";
			}
			cout<<endl;
		}
	}
	
}
