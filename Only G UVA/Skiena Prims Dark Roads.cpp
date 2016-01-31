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
#define MAXDEGREE 200008
#define MAXV 200009
#define MAXINT 1000000009
typedef struct
{
	int v; /* neighboring vertex */
	int weight; /* edge weight */
} edge;
typedef struct
{
	edge edges[MAXV+1][MAXDEGREE]; /* adjacency info */
	int degree[MAXV+1]; /* outdegree of each vertex */
	int nvertices; /* number of vertices in graph */
	int nedges; /* number of edges in graph */
} graph;

 int prim(graph *g, int start)
{
	long long sum=0;
	int i,j; /* counters */
	bool intree[MAXV]; /* is vertex in the tree yet? */
	int distance[MAXV]; /* vertex distance from start */
	int v; /* current vertex to process */
	int w; /* candidate next vertex */
	int weight; /* edge weight */
	int dist; /* shortest current distance */
	for (i=1; i<=g->nvertices; i++)
	{
		intree[i] = false;
		distance[i] = MAXINT;
		//parent[i] = -1;
	}
	distance[start] = 0;
	v = start;

	while (intree[v] == false)
	{
		intree[v] = true;
		for (i=0; i<g->degree[v]; i++)
		{
			w = g->edges[v][i].v;
			weight = g->edges[v][i].weight;
			if ((distance[w] > weight) && (intree[w]==false))
			{
				distance[w] = weight;
				//parent[w] = v;
			}
		}
		v = 1;
		dist = MAXINT;
		for (i=2; i<=g->nvertices; i++)
			if ((intree[i]==false) && (dist > distance[i]))
			{
				dist = distance[i];
				v = i;
			}
		sum+=dist;
	}
	return sum;
}
int main()
{
	
	int a, b, c;
//	graph * g;
	while(1)
	{
        graph *g;//=new graph;
        g=new graph;
        long long total=0;
		s(g->nvertices);s(g->nedges);
		
		if(g->nvertices==0 && g->nedges==0)
						  break;
		FOR(i,0,g->nvertices)
		{
			g->degree[i]=0;
		}
		FOR(i,0,g->nedges)
		{
			s(a);s(b);s(c);
			//int p=g.degree[a];
			g->edges[a][g->degree[a]].v=b;
			g->edges[a][g->degree[a]].weight=c;
			g->degree[a]++;
			total+=c;
		}
		cout<<total-prim(g,0);
	}
}
