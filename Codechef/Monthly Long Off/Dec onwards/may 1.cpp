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


int n, m ,ptr;
string a, b;
int solve()
{
	n=a.length();m=b.length();
	if(n<m)
	{
		ptr=0;
		FOR(i,0,m)
		{
			if(a[ptr]==b[i])
				ptr++;	
		}
		if(ptr==n)
		{
			cout<<"YES"<<endl;
			return 1;
		}
		else
		{
			cout<<"NO"<<endl;
			return 1;
		}
	}
	if(n>m)
	{
		ptr=0;
		FOR(i,0,n)
		{
			if(a[i]==b[ptr])
				ptr++;	
		}
		if(ptr==m)
		{
			cout<<"YES"<<endl;
			return 1;
		}
		else
		{
			cout<<"NO"<<endl;
			return 1;
		}
	}
	if(n==m)
	{
		ptr=0;
		FOR(i,0,m)
		{
			if(a[ptr]==b[i])
				ptr++;	
		}
		if(ptr==n)
		{
			cout<<"YES"<<endl;
			return 1;
		}
		ptr=0;
		FOR(i,0,n)
		{
			if(a[i]==b[ptr])
				ptr++;	
		}
		if(ptr==m)
		{
			cout<<"YES"<<endl;
			return 1;
		}
		cout<<"NO"<<endl;
		return 1;
	}
}

bool input()
{
	cin>>a; cin>>b;
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

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




