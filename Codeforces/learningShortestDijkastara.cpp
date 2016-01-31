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
#define Max 1003
#define infinite 100000000
struct Edge
{
    int x, y, c;
    Edge(int x, int y, int c): x(x), y(y), c(c) {};
    
    inline bool operator < (const Edge& a) const
    {
        return c > a.c;    
    }

};
priority_queue <Edge> Q;
//priority_queue <Edge> iterator::it;
int G[Max][Max], V[Max][Max];
int n, m ;
void chek(int a, int b, int c)
{
    if(a<0|| a>=n || b<0 || b>=m || V[a][b]<= c+G[a][b])
        return ;
    Q.push(Edge(a, b, c+G[a][b]));    
  
}
int solve()
{
    Q.push(Edge(0,0,G[0][0]));
    int a, b, c;
    while(!Q.empty())
    {
        Edge curr=  Q.top(); 
        Q.pop();
//        Edge temp= Q.end();
//        Q.push_back(Edge(1,1,1));
        if(V[curr.x][curr.y]<=curr.c)
            continue;
        V[curr.x][curr.y]=curr.c;
        a=curr.x;
        b=curr.y;
        c=curr.c;
        
         if (curr.x == n-1 && curr.y == m-1) break;
      
        
        chek(a-1,b,c);
        chek(a+1,b,c);
        chek(a,b-1,c);
        chek(a,b+1,c);
         
    }
    cout<<V[n-1][m-1]<<endl;
        return 1;
}

bool input()
{
    s(n);s(m);
    FOR(i,0,n)
        FOR(j,0,m)
            s(G[i][j]), V[i][j]=infinite;
    
    Q = priority_queue<Edge>();  
	return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");
    }
  //  system("pause");
    return 0;
}


