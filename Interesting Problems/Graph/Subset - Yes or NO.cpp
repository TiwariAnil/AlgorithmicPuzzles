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
#include<stdio.h>
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

int a[1000];
int m,n;

int sol(int pos, int sum)
{
	if(a[pos]==-1)
		return 0;
	if(a[pos]==sum)
		return 1;
	if(a[pos]<sum)
		return( sol(pos+1,sum-a[pos]) || sol(pos+1,sum));
	
	return 0;
}

int solve()
{
    sort(a,a+n);
    a[n]=-1;
    if(sol(0,m))
    	printf("Yes\n");
    else
    	printf("No\n");
    return 9;
}


bool input()
{
	s(n);s(m);
	FOR(i,0,n)
		s(a[i]);
    return true;
}



int main()
{
    int T=1;
    cin>>T;
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
   
        solve();
        
    }
    return 0;
}
