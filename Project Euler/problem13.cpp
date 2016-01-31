#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int a[200000000]={0};
int m;
char number[50];

void calculate(int);
int main()
{
	
	int i,j,t;
    m=1;a[0]=0;
    
   // scanf("%d",&t);
	for(i=1;i<=100;i++)
	{
	  gets(number);//scanf("%s",&number);  
      calculate(strlen(number));
	}
	printf("\n\nSolution\n\n");
       for(j=m-1;j>=0;j--)
			printf("%d",a[j]);
       system("pause");
}
void calculate(int size)
{
	int index;
	int temp=0;
	int x;
    int count=0;
    int numb[50]={0};
   // printf("\n");
    while(count<size)
    {
        numb[size-count-1]=number[count]-'0';
       	count++;
    }          
    /* for(int j=0;j<size;j++)
			printf("%d",numb[j]); */
    for(index=0;index<count;index++)  //m is the global vari
	{
		x=a[index]+numb[index]+temp;
		a[index]=x%10;
		temp=x/10;
		if(m<count)
		   m=count;
	}
	if(temp!=0)
	{    
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
 

