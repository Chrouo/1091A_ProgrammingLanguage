#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int product, sales;
	double p1=0, p2=0, p3=0, p4=0, p5=0, total=0;
	
	cin>>product;
	
	while(product != -1){
		
		cin>>sales;
		switch(product){
			case 1:
				p1 += sales * 2.98;
				break;
			case 2:
				p2 += sales * 4.50;
				break;
			case 3:
				p3 += sales * 9.98;
				break;
			case 4:
				p4 += sales * 4.49;
				break;
			case 5:
				p5 += sales * 6.87;	
				break;	
		} //switch
		cin>>product;
	}
	cout<<fixed<<setprecision(2)
		<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<" "<<p5<<" "
		<<p1+p2+p3+p4+p5;
		
}
