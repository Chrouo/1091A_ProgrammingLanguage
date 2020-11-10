#include<iostream>
using namespace std;

int main(){
	
	int a, b;
	cin>>a>>b;
	
	int temp = a;
	if(a>b){
		a=b;
		b=temp;
	}
	
	if(a%2==0)
		a++;
	
	int total = 0;
	while(a<b){
		total +=a;
		a+=2;
	}
	cout<<total;
}
