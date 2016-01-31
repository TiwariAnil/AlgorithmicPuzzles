//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
//some common functionn

#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mp                      make_pair
#define pb                      push_back


// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

using namespace std;

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

using namespace std;
/*  The Doer's code  */

int n;
int solve()
{
	if(n==21)
	 {cout<<"1"; return 1;}
	if(n<21 )
	  {cout<<"-1"; return 1;}
	 
	 

	if((n-30)%14==0)  
	{
		n=n-30;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-31)%14==0)
	{
		
		n=n-31;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-32)%14==0)
	{
		
		n=n-32;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-33)%14==0)
	{
		
		n=n-33;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-34)%14==0)
	{
		
		n=n-34;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-35)%14==0)
	{
		
		n=n-35;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-36)%14==0)
	{
		
		n=n-36;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	 if((n-40)%14==0)
	{
		
		n=n-40;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	return 1;
	}
	else if((n-38)%14==0)
	{
		
		n=n-38;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-37)%14==0)
	{
		
		n=n-37;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else if((n-39)%14==0)
	{
		
		n=n-39;
	  //int t=2;
	  int p=n/14;
	     cout<<p+2;
	     return 1;
	}
	else
	cout<<"-1";
	
     return 1;
}

bool input()
{
 	 s(n);
    return true;
}

int main()
{
    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


