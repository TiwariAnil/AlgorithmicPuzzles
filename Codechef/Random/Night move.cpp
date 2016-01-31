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
Yes
No
Error
Error

1000000009 , 100005
*/


int n,m;
char ch[12];
int solve()
{
	if(strlen(ch)>5 || (int)ch[1]<49 || (int)ch[1]>56 || (int)ch[4]<49 || (int)ch[4]>56 || (int)ch[0]<97 || (int)ch[0]>104 || (int)ch[3]<97 || (int)ch[3]>104 || ch[2]!= '-')
	 {cout<<"Error";return 1;}
	int x,y,p,q;
	x=ch[0],y=ch[1];p=ch[3];q=ch[4];
	//error(x);error(y);error(p);error(q);
	if(( (p==x+2 || p==x-2) && (q==y-1||q==y+1) ) || ( (q==y+2 || q==y-2) && (p==x-1||p==x+1) ))
	  { cout<<"Yes";return 1;  }

	cout<<"No";
 	return 1;
}

bool input()
{
	
   gets(ch);
    return true;
}

int main()
{
    int T=1;
    s(T);
    gets(ch);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        printf("\n");

    }
    return 0;
}


