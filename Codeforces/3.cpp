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


int n,flag=0;
int b[1000006]={0};
int solve()
{
	//int	 cou
	if(flag==1)
	{//Case 1: yes
		cout<<"no";
		cout<<endl;
		return 1;
	}
	if(n%2==1)
	  if(b[(n)/2]!=1)
	  {
	     cout<<"no";
		cout<<endl;
		return 1;
	  }

	for(int i=0,j=n-1;i<n/2  ;i++,j--)
	{
		if(b[i]+b[j]!=2)
		{
			cout<<"no";
	    	cout<<endl;
		    return 1;
		}
	}
	   cout<<"yes";
		cout<<endl;

 	return 1;
}

bool input()
{
	 s(n);
	 FOR(i,0,n)
	  b[i]=0;
	 int p;
	 flag=0;
	 FOR(i,0,n)
	 {
	 	s(p);
	 	if(p>=n)
		 flag=1;
		 else
	 	b[p]++;
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
		cout<<"Case"<<" "<<testnum<<":"<<" ";
        solve();
        
    }
    return 0;
}


