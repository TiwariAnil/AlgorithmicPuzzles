#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;

int a[200000000];  // can calculate 1 000 000 000 ie 100 crores!!  :)
int m;
void calculate(int num);
int main()
{
	
	int i,j,t,n;
	cin>>t; //scanf("\n%d",&t);
//	if(1<=t<=100)
//	{
	for(i=1;i<=t;i++)
	{
	    cout<<endl;         //	printf("\n");
		cin>>n;   //scanf("%d",&n);
	//	if(1<=n<=100)
	//	{
            m=1;a[0]=1;
	    for(j=1;j<=n;j++)
			calculate(j);
	    for(j=m-1;j>=0;j--)
			cout<<a[j];   //ppprintf("%d",a[j]);
		}	// }	 }
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
 

