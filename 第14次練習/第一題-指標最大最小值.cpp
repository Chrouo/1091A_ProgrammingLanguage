#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr){
	
	if(a>b && a>c){
		*maxPtr = a;
		if(b>c) *minPtr = c;
		else *minPtr = b;
	}
	else if(b>a && b>c){
		*maxPtr = b;
		if(a>c) *minPtr = c;
		else *minPtr = a;
	}
	else if(c>a && c>b){
		*maxPtr = c;
		if(a>b) *minPtr = b;
		else *minPtr = a;
	}	
	
} 


int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
	system("PAUSE");
}
