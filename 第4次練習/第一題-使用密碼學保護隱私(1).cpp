#include<iostream>
using namespace std;

int main(){
	
	int num;
	cin>>num;
	
	int a=num/1000 +6, b=num/100%10 +6, c=num/10%10 +6, d=num%10 +6;
	
	//abcd > cdab
	cout<<(c%10)*1000+(d%10)*100+(a%10)*10+(b%10);
	
	
} 
