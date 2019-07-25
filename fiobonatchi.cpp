#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n , f1 , f2 , temp;
    cout << "Enter Number For Fobonachi :";
    cin>>n;
    f1 = 1;
    f2 = 0;
    for (int i=0 ; i<=n ; i++){
    	temp = f1;
        f1 = f2 ;
        f2 = f2 + temp ;
        cout <<f2<<" ";
        }

getch();
}
