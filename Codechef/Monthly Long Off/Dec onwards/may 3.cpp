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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int n, m ,x,y, p;
int a[100009]={0};
PII MP;
map <PII, int> high, low;
int mid(int x,int y)
{
	return x+(y-x)/2;
}

int small(int x,int y)
{
	if(x==y)
	{
		return a[x];
	}
	if(x+1==y)
	{
		return miN(a[x], a[y]);
	}
	p=mid(x,y);
	if( low[PII(x,y)] !=0 )
		return low[PII(x,y)];
	low[PII(x,y)]= miN(small(x,p), small(p+1,y));
	return low[PII(x,y)]; 
}
int big(int x, int y)
{
	if(x<0 || y < 0)
	{
		return -1;
	}
	if(x==y)
	{
		return a[x];
	}
	if(x+1==y)
	{
		return maX(a[x], a[y]);
	}
	p=mid(x,y);
	
	if( high[PII(x,y)] !=0 )
		return high[PII(x,y)];
	high[PII(x,y)]= maX(big(x, p), big(p+1, y));
	return high[PII(x,y)];
}
int solve()
{
	int mn=100000009, mn1;
	int mx=-1, mx1;
	float xx=0.0;
	FOR(i,0,m)
	{
		mn=100000000;
		mx=-1;
		s(x);s(y);
		x; y;
		mn=small(x,y);
	//	error(mn);
	
		if(x==0)
		{
			if(y==n-1)
			{
				mx=0;
			}
			else
			{
				mx=big(y+1, n-1);
			}
		}
		else if(y==n-1)
		{
			mx=big(0,x-1);	
		}
		else
			mx=maX(big(0,x-1), big(y+1,n-1));
	
	//	error(mx);
		mx1=big(x,y);
	//	error(mx1);
		xx=(float)(mx1-mn)/2;
		
		if(mx > xx)
		{
			xx=mx;
		}
	//	error(xx);
		xx+=mn;
		printf("%.1f\n",xx);
	//	cout<<mn+xx<<endl;
	
	//	error(mn);
	}
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		s(a[i]);
		//sum+=a[i];
		//mset.insert(a[i]);
	}
	s(m);
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

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




