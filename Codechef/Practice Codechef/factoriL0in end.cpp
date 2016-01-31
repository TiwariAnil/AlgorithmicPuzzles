#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;

int a[200000000];  // can calculate 1 000 000 000
int m,count;
void calculate(int num);
int main()
{
	
	int i,j,t,n;
	cin>>t; 
	count=0;
	for(i=1;i<=t;i++)
	{
	    cout<<endl;  
		cin>>n;   
        m=1;a[0]=1;
	    for(j=1;j<=n;j++)
			calculate(j);
	    cout<<count; 
	}
         system("pause");
}
void calculate(int j)
{
	int index;
	int temp=0;
	long int x;
	for(index=0;index<m;index++)
	{
		x=a[index]*j+temp;
		a[index]=x%10;
	    if(a[index]==0)
	        count++;
    	temp=x/10;
	}
	if(temp!=0)
	{
		while(temp!=0)
		{
			a[m]=temp%10;
            if(a[m]==0)
	            count++;		
        	temp=temp/10;
			m++;
		}
	}
}
 

