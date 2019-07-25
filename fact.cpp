#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int n , x , i;
	cout <<" Enter Number For Factorial:";
	cin >> n;
	x = 1;

 	for(i = 1; i<= n ; i++ )
	 {
			x = x * i ; 	 
	}
	cout <<"Fact is :"<< x;
getch();
}
