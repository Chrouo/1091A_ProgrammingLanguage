#include<iostream>
using namespace std;

int main(){
	
	int num, max, k;
	cin>>k>>max;
	
	for(int i=0; i<k-1; i++){
		cin>>num;
		if(num>max)	max = num;
	}
	cout<<max<<endl;
}
