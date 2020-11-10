#include<iostream>
using namespace std;

int main(){
	
	int num;
	cin>>num;
	
	
	//5+6=11, 7+6=13, 1+4=5, 3+4=7
	//10, 7+6=13, 7+6+4=7+10 
	int a=num/1000 +4, b=num/100%10 +4, c=num/10%10 +4, d=num%10 +4;
	
	//abcd > cdab
	cout<<(c%10)*1000+(d%10)*100+(a%10)*10+(b%10);
	
	
} 
