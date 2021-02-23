#include<iostream>
using namespace std;

int main(){
	
	int num = 0, max;
	cin>>max;
	
	while( num != -1){
		cin>>num;
		if( num > max ) max = num;
	}
	cout<<max;
	
}
