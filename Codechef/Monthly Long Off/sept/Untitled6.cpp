#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<cmath>


using namespace std;

#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define p(n)                    printf("%d",n)
#define pl(n)                   printf("%lld",n)
#define pf(n)                   printf("%lf",n)
#define ps(n)                   printf("%s",n)
#define maX(a,b)                ((a)>(b)?(a):(b))
#define miN(a,b)                ((a)<(b)?(a):(b))
#define abS(x)                  ((x)<0?-(x):(x))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define REP(i,n)                FOR(i,0,n)


void debugarr(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

/*  Main code  */

int testnum;
int a[400005];
int up[400005];
int dw[400005];
int mx[400005];
int mn[400005];
int n,w;
int count=0;
int solve()
{
    int count=0,i,sum=0;
    if(w>1)     
    {
		   int temp;
 			
			FOR(i,0,n)
			{
				if(i%w==0)
				{	
					temp=a[i]; up[i]=a[i];
				}
				else
				{	
					if(a[i]>=temp)
						up[i]=temp;
					else
						up[i]=a[i],temp=a[i];
				}
			}
			//debugarr(up,n);cout<<endl;
			int rat=n/w; rat*=w;
			for(int i=rat-1;i>=0;i--)
			{
				if((i+1)%w==0)
				{	
					temp=a[i]; dw[i]=a[i];
				}
				else
				{	
					if(a[i]>=temp)
						dw[i]=temp;
					else
						dw[i]=a[i],temp=a[i];
				}
			}
			//debugarr(dw,n);cout<<endl;
			FOR(i,0,n-w+1)
			{
                  mn[i]=miN(up[i+w-1],dw[i]);            
            }
		    //debugarr(mn,n);cout<<endl;
           	FOR(i,0,n)
			{
				if(i%w==0)
				{	
					temp=a[i]; up[i]=a[i];
				}
				else
				{	
					if(a[i]<=temp)
						up[i]=temp;
					else
						up[i]=a[i],temp=a[i];
				}
			}
			//debugarr(up,n);cout<<endl;
            for(int i=rat;i>=0;i--)
			{
				if((i+1)%w==0)
				{	
					temp=a[i]; dw[i]=a[i];
				}
				else
				{	
					if(a[i]<=temp)
						dw[i]=temp;
					else
						dw[i]=a[i],temp=a[i];
				}
			}
            //debugarr(dw,n);cout<<endl;
		    FOR(i,0,n-w+1)
			{
                  mx[i]=maX(up[i+w-1],dw[i]);            
            }
			//debugarr(mx,n);cout<<endl;
	        FOR(i,0,n-w+1)
                  if(mx[i]-mn[i]==w-1)
                        count++;
            
    
    
    }
    else
        return n;       
    return count;    
}


bool input()
{
    s(n);s(w);
    int t;
    FOR(i,0,n)
     {
            s(a[i]);
     }
 return true;
}



int main()
{
    int T=1;
    for(testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
   
        int m=solve();
        cout<<m;
    }
    //cin>>T;
    return 0;
}
