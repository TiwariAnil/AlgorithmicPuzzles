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
#include<sstream>
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


int n, m ,cnt=0;
int a[88][10009];
int curr[88];
int siz[88];
long long mins;
int solve()
{
	int pointstk=0;
	//tempmin=a[0];
	
	FOR(i,1,n)
	{
		if(a[i][curr[i]] < a[pointstk][curr[pointstk]])
		{
			pointstk=i;  min2=
		}			
	}
	
	int done=0, tmpstk, split=0;
	while(done<n)
	{
		curr[pointstk]++;
		
		if(curr[pointstk]==siz[pointstk])
		{
			curr[pointstk]=-1;
			done++;
			split++;
		}
		tmpstk=pointstk;
		if(curr[pointstk]==-1)
		{
			mins=10000000;
			FOR(i,0,n)
			{
				if(curr[i]!=-1)
				{
					if( a[i][curr[i]] < mins)
					{
						pointstk=i; mins=a[i][curr[i]];
					}
				}
			}	
		}
		else
		{
			
			FOR(i,0,n)
			{
				if(i!=pointstk && curr[i]!=-1)
				{
					if( a[i][curr[i]] < a[pointstk][curr[pointstk]])
					{
						pointstk=i;
					}
				}				
			}
			if(tmpstk!=pointstk )
			{
				split+=2;
			}
		}
	}
	cout<<split-1<<endl;
    return 1;
}
/*
2
2
3 1 2 4
2 3 5
3
4 1 1 1 1
4 1 1 1 1
4 1 1 1 1

*/
bool input()
{
	int x;
	s(n);
	FOR(i,0,n+1)
	{
		curr[i]=0;
	}
	cnt=0;
	FOR(i,0,n)
	{
		s(x);
		siz[i]=x;
		cnt+=x;
		FOR(j,0,x)
		{
			s(a[i][j]);
			
		}
	}
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
		cout<<"Case "<<testnum<<": "; 
        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




