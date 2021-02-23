#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string Enigma;
	cin>>Enigma;
	
	char symbol = Enigma.at(0), letter = Enigma.at(2);
	int num = Enigma.at(1) - 48, Enigma_size = Enigma.size() - 3;
	
	if(letter < 65 || letter > 90){
		cout<<"input error!";
		return 0;
	}
	
	char ans;
	if(symbol == '-'){
		ans = int(letter) - num;
		if(int(ans) < 65 ) ans = int(ans) + 26;	
	}
	else if(symbol == '+'){
		ans = int(letter) + num;
		if(ans > 90 ) ans = ans - 26;		
	}
	
	
	cout<<ans<<Enigma_size;
	
	
}
