#include<iostream>
using namespace std;

int main(){
	
	int min, max, total=0;
	cin>>min>>max;
	
	while(min<=max){
		
		int i=1, n=0;
		while(n<min){
			i*=3;
			n++;
		}
		total+=i;
		min++;
	}
	cout<<total;
}
