#include<iostream>
using namespace std;

int main(){
	
	int min, max;
	cin>>min>>max;
	
	int abc;
	int i=0;
	while(min<max){
		int a = min / 100;
		int b = min / 10 % 10;
		int c = min % 10;
		if(a*a*a+b*b*b+c*c*c == min){
			cout<<min<<endl;
			i++;
		}
		min++;
		
		
		
	}
	cout<<"Total:"<<i;
	
}
