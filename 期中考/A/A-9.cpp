#include<iostream>
using namespace std;

int main(){
	
	int num, total=0;
	cin>>num;
	
	for(int i=0; i<6; i++){
		switch(num%10){
			case 0:
				total+=99;
				break;
			case 1:
				total+=88;
				break;
			case 2:
				total+=77;
				break;
			case 3:
				total+=66;
				break;
			case 4:
				total+=55;
				break;
			case 5:
				total+=44;
				break;
			case 6:
				total+=33;
				break;
			case 7:
				total+=22;
				break;
			case 8:
				total+=11;
				break;
			case 9:
				total+=0;
				break;
		}
		num/=10;
	}
	cout<<total;
}
