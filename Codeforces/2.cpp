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
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
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
/*   INPUT


1000000009 , 100005
*/
vector <int > X,Y;
int final=100000000;
string s[204];
int tt[204][204]={0},pp;
int dfs(int x,int d,res)
	{
		if(tt[x][d]!=1)
		{
			if(s[x]s[d]=='D')
				{final=miN(res,final);return 0;}

			if(s[x]s[d]=='#')
				return 0;
			if(s[x][d]=='*')

			return res > 0 ? res : 1;
        }
	}

int solve()
{
	
	int flag=0;
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if(s[i][j]=='*')
				{X.push_back(i);Y.push_back(j);}

		}
		if(flag==1)
		  break;
	}
	flag=0;
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if(s[i][j]=='P')
				{ dfs(i,j,0); flag=1;break;}
			
		}
		if(flag==1)
		  break;
	}
 	return 1;
}

bool input()
{
	 s(n);s(m);
	 FOR(i,0,n)
	 {
		cin>>s[i];
	 }
    return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


