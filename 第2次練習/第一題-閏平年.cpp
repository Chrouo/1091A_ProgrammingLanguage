#include<iostream>
using namespace std;

int main(){
	
	int mon, day;
	cin>>mon>>day;
	
	// 1る 
	if( mon == 1 ){
		if( day <= 20 )
			cout << "Capricorn";
		else
			cout<< "Aquarius";
	}
	
	// 2る 
	else if( mon == 2 ){
		if( day <= 18 )
			cout << "Aquarius";
		else
			cout<< "Pisces";
	}
	
	// 3る 
	else if( mon == 3 ){
		if( day <= 20 )
			cout << "Pisces";
		else
			cout<< "Aries";
	}
	
	// 4る 
	else if( mon == 4 ){
		if( day <= 20 )
			cout << "Aries";
		else
			cout<< "Taurus";
	}
	
	// 5る 
	else if( mon == 5 ){
		if( day <= 21 )
			cout << "Taurus";
		else
			cout<< "Gemini";
	}
	
	// 6る 
	else if( mon == 6 ){
		if( day <= 21 )
			cout << "Gemini";
		else
			cout<< "Cancer";
	}
	
	// 7る 
	else if( mon == 7 ){
		if( day <= 22 )
			cout << "Cancer";
		else
			cout<< "Leo";
	}	
	
	// 8る 
	else if( mon == 8 ){
		if( day <= 23 )
			cout << "Leo";
		else
			cout<< "Virgo";
	}	
	
	// 9る 
	else if( mon == 9 ){
		if( day <= 23 )
			cout << "Virgo";
		else
			cout<< "Libra";
	}		
	
	// 10る  
	else if( mon == 10 ){
		if( day <= 23 )
			cout << "Libra";
		else
			cout<< "Scorpio";
	}		
	
	// 11る 
	else if( mon == 11 ){
		if( day <= 22 )
			cout << "Scorpio";
		else
			cout<< "Sagittarius";
	}	
	
	// 12る 
	else if( mon == 12 ){
		if( day <= 21 )
			cout << "Sagittarius";
		else
			cout<< "Capricorn";
	}	
	
	
} 
