#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>

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
#define mp                      make_pair
#define pb                      push_back
#define fill(a,v)               memset(a,v,sizeof a)

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;

typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;

typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;


void debugarr(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

/*  Main code  */

int testnum;
int z[400005];
int a[400005];
int d[400005];
int m[400005];
//int u[400005];
int b[400005];
int sum;

int n,w;

int solve()
{
    int count=0,i,sum=0;
    if(w>1)     
    {
            int y=0;
            FOR(i,1,w)
                y=y+i;
            
           // debugarr(d,n);
            int rep=0,val,lol=0,temp=0;
            
	    int v1,v2,me;
            FOR(i,0,w)
            {
		sum=sum+z[i];	
                if(b[m[i]]==1)
                    b[m[i]]++,rep=m[i],temp++;
                else
                    b[m[i]]++,temp++;
                

		if(m[i]==0)
			v1=z[i];
		if(m[i]==w-1)
			v2=z[i];
                if(d[i]>=w)
                    lol=i;
            }
	    me=miN(v1,v2);
	    if(sum==(me*w)+y)
            if(lol==0)
            if(rep==0)
            if(temp==w)
               {
                   count++;
               }
            
               //cout<<lol<<"-"<<rep<<"-"<<temp<<endl<<"count="<<count<<endl;
               //debugarr(b,w);
               
             
            FOR(i,w,n)
            {
                 sum=sum+z[i]-z[i-w];
		
		if(m[i]==0)
			v1=z[i];
		if(m[i]==w-1)
			v2=z[i];
		 
		if(rep==m[i-w])
                        rep=0;
                 
                 temp--;
                 b[m[i-w]]--;                          
                       
                if(b[m[i]]==1)
                    rep=m[i];
                 b[m[i]]++;
                    temp++;         
                
                    
               
                if(lol==(i-w+1))
                    lol=0;
                if(d[i]>=w)
                    lol=i;
   
//if(i==4){cout<<lol<<"-"<<rep<<"-"<<temp<<"\n"<<"cnt="<<count<<"\n";debugarr(b,w);}

		me=miN(v1,v2);
	      if(sum==(me*w)+y)
              if(b[m[i]]==1 && b[m[i-w]]==1 && temp==w && lol==0 && rep==0)
                   {
                       count++;
                   }
            
            }   
    }
    else
        return n;       
    return count;    
}


bool input()
{
    s(n);s(w);
    int t;
    s(z[0]);
    m[0]=z[0]%w;
    FOR(i,1,n)
     {
            s(z[i]);
            d[i]=abS(z[i]-z[i-1]);
            m[i]=z[i]%w;
            b[i]=0;
    }
    //debugarr(d,n);
    //cout<<endl;
   // debugarr(m,n);
       
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
