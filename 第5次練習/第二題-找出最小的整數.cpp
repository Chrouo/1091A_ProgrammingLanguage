#include<iostream>
using namespace std;


int main(){
	
	int num,min, a;
	cin>>num;
	
	
	for(int i=0; i<num-1; i++){
		if(i==0) cin>>min;
		
		cin>>a;
		if(a<min) min=a;
	}
	cout<<min;
}
