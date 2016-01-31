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


class ShorterSuperSum
{
public:
       int m[15][15];	
	int so(int i,int j)
	{
		if(j==0)
			return 0;
		if(i==0)
			return m[0][j];
		return (so(i-1,j-1)+so(i-1,j));
	
	}
	int calculate(int k, int n) 
	{
		int m[15][15];
		FOR(i,0,15)
			m[0][i]=i;
		return so(k,n);
		
	}
};

int main()
{
    ShorterSuperSum s;
    cout<<s.so(2,3);
    int t;
    cin>>t;    
    
}


//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
