#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	int n , temp; 
	cout <<" Enter a Number:";
	cin >>n;
	temp = 0;
	for(int i = 2; i < n ; i++){
		if( n % i == 0 ){
			temp = 1;		
		} 	
	}
	if(temp == 0){
		cout <<"is prime number";
	}else{
		cout <<"not prime number";
	}
		
getch();
}
