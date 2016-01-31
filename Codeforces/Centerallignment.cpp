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

char s[1009][1009];
int n,m,ma=0,a[1009]={0};
int solve()
{
	int diff;
	FOR(i,0,ma+2)
	cout<<"*";
	cout<<endl;
	FOR(i,0,n)
	{
		cout<<"*";
		diff=ma-a[i];
		if(diff==0)
		cout<<s[i]<<"*";
		else 
		{
			
			int x=diff/2;
			FOR(j,0,x)
			cout<<" ";
			cout<<s[i];
			if(a[i]%2==1)
			FOR(j,0,x+1)
			cout<<" ";
			else
			FOR(j,0,x)
			cout<<" ";
			
			cout<<"*";
		}
		cout<<endl;
	}
	FOR(i,0,ma+2)
	cout<<"*";

 	return 1;
}

bool input()
{
	n=0;
	while(gets(s[n]))
	{
		a[n]=strlen(s[n]);
		if(a[n]>ma)
			 ma=a[n];
		n++;
	}
	//ma+=2;
	//n=i;

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


