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
#include<sstream>
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
#define all(c)                  (c).begin(),(c).end()
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

int n, m ;
long sum[1000009];
int vp[10000009]={0}, vm[10000009]={0};
unsigned long long ans=0;
bool input()
{
	// 1 -1 1 -1 1
	int p, q;
	cout<<sizeof sum;
	s(n);
	sum[0]=0;
	FOR(i,1,n+1)
	{
		s(m);
		sum[i]=sum[i-1]+m;
		if(sum[i]==1 || sum[i]==-1)
			ans++;
	
	}
	FOR(i,1,n+1)
	{
		p=sum[i]+1;
		q=sum[i]-1;
		if(p>=0)
			ans+=vp[p];
		else
			ans+=vm[abS(p)];//.size();
		if(q>=0)
			ans+=vp[q];//.size();
		else
			ans+=vm[abS(q)];//.size();
		
		if(sum[i]>=0)
			vp[sum[i]]++;//.push_back(i);
		else
			vm[sum[i]]++;//.push_back(i);
	}	
	cout<<ans;
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        //solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




