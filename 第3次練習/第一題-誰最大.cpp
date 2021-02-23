#include<iostream>
using namespace std;

int main(){
	
	int num,max;
	cin>>num;
	max = num;
	int i=0;
	while(i<9){
		cin>>num;
		if(num>max)
			max =num;
		i++;
	}
	cout<<max;
	
} 
