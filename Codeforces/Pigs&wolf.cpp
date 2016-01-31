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
/*   INPUT

1000000009 , 100005
*/

int n, m ;
string s[12];

int solve()
{
	int cnt=0,x,y,flag=0;
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if(s[i][j]=='W')
			{
				flag=0;
				x=i-1;
				if(x>=0 && s[x][j]=='P' && flag==0)
					  cnt++,flag=1;
				x=i+1;
				if(x<=n-1 && s[x][j]=='P'&& flag==0)
					  cnt++,flag=1;

				y=j-1;
				if(y>=0 && s[i][y]=='P'&& flag==0)
					  cnt++,flag=1;
				y=j+1;
				if(y<=m-1 && s[i][y]=='P'&& flag==0)
					  cnt++,flag=1;
			}
		}
	}
	cout<<cnt;
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
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


