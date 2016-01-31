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

/*   INPUT

1000000009 , 100005
*/

int n, m ,y,k;

int solve()
{
	
	int p=1,t=1,flag=9;
	while(t<=n)
	{
		
		if(t-y > 0 )
		{
			cout<<t-y; cout<<" ";
			flag=1;
		}
		t=p*k;
		p++;
		
	}
	if(flag==9)
	cout<<"-1";
	
	
	
	
	
/*	int t=1;
	while(t<=n-y && n-k>=0)
	{
		t=t*k;
		if(t>y && t<)
	}
//	error(t);
	long long cnt=0,p=t,jmp=0;
	//cout<<p;
	while(p<=n-y)
	{
			//cout<<p<<" ";
			p(p);printf(" ");
			p=k+p; jmp=1;
	}
	if(jmp==0)
	cout<<"-1";
/*	int p=(n/k);
	int c=n-y;
	int b=y%k;
	int flag=0;
	FOR(i,//b,n-y+1)
	{
		
	}
	
*/
	return 1;
}

bool input()
{
	s(y);s(k);s(n);
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
    return 0;
}


