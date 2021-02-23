#include<iostream>
using namespace std;

int main(){
	
	int min, max, total=0;
	cin>>min>>max;

	while(min<=max){
		
		int index=0, num=1;
		while(index<min){
			num*=3;
			index++;
		}
		total+=num;
		min++;
	}
	cout<<total;
}
