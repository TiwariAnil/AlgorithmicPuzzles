#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100009],b[100009];
class check
{
    public:
    int comb()
    { 
        int n,k,j,temp,count=0,i,ramp=0;
        int test;
        cin>>test;
        char a[1004];
		int b[1004],c[1004];
    while(test--)
    {
	    cin>>n;
		cin>>a;
		for(i=0;i<1003;i++)
			b[i]=c[i]=0;
		for(i=0;i<n;i++)
        {	
			
			if(a[i]=='1')
				{b[i+1]=1;if(i!=0)c[i-1]=1;}
				
		}
		for(i=0;i<n;i++)
		{	
			if(a[i]=='0' && b[i]!=1 && c[i]!=1)
				{count++;}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
	
	}
};    
int main()
{
     check t;     
     t.comb();
     return 0;
}

