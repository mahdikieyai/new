#include<iostream>
#include <conio.h>
using namespace std;

int main()

{

    int a[4];

    int size=4;

 

    for(int i=0;i<size;i++)

    {

        cin>>a[i];

    }

    for(int i=0;i<size;i++)

    {

        for(int j=0;j<size-1;j++)

        {

            if(a[j]>a[j+1])

            {

                int temp=a[j];

                a[j]=a[j+1];

                a[j+1]=temp;

            }

        }

    }

    for(int i=0;i<size;i++)

    {

        cout<<a[i];

    }
    getch();
    return 0;

}
