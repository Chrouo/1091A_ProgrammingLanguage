#include<iostream>
using namespace std;

int main(){
	
	int num, min, max;
	cin>>num;
	min = num, max = num;
	
	for(int i=1; i<5; i++){
		cin>>num;
		if(num>max) max = num;
		if(num<min) min = num;
	}
	cout<<max<<" "<<min;
	
}
