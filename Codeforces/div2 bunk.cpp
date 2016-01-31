#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int a[100000]={0};  
int sum=0;
int n;
int call(int pos)
{
	int i,j;
	i=pos;
	if(sum%3==0)
	return 0;
	if(pos>=n)
	return 0;
	while(sum%3!=0 && i<n)
        {
           sum=sum-a[i];
           if(sum%3!=0)
           		{
					a[i]=-1;j=i+1;
           			call(j);       
				}
			else
			   sum=sum+a[i];	
           i++;
		         
        }
     return 0; 
	
}

int main()
{
    
   		int m,flag2=0,sum=0,d,temp,e,count=0,i,j;//,temp,i;//,k,count=0,count1=0,i,s[102];
        cin>>n;
                
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            
            if(a[i]==0)
                flag2=1;
        sum=sum+a[i];        
        }
        if(sum==0)
        {cout<<sum;return 0;}
        if(flag2!=1)
            {cout<<"-1";return 0;}
        sort(a,a+n);
        if(sum%3==0)
        {    for(i=n-1;i>=0;i--)
            {
            printf("%d",a[i]); 
           }
            return 0;
        }
        i=1;
        while(sum%3!=0 && i<n)
        {
           sum=sum-a[i];
           if(sum%3==0)
           		a[i]=-1;
           	else
			   sum=sum+a[i];	
           i++;
		         
        }
        int flag=0,t=0;
    	if(sum%3==2)
			for(i=1;i<n;i++)
        	{
			
            	if((a[i]==1||a[i]==4||a[i]==7)&& flag==0)
            		{flag=i;goto c;}
            	if((a[i]==1||a[i]==4||a[i]==7)&& flag!=0)
            		{sum=sum-a[i]-a[flag],a[i]=-1,a[flag]=-1;break;}
				     c:
				t++;			   
        	}
        	 if(sum==0)
        {cout<<sum;return 0;}
		  if(sum%3==1)
			for(i=1;i<n;i++)
        	{
            	if((a[i]==2||a[i]==5||a[i]==8)&& flag==0)
            		{flag=i;goto d;}
            	if((a[i]==2||a[i]==5||a[i]==8)&& flag!=0)
            		{sum=sum-a[i]-a[flag],a[i]=-1,a[flag]=-1;break;}
				 d:     
				t++;		  
        	}     
        	 if(sum==0)
        {cout<<sum;return 0;}
       if(sum%3==0)
        {    for(i=n-1;i>=0;i--)
            {
            if(a[i]!=-1)
                printf("%d",a[i]); 
           }
            return 0;
        }
           
        cout<<"-1";
        return 0;
    
}
//1 4 7 
//2 5 8
//1 2  4 5  7 8  
