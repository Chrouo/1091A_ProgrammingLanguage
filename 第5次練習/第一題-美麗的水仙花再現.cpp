#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int min, max, count=0;
	cin>>min>>max;
	
	for(int i=min; i<max; i++){
		
		int a = i/100, b = i/10%10, c = i%10;
		if(i == pow(a,3)+pow(b,3)+ pow(c,3)){
			cout<<i<<endl;
			count++;
		}
	}
	
	cout<<"total:"<<count;
	
	
}
