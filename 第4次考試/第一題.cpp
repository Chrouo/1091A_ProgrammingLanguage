#include<iostream>
using namespace std;

int main(){
	
	int num, max;
	cin>>max;
	
	int count=1;
	while(count<200){
		cin>>num;
		if(num>max) max = num;
		count++;
	}
	cout<<max;
	
} 
