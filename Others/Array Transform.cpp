#include<iostream>
#include<stdio.h>
using namespace std;

class transform
{
     public:
	 int serch()
	 {
		int test,n,k,i ,mod1,mod2,mod3,flag=0,t[1000],m[1000];
		scanf("%d",&test);
		while(test--)
		{
		    scanf("%d",&n);scanf("%d",&k);
			for(i=0;i<n;i++)
			    scanf("%d",&t[i]);
			for(i=0;i<n;i++)
                m[i]=t[i]%(k+1);			
	        for(i=0;i<n-1;i++)	    
   			       if(m[0]!=m[i])
      				   if(m[0]!=m[i+1])
				            {cout<<"NO\n";flag=1;}
				
			if(flag==0)
                 cout<<"YES\n";
			flag=0;  
	
		}
		return 0;
	 }
};
int main()
{
      transform test;
	  int c;
      c=test.serch();
	  return 0;
}