#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int a[20000]={0},b[20000]={0},c[20000]={0};

int size=1,countf=0;


 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
void calculate(int);
int main()
{
	
	int i,j,t;
    m=1;a[0]=1,b[0]=1;
//  it is a function  atoi 

	while(size <1001)
	{
      calculate(a,b,c);
      countf++;
      if(size==1000)
	   { cout<<endl<<endl<<countf;break;}
      calculate(b,c,a);
      countf++;
       if(size==1000)
	   { cout<<endl<<endl<<countf;break;}
     
      calculate(a,c,a);
      countf++;
       if(size==1000)
	   { cout<<endl<<endl<<countf;break;}
     
	}

    system("pause");
}
void calculate(int* a[], int* b[], int * c[])
{
	int index;
    for(index=0;index<size;index++)  //m is the global vari
	{
		x=a[index]+b[index]+temp;
		c[index]=x%10;
		temp=x/10;
	}
	if(temp!=0)
	{    
		while(temp!=0)
		{
			c[size]=a[size]+b[size]+temp%10;
			temp=temp/10;
			size++;
		
        }
	}
	countf++;
	
}
 

