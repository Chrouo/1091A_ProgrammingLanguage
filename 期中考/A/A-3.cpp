#include<iostream>
using namespace std;

int main(){
	
	int a, b, temp, c;
	cin >> a >> b;
	c = a * b;
	
	while( b!=0 ){
		temp = a;
		if ( a > b ) {
			 a = b;
			 b = temp % b;
		}
		else{
			a = b;
			b = temp;	
		}		
	}
	cout<< c / a;
	
}
