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
/*  The Doer's code  */
/*   INPUT


1000000009 , 100005
*/


unsigned long long n,a[100008]={0},b[100008]={0};
int solve()
{


	int ycurr=0,ocurr=1000000;//age
	long long yrat=0,orat=0;
	int ypos=0,opos=0;
	FOR(i,1,n+1)
	 {
	 	if(i%2!=0)//odd
	 	{
	 		if(ycurr<a[i])
				if( ocurr>a[i] )
					{
					   ycurr=a[i],yrat+=b[i],ypos=i;
					}

				else
				{
					ycurr=ocurr,yrat+=b[opos],ypos=opos;
					ocurr=a[i],orat=orat-b[ypos]+b[i],opos=i;
				}
		}
	 	else
	 	{
	 		if(ycurr<a[i])
					{
					   //ycurr=a[i],yrat+=b[i],ypos=i;
					   ocurr=a[i],orat+=b[i],opos=i;
					}

				else
				{
					ocurr=ycurr,orat+=b[ypos],opos=ypos;
					ycurr=a[i],yrat=yrat-b[ypos]+b[i],ypos=i;
				}
	 		
	 	}
	 	cout<<abS(yrat-orat);cout<<endl;
	 }
 	return 1;
}

bool input()
{
	 sl(n);
	 FOR(i,1,n+1)
	 {
	 	sl(a[i]);sl(b[i]);
	 }
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


