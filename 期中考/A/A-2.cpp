#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int num;
	double average = 0;
	
	for(int i=0; i<5; i++){
		cin>>num;
		average += num; 
	}
	
	cout<< fixed << setprecision(2) << average / 5;
	
}
