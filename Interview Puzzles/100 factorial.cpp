#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;
int a[200000000];
int m;                  ///m is showing the no of digits in factorial
void calculate(int num);
int main()
{
	
	int i,j,t,n;
	cin>>t; 
    
	for(i=1;i<=t;i++)
	{
	    cout<<endl;       
		cin>>n;   
        m=1;a[0]=1;           ///m is showing the no of digits in factorial
	    for(j=1;j<=n;j++)
			calculate(j);
	    for(j=m-1;j>=0;j--)
			cout<<a[j];   
		
    }
           system("pause");
}
void calculate(int j)
{
	
	int i;
	int temp=0; // temp is the carry to b added in next no..
	long int x;
	for(i=0;i<m;i++)    //like here repesentation is like [2][3][1][0][6]== 60132 is the no nd j =24 ,,,
                        //so if we have to multiply no ie 60132 with j ie 24 then multiply with each term ,
                        //stating from ones digit here 2  so  	" x=a[i]*j+temp; "  
	{
		x=a[i]*j+temp;
		a[i]=x%10;
		temp=x/10;
	}
	if(temp!=0)       //if temp =123 then it shud b stored like [3][2][1] in array so ,,,below
	{
		while(temp!=0)
		{
			a[m]=temp%10;
			temp=temp/10;
			m++;                ///m is showing the no of digits in factorial
		}
	}
}
 
