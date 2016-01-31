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

#define MAX_node 100000
using namespace std;

struct edg{
	int a,b,w;
	bool operator < (const edg &b) const{
		return w<b.w;
	}
}E[MAX_node+1];

int baap[MAX_node+1];
int parent(int a)
{
	if(a==baap[a]) return a;
	return baap[a]=parent(baap[a]);
}

int main()
{
	int node,edge;

	while(scanf("%d%d",&node,&edge))
	{

		int TOTAL=0;

		for(int i=1;i<=node;i++)
              baap[i]=i;//*

		for(int i=0;i<edge;i++)
		      scanf("%d%d%d",&E[i].a,&E[i].b,&E[i].w);//**

		sort(E,E+edge);//***

		for(int i=0; i<edge; i++ )
		{
			int u=parent(E[i].a);//****
			int v=parent(E[i].b);

			if(u!=v)
			{
				TOTAL+=E[i].w;
				baap[u]=v;//*****
			}
		}

		printf("Total Cost of MST %d\n",TOTAL);
	}
	return 0;
}

/*
 * Making each node it's own parent
 ** Input edges in the format "node1 node2 weight"
 *** Sorting them in the ascending order of weight
 **** Find the current parent of a and b
 ***** If the nodes of that edge is not connected yet, Connect them.
 */

