	#include<iostream>
	using namespace std;
	
	int main(){
		
		int teams, s, d;
		cin>>teams;
		
		for(int i=0; i<teams; i++){
			cin>>s>>d;
			if( s>d && (s+d)%2==0 && (s-d)/2>0  && d!=0 ){
				int ans_a = s-(s-d)/2;
				int ans_b = s-ans_a;
				cout<<ans_a<<" "<<ans_b<<endl;
			}
			else{
				cout<<"Impossible"<<endl;
			}
		}
		
		
		
	} 
