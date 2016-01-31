#include<iostream>
using namespace std;

int a[200]; int m; void calculate(int num);
int main()
{
	int i,j,t,n;
	cin>>t; 
    for(i=1;i<=t;i++)
	{
	    cout<<endl;      
		cin>>n; m=1;a[0]=1;
	    for(j=1;j<=n;j++)
			calculate(j);
	    for(j=m-1;j>=0;j--)
			cout<<a[j]; 
     } 
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
 

