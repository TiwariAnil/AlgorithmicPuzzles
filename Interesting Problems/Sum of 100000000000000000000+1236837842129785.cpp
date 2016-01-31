#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int a[200000]={0}; 
int m;
long long number;
void calculate(int num);
int main()
{
    int i,j,test,n;
    scanf("\n%d",&test);   

    m=1;a[0]=1;
    //scanf("%ld",& first);
    
	for(i=1;i<=test;i++)
	{
                        
       scanf("%ld",&number);
            calculate(number);        
	}
     for(j=m-1;j>=0;j--)
			   printf("%d",a[j]);	
         system("pause");
}
void calculate(int j)
{
	int index;
	int temp=0;
    int x;
	for(index=0;index<m;index++)
	{
		x=a[index]+jtemp;
		a[index]=x%10;
		temp=x/10;
	}
	if(temp!=0)
	{
		while(temp!=0)
		{
			a[m]=temp%10;
			temp=temp/10;
			m++;
		}
	}
}
 

