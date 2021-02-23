#include <iostream>
using namespace std;

int reverseDigits(int number){
	
	int ans=0;
	while(number>0){
		ans*=10;
		ans+=number%10;	
		number/=10;
	}
	return ans;
	
}

int main()
{
   int number; 

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
}
