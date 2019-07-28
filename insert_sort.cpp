#include<iostream>
#include<conio.h>
using namespace std;
void insert_Sort(int array[] , int size);

int main()
{

    int size = 9;

    int input[] = {7, 5, 9, 8, 3, 12, 4, 2, 10};
    
	insert_Sort(input,size);

    for (int i=0;i<size;i++) 
	{

        cout<<input[i];

    }

 

    return 0;

}
void insert_Sort(int array[] , int size) 
{

        int n=size;

        for (int j=1;j<n;j++) {

            int temp=array[j];

            int i=j-1;

            while ((i > -1) && (array[i] > temp))
			 {

                array[i+1]=array[i];

                i--;

            }

            array[i+1]=temp;

        }

    }

