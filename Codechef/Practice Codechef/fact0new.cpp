#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;
int c;
int a[2000];  
int m;

void calculate(int num);
int main()
{
	
	int i,j,t;
    long n;
	cin>>t; 
	for(i=1;i<=t;i++)
	{
	    cout<<endl;  
		cin>>n;   
        m=1;a[0]=1;c=0;     ///m is showing the no of digits
	    for(j=1;j<=n;j++)
			calculate(j);
	    
        while(a[m-1]==0)
		     c++;		
     
        cout<<c; 
	}
         system("pause");
}
void calculate(int j)
{
	int i;
	int temp=0;
	long int x;
	i=0;
    while(a[i]==0)
      { m--;i++;}
      
	for(i=0;i<m;i++)
	{
		x=a[i]*j+temp;
		a[i]=x%10;
	   	temp=x/10;
	}
	if(temp!=0)
	{
		while(temp!=0)
		{
			a[m]=temp%10;
        	temp=temp/10;
			m++;                  ///m is showing the no of digits
		}
	}
    i=0;
    while(a[i]==0)
      { a[m-i]=0;i++;}
}

 

