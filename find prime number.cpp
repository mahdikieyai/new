#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"enter number please:";
    cin >>n;
    bool temp;
    for(i=2;i<=n;i++){
        temp=true;
        for(a=2;a<=i/2;a++)
            if((i%a)==0)
			 temp=false;
        if(temp==true)
           cout <<"\t"<< i;
    }
    cout <<endl<<"Is A prime Number"<<endl;
    getch();
    return 0;
}
