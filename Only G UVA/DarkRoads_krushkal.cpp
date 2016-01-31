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


int nvertex, nedges ;
vector <pair <int, PII> > edge;
int papa[100000009];
int parent(int a)
{
	if(papa[a]==a)
				  return a;
    return
		   papa[a]=parent(papa[a]);
}
int main()
{
    int T=1;
    long long total, sum;
    int a,b,w;
    while(1)
    {
    	s(nvertex);s(nedges);
		
    	if(m==0 && n==0)
				break;
		total=sum=0;
		FOR(i,0,nvertex)
				  prev[i]=i;
		FOR(i,0,nedges)
		{
			s(a);s(b);s(w);
			//make the graph
			edge.push_back(make_pair(w,make_pair(a,b)));
			total+=w;
		}
		// sort by weight
		sort(edge.begin(),edge.end());

		FOR(i,0,nvertex)
		{
			int u=parent(edge[i].second.first);
			int v=parent(edge[i].second.second);
			
			if(u!=v) // to chek the cycle or the loop
					sum+=edge[i].first;

					papa[u]=v;
		}

		cout<<total-sum;
		cout<<endl;
		edge.clear();
   }
    return 0;
}


