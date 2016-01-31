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
typedef struct edge
{
    int v, c;
    edge(int v, int c): v(v), c(c) {};
    inline bool operator < (const edge &a) const
    {
        return c > a.c;    
    }    
};

int n, m ,tgt,s;
vector <PII> V[100008];
int total=0;
int D[1000009];
int u[1000009],v[1000009],w[10000009];
int solve()
{
    FOR(i,0,n+1)
        D[i]=100000009;
//    cnt[s]=1;
    priority_queue<edge> q;
    q.push(edge(0,s));
    int c, v;
    while(!q.empty())
    {
        edge e=q.top();
         c=e.c;
         v=e.v;
        q.pop();
        
        if(D[v] < c )
            continue;
            
        FOR(i,0,V[v].size())
        {
            if(D[V[v][i].first] > c + V[v][i].second)
            {
                
                D[ V[v][i].first ]= c + V[v][i].second;    
               
                q.push( edge( V[v][i].first , D[V[v][i].first]));
            }   
        }    
    }      
    FOR(i,0,n+1)
        if(D[i]==tgt)
            total++;
           
           FOR(i,1,m+1)
           {
                if( D[u[i]] < tgt && tgt-D[u[i]] < w[i] &&( w[i]+D[v[i]]- (tgt-D[u[i]] ) >tgt )
                    total++;
                //if( D[v[i]] < tgt && tgt-D[v[i]] < w[i] && w[i]+D[u[i]]- ( tgt-D[v[i]] ) >tgt )
                    total++;
                //if( D[v[i]] < tgt && D[u[i]] < tgt && D[v[i]]+D[u[i]]+w[i] ==2*tgt )
                    total++;
                
          }
           cout<<total;
        return 1;
}

bool input()
{
     s(n);s(m);s(s);
     
     FOR(i,0,m)
     {
        s(u[i]);s(v[i]);s(w[i]);
        
        V[v[i]].push_back(PII(u[i],w[i]));
        V[u[i]].push_back(PII(v[i],w[i]));        
    }
    s(tgt);
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
    system("pause");
    return 0;
}


/*

#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<pair<int,int>,int>> e[100001];
int d[100001];
bool v[100001];

int main(){
    int n,m,s,l;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=0;i<m;i++){
        int x,y,c;
        scanf("%d%d%d",&x,&y,&c);
        e[x].push_back({{y,c},i});
        e[y].push_back({{x,c},i});
    }
    scanf("%d",&l);
    priority_queue<pair<int,int>> q;
    memset(d,63,sizeof(d));
    q.push({d[s]=0,s});
    while(!q.empty()){
        int x=q.top().second; q.pop();
        if(v[x]) continue; else v[x]=true;
        for(auto& r:e[x]){
            int y=r.first.first,c=r.first.second;
            if(d[x]+c<d[y]){
                d[y]=d[x]+c;
                q.push({-d[y],y});
            }
        }
    }
    int ans=0;
    vector<pair<int,int>> u;
    for(int x=1;x<=n;x++){
        if(d[x]==l) ans++;
        if(d[x]>=l) continue;
        for(auto& r:e[x]){
            int y=r.first.first,c=r.first.second;
            if(c<=l-d[x]) continue;
            if(d[y]+c-(l-d[x])<l) continue;
            u.push_back({r.second,x<y?l-d[x]:c-(l-d[x])});
        }
    }
    sort(u.begin(),u.end());
    u.erase(unique(u.begin(),u.end()),u.end());
    printf("%d\n",ans+u.size());
}

*/
