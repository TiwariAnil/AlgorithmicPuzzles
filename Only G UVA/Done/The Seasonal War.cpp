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


int n, m ,cnt=0;
string s[100];
int x[]={1,1,1,0,0,-1,-1,-1};
int y[]={1,0,-1,1,-1,1,0,-1};
void dfs(int i, int j)
{
	s[i][j]='0';
	FOR(t,0,8)
	{
		int xx=i+x[t],yy=j+y[t];
		if(xx>=0 && xx<n && yy>=0 && yy<n && s[xx][yy]=='1')
		{
			dfs(xx,yy);
		}
		
    }
	
}
int solve()
{
	//cnt=0;
//	m=s[0].length();
	FOR(i,0,n)
	{
		FOR(j,0,n)
		{
			if(s[i][j]=='1')
			{
				dfs(i,j);
				cnt++;
			}
		}
	}
	
	return 1;
}

bool input()
{
	FOR(i,0,n)
	{
		cin>>s[i];
	}
	return true;
}

int main()
{
    int T=0;
    //s(T);
    while(cin>>n)
    {
    	T++;
    	cnt=0;
        if(!input()) break;

        solve();
		cout<<"Image number "<<T;

		cout<<" contains "<<cnt;cout<<" war eagles.";
		cout<<endl;
        //printf("\n");\
		//T++;
	//	error(T);
    }
    return 0;
}


