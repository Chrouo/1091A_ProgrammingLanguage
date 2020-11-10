#include <iostream>
using namespace std;

int gcd(int a, int b){
	
	int c;
	if(b > a){
		c = a;
		a = b;
		b = c;
	}
	
	while( a%b != 0){
		c = a;
		a = b;
		b = c % b;
		
	}
	return b;
	
}

int main(){
	
   int a, b;

   for ( int j = 1; j <= 5; j++ ) {
      cin >> a >> b;
      cout <<  gcd( a, b ) << endl;
   }
   
}
