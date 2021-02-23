#include<iostream>
using namespace std;

int main(){
	
	int money;
	cin>>money;
	if(money > 0){
	cout<<"2000: "<<money/2000<<endl;
	money%=2000;
	cout<<"1000: "<<money/1000<<endl;
	money%=1000;
	cout<<"500: "<<money/500<<endl;
	money%=500;
	cout<<"200: "<<money/200<<endl;
	money%=200;
	cout<<"100: "<<money/100<<endl;
	money%=100;
	cout<<"50: "<<money/50<<endl;
	money%=50;	
	cout<<"10: "<<money/10<<endl;
	money%=10;
	cout<<"5: "<<money/5<<endl;
	money%=5;
	cout<<"1: "<<money<<endl;
	}
	else
		cout<<"Error";
	
	
}
