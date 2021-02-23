#include<iostream>
using namespace std;

int main(){
	
	int max, a, count=1;
	cin>>max;
	
	while(count<100){
		cin>>a;
		if(a>max) max = a;
		count++;
	}
	cout<<max;
	
}
