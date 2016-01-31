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


int ne, nv ;

int solve()
{
	return 1;
}

bool input()
{
	return true;
}
vector <PII> edge[2000004];
int main()
{
	long long MAX=1000000009,sum=0,total=0;
    while(1)
    {
    	s(nv);s(ne);
    	if(nv==0 && ne==0)
			 break;
		int distance[nv+1],visited[nv+1];
		FOR(i,0,nv+1)
			 distance[i]=MAX,visited[i]=0;
		total=0;
		int a,b,w;
		FOR(i,0,ne)
		{
			s(a);s(b);s(w);
			edge[a].push_back(make_pair(b,w));
			edge[b].push_back(make_pair(a,w));
			total+=w;
		}
		sum=0;
		
	// Prims actual part
		
		int  currentvertex,mincost,vertexcount=1;
		currentvertex=0;
		while(vertexcount!=nv)
		{
			visited[currentvertex]=1;

			FOR(i,0,edge[currentvertex].size())
			{
				if(visited[edge[currentvertex][i].first]==0)
					if(edge[currentvertex][i].second < distance[edge[currentvertex][i].first])
					{
  						  distance[edge[currentvertex][i].first]=edge[currentvertex][i].second;
					}
			}
			mincost=MAX;
			
			FOR(i,0,nv)
			{
				if(visited[i]==0)
					 if(mincost > distance[i])
					 {
					 	currentvertex= i;
					 	mincost=distance[i];
					 }
			}
			error(currentvertex);
			error(mincost);
			sum+=mincost;
			vertexcount++;
		}
		cout<<total-sum;
		cout<<endl;
		FOR(i,0,ne)
		{
			edge[i].clear();
		}
		
	}
    return 0;
}


