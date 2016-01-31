#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,min=1000000000,temp,flag=0,count=0,t;
    scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	      scanf("%d",&a[i]);
	while(n--)
	{
		
		if(min>a[n])
		 {  min=a[n];temp=min;flag=1;}
		if(min==a[n]& flag==0)
		      count=min;
	     flag=0;     
	}
	if(count!=temp)
	    cout<<temp;
	else
	      cout<<"Still Rozdil";
}
