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
//////////////
#include<stdio.h>
#define size 100010
int gcd(int a,int b)
{
        if(a==0)
        return b;
        return gcd(b%a,a);
}
int main()
{
        int t,n,i,a[size],count,min,bool;
        scanf("%d",&t);
        while(t--)
        {
                min=100000000;bool=1;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                        if(min>a[i])
                        min=a[i];
                }
                count=a[0];
                for(i=1;i<n;i++)
                count=gcd(count,a[i]);
                if(count>1)
                for(i=2;i*i<=count;i++)
                if(count%i==0)
                {
                        printf("%d\n",i);
                        bool=0;
                        break;
                }
                if(bool && count>1)
                printf("%d\n",count);
                else
                if(bool)
                printf("-1\n");
        }
        return 0;
}
/////////////////////

int n, m ;
int a[1000000],mins=0;
int gcd(int a, int b)
{
        if(b == 0)
        {
                return a;
        }
        else
        {
                return gcd(b, a % b);
        }
}

int solve()
{
	
	FOR(i,0,n)
	{
		FOR(j,i,n)
		{
			if(gcd(a[i],a[j])==1 )
			{
				cout<<"-1";
				cout<<endl;
				return 1;
			}
		}
	}
	int i=2;
	while(i<=mins)
	{
		if(mins%i==0)
		{
			cout<<i;
			cout<<endl;
			return 0;
		}
	}
	return 1;
}

bool input()
{
	s(n);
	mins=1000000;//,even=0;

	FOR(i,0,n)
	{
		s(a[i]);
		if(mins>a[i])
		   mins=a[i];
	
	}
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
    return 0;
}


