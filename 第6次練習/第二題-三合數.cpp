
#include<iostream>
using namespace std;
/*
int main(){
	
	int n;
	cin>>n;
	
	int count=0;
	for(int i=0; i<=n; i++){
		for(int j=0; j<i; j++){
			for(int k=0; k<=j; k++){
				if(k*k+j*j == i*i){
					count++;	
				}
			}
		}
	}
	cout<<count;
	
} 
*/

int main(){
	
	int n;
	cin>>n;
	
	int count=0;
	for(int i=1;i<=n; i++)
		for(int j=i; j<=n; j++)
			for(int k=j; k<=n; k++)
				if(k*k == i*i+j*j)
					count++;
	cout<<count;
}


