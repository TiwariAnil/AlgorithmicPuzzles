#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test,n,k,i,count,temp,flag=0,t[1000];
		scanf("%d",&test);
		while(test--)
		{
		    count=0;
		    scanf("%d",&n);scanf("%d",&k);
			for(i=0;i<n;i++)
			    scanf("%d",&t[i]);
			int a[11]={0};	
			for(i=0;i<n;i++)
			  { temp=t[i]%(k+1);
			    if(a[temp]==0)
			        {  a[temp]=1;count++;}//cout<<a[t[i]%(k+1)]<<endl;
			   if(count>2)
			       {flag=1;break;}
			  }	
			if(flag==0)
                 cout<<"YES";
			else
                 cout<<"NO";			
				 
			flag=0;  
	       if(test>0)
		     cout<<endl;
		}
		return 0;		
}