#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;


int a[200000000]={0};
int m;
//char no[20];
void calculate(unsigned long long num);
int main()
{
	
	int i,j,t;
    unsigned long long n;  //19 letters ie 9999999999999999999 total 19 times!!
     m=1;a[0]=0;
    
     scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	  scanf("%llu",&n);  
                                     	//  printf("\t%llu",n);
	   calculate(n);
	}
	printf("\n\nSolution\n\n");
       for(j=m-1;j>=0;j--)
			printf("%d",a[j]);
       system("pause");
}
void calculate(unsigned long long n)
{
	int index;
	int temp=0;
	long int x;
	int numb[25]={0};
	unsigned long long num=n;
    int count=0;
    printf("\n");
    while(num)
    {
        numb[count]=fmod(num,10);
        num=num/10;
      //  printf("%d,"(numb[count]));
        count++;
        
    }          
    for(index=0;index<count;index++)  //m is the global vari
	{
		x=a[index]+numb[index]+temp;
		a[index]=x%10;
		temp=x/10;
		if(m<count)
		   m=count;
	}
	if(temp!=0)
	{     //Here we increase the size of the array every time, like if it is filled till a[2], to fill a[3] 
	      //we have to come over here......
		while(temp!=0)
		{
			a[count]=a[count]+temp%10;
			temp=temp/10;
			count++;
		
        	}
		if(m<count)
		   m=count;
	}
}
 

