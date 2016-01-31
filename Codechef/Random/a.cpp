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
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mp                      make_pair
#define pb                      push_back


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
/*  Tiwari's code  */

char v[100]="AUEOI",c[100]="JSBKTCLDMVNWFXGPYHQZR";
int n;
int solve()
{
	string vo,co;
	int t=0,h=0,cnt=0,cnt1=0;
     FOR(i,1,n+1)
     {
     	if(i%2==1)
		   {
		   		  if(cnt==21)
		   		  			 cnt=0,t++;
					 vo+=v[t];cnt++;
		   		  
		   }
		  else 
		  {
		  	   if(cnt1==5)
		  	   			  cnt1=0,h++;
		  	   			  co+=c[h];cnt1++;
		  }
		  
     }
     sort(vo.begin(),vo.end());
     sort(co.begin(),co.end());
	t=0,h=0;
	FOR(i,1,n+1)
	{
		if(i%2==1)
		   {
		   	   cout<<vo[h];h++;	  
		   		  
		   }
		  else 
		  {
		  
		   	   cout<<co[t];t++;
		  }
	}	  
      return 1;
}

bool input()
{
 	 s(n);
    return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
		cout<<"Case "<<testnum<<": ";
        solve();
        printf("\n");

    }
    return 0;
}
/*

3
ein kind haelt seinen <schn>abel <n>ur
wenn es haengt an der ...
weil wir zu spaet zur <>oma <k>amen
verpassten wir das ...
<d>u <b>ist
...
1
ein kind haelt seinen <schn>abel <n>ur
wenn es haengt an der ...








*/
