#include<iostream>
#include<cmath> 
using namespace std;

int sqrfloor(int n){
	
	int i=1;
	while(pow(i,2) <= n){
		i++;
	}
	return pow(i-1, 2);
	
}

int main(){
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
}
