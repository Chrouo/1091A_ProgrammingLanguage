#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	cin>>a>>b>>c;
	
	if ( a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a ) cout<<"Not a triangle.";
	else if( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) cout<<"It is a right triangle.";
	else cout<<"It is not a right triangle.";
	
}
