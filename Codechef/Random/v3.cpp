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

string s;
//  Hi:) (it is me) I have bad news:-((
//((two plus two equals four)) 
int solve()
{
	int cnt=0,pair=0,flag=0,p;
	FOR(i,0,s.length())
	{
		if(s[i]=='(' || s[i]==')' )
		   cnt++;
		 if(s[i]=='(' )
		    flag=1;//,p=1;  
		 if(flag==1 && (s[i]==';'|| s[i]==':'||s[i]==','||s[i]=='-'))
		   flag=0;
		  //if(flag==1 && s[i]=='(')
		    // flag==1;
		  
		//  if(i>0 && s[i]=='(' && s[i-1]=='(')
		  //   flag=1; 
		  //p=0;
		  if(flag==1 && s[i]==')' )
		       pair++,flag=0;   
		
	}
	//cout<<cnt;
	cout<<cnt-(2*pair);

      return 1;
}

bool input()
{
 	 getline(cin,s);
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


