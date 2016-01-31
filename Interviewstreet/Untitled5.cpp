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
        cin>>n;
        
		for(i=0;i<n;i++)
        {
			
			scanf("%d",&a[i]);	
		
		}
//	sort(a,a+n);
	temp=1;b[0]=1;	
	for(i=1;i<n;i++)
    {
			
		if(a[i]>a[i-1])
		{
			if(temp==0)
				temp=2;
			else
				temp++;      
		}
		if(a[i]==a[i-1])
		{
			
			temp=1;
		
		}
		if(a[i]<a[i-1])
		{
			if(temp==0)
				temp=0;
			else
				temp--;
			if(b[])
		}
		
		b[i]=temp;
	}
	
	
	
	for(i=0;i<n;i++)
        {
			if(b[i]==0)
				{
					if(b[i-2]!=2)
					{
							while(b[i]==0)
								i++,count++;
							for(j=count+1;j>0;j--)
								ramp+=j;
							ramp=ramp-1;
							count=0;	
					}
					else
					{
							while(b[i]==0)
								i++,count++;
							for(j=count+2;j>0;j--)
								ramp+=j;
							ramp=ramp-3;
							count=0;					
					}
				}
			else
				ramp+=b[i];
			
		
		}
	cout<<ramp;
	return 0;
	
	}
};    
int main()
{
     check t;     
     t.comb();
     return 0;
}

