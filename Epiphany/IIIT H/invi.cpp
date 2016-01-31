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

char G[109][109];
int A[106][106];
int  flag=0, n;

int x[]={1,0,0,-1};
int y[]={0,1,-1,0};

void BFS(int i, int j)
{
	queue < pair <int,int> > q;
	q.push(make_pair(i,j));
	int a, b, xx, yy;
	while(!q.empty())
	{
        //cout<<"yes";
       a=q.front().first;
	   b=q.front().second;
	   if(a==n-1 && b==n-1)
	   {
	   		flag=1;
	   		return ;
	   }
	   q.pop();
       FOR(t,0,4)
		{
			 xx=a+x[t],  yy=b+y[t];
			if(xx>=0 && xx<n && yy>=0 && yy<n && G[xx][yy]=='.')
			{
				if(A[xx][yy]==0)
					q.push(make_pair(xx, yy)), A[xx][yy]=1;
			}
		
		}
	
	}
	
}

int solve()
{
	BFS(0,0);
	if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 1;
}
bool input()
{
    s(n);
 	flag=0;   
    FOR(i,0,n)
        FOR(j,0,n)
            cin>>G[i][j], A[i][j]=0;
            
	return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
    	
        if(!input())
		   break;
		solve();
        
    }
    return 0;
}


