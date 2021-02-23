#include<iostream>
using namespace std;

int main(){
	
	int mon;
	cin>>mon;
	
	if(mon>=3 && mon<=5) cout<<"Spring";
	else if(mon>=6 && mon<=8) cout<<"Summer";
	else if(mon>=9 && mon<=11) cout<<"Autumn";
	else cout<<"Winter";
	
}
