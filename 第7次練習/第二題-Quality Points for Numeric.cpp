#include <iostream>
using namespace std;

int qualityPoints(int average){
	
	if(average>=90 && average<=100) return 4;
	else if(average>=80 && average<=89) return 3;
	else if(average>=70 && average<=79) return 2;
	else if(average>=60 && average<=69) return 1;
	else return 0;
}

int main(){
   int average; 

   for ( int loop = 1; loop <= 5; loop++ ) {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } 
   cout << endl;
   
}
