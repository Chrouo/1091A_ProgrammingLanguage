#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int hight, sex;
	cin>>hight>>sex;
	
	if(sex == 0)
		cout<<fixed<<setprecision(1)<<(hight-80)*0.7;
	else
		cout<<(hight-70)*0.6;
	
	
}
