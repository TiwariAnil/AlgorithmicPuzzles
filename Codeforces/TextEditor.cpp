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


int n, m ;
int r1,c1,r2,c2;
int xf[]={1,0,0,-1};
int yf[]={0,1,-1,0};
queue <pair<int , PII> > Q;
set <PII> pool;
typedef pair<int, PII> pos;
int L,U,R,D;
int bfs(int x, int y)
{
    Q.push(pos(0,PII(x,y)));
    while(!Q.empty())
    {
        pos p=Q.front();
        Q.pop();
        if(p.second.first==r2 && p.second.second==c2)
            return p.first;
        
        FOR(i,0,4)
        {
            int xx=p.second.first+xf[i];
            int yy=p.second.second+yf[i];
            
            if(pool.find(PII(xx,yy))!=pool.end())
            {
            /*
                if(xx<p.second.first)
                    L++;
                else if(xx>p.second.first)
                    R++;
                else if(yy<p.second.second)
                    D++;
                else if(yy>p.second.second)
                    U++;            
              */
                Q.push(pos(p.first+1,PII(xx,yy)));//,error(xx),error(yy);
                pool.erase(pool.find(PII(xx,yy)));
            }
        }
    }    
    return 0;
}
int solve()
{
    cout<<bfs(r1,c1);
        return 1;
}

bool input()
{
    s(n);
    int a;
    FOR(i,1,n+1)
    {
        s(a);
        FOR(j,1,a+2)
            pool.insert(PII(i,j));//,cout<<i<<"-"<<j<<endl;
    }
    cin>>r1>>c1>>r2>>c2;
	return true;
}

int main()
{
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
a a a a a a a a a s
a a a a a
a a a a a a
a t a a a a
*/
