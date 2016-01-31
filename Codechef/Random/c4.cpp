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
string s[10];
int n,x;
long long C(int n, int r)//, int MOD)
{
	vector< vector<long long> > C(n+1,vector<long long> (r+1,0));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i][k] = 1;
			else
				C[i][k] = (C[i-1][k-1] + C[i-1][k]);//%MOD;
	}
	return C[n][r];
}
int solve()
{
	//cout<<x;
	int res=0;
	 FOR(i,0,9)
	 {
	 	FOR(j,0,n)
	 	{
	 		int cnt=0;
	 	
	 		if(s[j][0+4*i]=='0')
	 		   cnt++;
	 		if(s[j][1+4*i]=='0')
	 		   cnt++;
	 		 if(s[j][2+4*i]=='0')
	 		   cnt++;
			 if(s[j][3+4*i]=='0')
	 		   cnt++;
			  if(s[j][53-2*i]=='0')
	 		   cnt++;
			   if(s[j][52-2*i]=='0')
	 		    cnt++;		  
	 		//cout<<cnt;	
	 		  if(cnt>=x)
			     res+=C(cnt,x);
			   	 	
		 }
	 	
	 }
	 cout<<res; 
	 
	 
	  return 1;
}

bool input()
{
	s(x);s(n);
	 FOR(i,0,n)
 	 {
 	 	cin>>s[i];
 	 }
 	 
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


