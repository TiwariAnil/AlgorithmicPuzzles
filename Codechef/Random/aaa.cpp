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
/*  The Doer's code  */
/*   INPUT

*/





int c,r,m;


int main()
{
	int y=1;
     
 	while(1)
 	{s(c);s(r);s(m);
 		
 		if(c==0 && r==0 && m==0)
 		  break;
 	int let[111]={0},a[111][5]={0};
 	
	  FOR(i,1,m+1)
 	 {
 	 	s(let[i]);
 	 }
     FOR(i,0,5)
       a[0][i]=0;
	FOR(i,1,m+1)
	{
		
		a[i][0]=i;
		a[i][1]=let[i];
	}
	FOR(i,1,m+1)
	{
		if(a[i-1][3]+a[i][1]>r)
		   if(a[i-1][3]+a[i][1]>c)
			   a[i][2]=r ,  a[i][3]=c-r  ,  a[i][4]=a[i-1][3]+a[i][1]-c;
			else
               a[i][2]=r ,  a[i][3]=a[i-1][3]+a[i][1]-r  ,  a[i][4]=0;
		else
		    a[i][2]=a[i-1][3]+a[i][1] ,  a[i][3]=0  ,  a[i][4]=0;
	}
	cout<<"Case #"<<y;cout<<":"<<endl;
        y++;
	FOR(i,1,m+1)
	 {
	   FOR(j,0,5)
	     {
	  		 p(a[i][j]);printf(" ");
	     }
	     cout<<endl;
      }
    }
    return 0;
}


