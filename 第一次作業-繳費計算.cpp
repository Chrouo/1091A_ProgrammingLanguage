#include<iostream>
using namespace std;

int main(){
	
	int startHour, startMinute, endHour, endMinute;
	cin>> startHour >> startMinute >> endHour >> endMinute;
		
	int totalMinute = ( endHour - startHour ) * 60 + endMinute - startMinute;
	int ans;
	
	if( totalMinute <= 60){
		ans = totalMinute / 30 * 20;
	}
	else if(totalMinute <= 120){
		ans = 2 * 20 + (totalMinute - 60) / 30 * 30;
	}
	else{
		ans = 2 * 20 + 2 * 30 + (totalMinute - 120 ) / 30 * 50;
	}
	
	cout << ans;
	
	
	
	
}
