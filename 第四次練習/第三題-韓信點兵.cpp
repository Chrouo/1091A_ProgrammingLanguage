#include<iostream>
using namespace std;

int main(){
	
	int a,b,c, count=10;
	cin>>a>>b>>c;
	
	while(count<=100){
		
		if(count%3==a && count%5==b && count%7==c){
			cout<<count;
			return 0;
		}
		
		count++;
	}
	cout<<"No answer!!";
	
}
