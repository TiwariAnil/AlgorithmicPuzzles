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

#define MOD 1000000007


/*
long long C(int n, int r)//, int MOD)
{
	vector< vector<long long > > C(n+1,vector<long long> (r+1,0));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i][k] = 1;
			else
				C[i][k] = (C[i-1][k-1] + C[i-1][k]);//%MOD;
	}
	return C[n][r];
}
*/

long long c[10002][10002];

int n, m , k;
int a[100009];
long long sum=0;
long long xx;
int solve()
{
	//long long total=C(n,k);
//	long long xx=C(n-1,k-1);
//	int tt=total/xx, md=total%xx;
//	error(tt); 
	sum=0;
	sort(a,a+n);
    sum=0;
    for(int i=k-1;i<n;++i)
    {
    	xx= c[i][k-1]%MOD;//C(i,k-1);
        sum+=((xx*a[i])%MOD);
        sum%=MOD;
   	}
    cout<<sum<<endl;
    return 1;
}

bool input()
{
	s(n); s(k);
	FOR(i,0,n)
	{
		s(a[i]);
	}
	return true;
}

int main()
{
    //freopen("test1.txt","r",stdin);
   // freopen("result1.txt","w",stdout);
    
	for (int i=1;i<=10000 ; i++)
       {
            c[i][0]=c[i][i]=1;
            for(int j=1; j<i; j++)
                c[i][j] = (c[i-1][j]%MOD+ c[i-1][j-1]%MOD)%MOD;
       }
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) 
			break;
		cout<<"Case #"<<testnum<<": ";
        solve();
        
		//printf("\n");

    }
    //cout<<
//    system("pause");
    return 0;
}



