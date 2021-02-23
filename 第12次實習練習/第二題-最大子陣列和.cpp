#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;

int sumOfElements(int arr[][columns], int tl_r, int tl_c, int dr_r, int dr_c){
	
	int sum = 0;
	for(int i=tl_r; i<=dr_r; i++){
		for(int j=tl_c; j<=dr_c; j++){
			sum+=arr[i][j];
		}
	}
	return sum;
} 


int main(){

	int array[rows][columns];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	
	
	int max = array[0][0];
	for(int i=0; i<rows; i++){
		for(int j=i; j<rows; j++){
			for(int x=0; x<columns; x++){
				for(int y=x; y<columns; y++){
					
				if(max < sumOfElements(array, i,x,j,y))
					max = sumOfElements(array,i,x,j,y);
					
				}	
			}
		}
	}
	cout<<max;
	
	
}
