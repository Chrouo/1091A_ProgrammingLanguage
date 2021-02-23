#include<iostream>
using namespace std;

int main(){
	
	int min, max;
	cin>>min>>max;
	
	int total=0;
	while(min<=max){
		
		int i=0, num=1;
		while(i++ < min){
			num*=2;
		}
		total+=num;
		min++;
	}
	cout<<total;
}
