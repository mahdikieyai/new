#include <iostream>
#include <conio.h>
using namespace std;
int fib(int);
int main()
{
	long int result,number,temp,a,b;
	cout<<"please enter a number: ";
	cin>>number;
	cout<<fib(number);
	getch();
	return 0;
}

int fib(int n)
{
	    
	if(n==0||n==1)
		return 1;
	
	return fib(n-1)+fib(n-2);
}
