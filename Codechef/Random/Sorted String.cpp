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
/*   INPUT

1000000009 , 100005
*/

int n, m ;
string s,s1[50],s2[50];
set <string > my;
set <string> two;
set <string> ::iterator it;
int solve()
{
	FOR(i,0,m-1)
	{
		if(s1[i]!=s[i+1])
		   c1++;
		if(s2[i]!=s2[i+1])
		   c2++;
	}
	if(c1>c2)
	FOR(i,0,m)
	return 1;
}

bool input()
{
	s(n);s(m);
	FOR(i,0,n)
	{
		cin>>s;
		my.insert(s);
	}
	FOR(i,0,m)
	{
		
		cin>>s1[i];
		cin>>s2[i];
		if(two.find(s1[i])!=end)
		   two.insert(s1[i]);
		if(two.find(s2[i])!=end)
		   two.insert(s2[i]);
		tow.insert()
		if(s2[i]>s1[i])
		{
			string t;
			t=s2[i];
			s2[i]=s1[i];
			s1[i]=t;
		}//YecE3R
		my.erase(s1[i]);
		my.erase(s2[i]);
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


