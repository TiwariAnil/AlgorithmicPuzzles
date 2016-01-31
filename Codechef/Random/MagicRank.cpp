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
#define Max 103
#define infi 0
//int X[20000][20000];
float G[Max][Max], V[Max][Max];
int n, m ;
float chek(int a, int b)
{
    if(a<0 || a>=n ||b<0 || b>=n )//|| V[a][b]< c+G[a][b])
        return 0 ;    
    return G[a][b];
}
int solve()
{
    FOR(i,1,n)
        G[i][0]+=G[i-1][0];
    
    FOR(i,1,n)
        G[0][i]+=G[0][i-1];
    
        FOR(i,1,n)
          {  FOR(j,1,n)
            {
                  //if(i!=0 || j!=0)
                      G[i][j]+=maX(G[i-1][j],G[i][j-1]);  
            //    cout<<V[i][j]<<" ";
                   
            }    
          //  cout<<endl;
        }
        
        
        
    
    double ping= G[n-1][n-1];//<<endl;
    //error(ping);
      if(ping<0)
        cout<<"Bad Judges\n";
     else
     {
        //    ping/=2*(n-1)-1;
        printf("%.6lf\n",ping);   
    }
        return 1;
}

bool input()
{
    s(n);
    
    FOR(i,0,n)
        FOR(j,0,n)
            cin>>G[i][j], V[i][j]=infi;
            
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
    //system("pause");
    return 0;
}


