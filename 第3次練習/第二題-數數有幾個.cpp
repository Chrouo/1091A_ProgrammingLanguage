#include<iostream>
using namespace std;

int main(){
	
	int num;
	cin>>num;
	
	int i=0;
	while(num!=0){
		i++;
		num/=10;
	}
	cout<<i;
	
}
