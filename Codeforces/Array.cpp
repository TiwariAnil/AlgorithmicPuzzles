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
#define error(x)                cout << #x << " : " << (x) << endl
#define mP                      make_pair
#define pB                      push_back

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


int n,k,a[100006],c[100008]={0},d[100008]={0};
int solve()
{
     int temp=a[0],i=0,pos;
     c[a[0]]=1;
     int k1=k;
     while(temp==a[i] && i<n)
     i++;
     if(k==1)
	 	pos=i;
     k--;
     if(k!=0)
    FOR(j,i,n)
    {
        
         if(c[a[j]]!=1)
         {
             k--;c[a[j]]=1;
			  if(k==0)
         {pos=j+1;break;}
         }
        

    }

	int ban;
    if(k==0)
	{

	    FORs(j,pos-1,i-1)
	    {

	         
	         if(d[a[j]]!=1)
	         {
	          //cout<<j+1<<"--";
			   k1--;//cout<<k1;
			   d[a[j]]=1;
			   if(k1==0)
	           {ban=j+1;// cout<<ban;
			     break;}
	         }

	    }
	}
	
    if(k==0)
    cout<<ban<<" "<<pos;
    else
    cout<<"-1 -1";
     return 1;
}

bool input()
{
     s(n);s(k);
     FOR(i,0,n)
     {
          s(a[i]);
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


