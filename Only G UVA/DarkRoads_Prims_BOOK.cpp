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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

#define MAX 200010
struct Road
{
	int v, c;
	Road(int v, int c) : v(v), c(c)
    {}
	inline bool operator < (const Road& that) const
	{ return c > that.c; }
};

vector<Road> G[MAX];
priority_queue<Road> Q;
int n, m;
bool V[MAX];


int main()
{
	while(cin >> n >> m, n|m)
	{
		int before = 0;
		memset(V, 0, sizeof(V));
		memset(G, 0, sizeof(G));
		Q = priority_queue<Road>();

		for(int i=0; i<m; i++)
		{
			int a, b, c;
			cin>>a>>b>>c;
			G[a].push_back(Road(b, c));
			G[b].push_back(Road(a, c));
			before += c;
		}
		int total = 0, totalc=0;
		Q.push(Road(0, 0));

		while(totalc < n)
		{
			Road item = Q.top(); Q.pop();

			if (V[item.v])
			    continue;
            V[item.v] = true;
			total += item.c;
			totalc++;

			for(int j=0; j<G[item.v].size(); j++)
			     if (!V[G[item.v][j].v])

			Q.push(G[item.v][j]);
		}
		cout<<before-total <<endl;
   }
return 0;
}
