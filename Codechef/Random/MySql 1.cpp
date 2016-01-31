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


int n, m ;
int x1[1000000], x2[1000000], y11[1000000], y2[1000000]; 
int solve()
{
	long long area=0, tmp=0;
	int mix=10000000, miy=10000000 , maxx=-1, may=-1; 
	FOR(i,0,n)
	{
		if(x1[i]<=mix && y11[i]<=miy)
		{
			mix=x1[i] ; miy=y11[i];
		}
		if(x2[i]>=maxx && y2[i]>=may)
		{
			maxx=x2[i] ; may=y2[i];
		}
		tmp=(abS((x2[i]-x1[i]))*abS((y2[i]-y11[i])));
		area+=tmp;
//		error(area);
	}
//	error(mix);error(miy); 
//	error(maxx);; error(may);
	tmp=((maxx-mix)*(may-miy));
//	error((maxx-mix)*(may-miy));
	if(area == tmp && (maxx-mix)==(may-miy) )
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		s(x1[i]);s(y11[i]);
		s(x2[i]);s(y2[i]);
	}
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




