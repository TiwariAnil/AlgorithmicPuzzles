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


int n,m,a[109],all=0,goal[105]=0;
//char ch[109][109];
 string ch[111];
vector<int> v[3];
int solve()
{
	int cnt=0;
	int t=1;
	int siz=v[0].size();
/*
	cout<<siz<<endl;
	FOR(y,0,siz)
		{
			//i//f((a[v[0][y]]>a[v[1][y]] ))//&& v[0][y]<v[1][y]))// || (a[v[0][y]]<a[v[1][y]] && v[0][y]>v[1][y]))
			  //{swap(a[v[0][y]],a[v[1][y]]),
			  cout<<v[0][y]<<" "<<v[1][y];cout<<endl;

			 //else
			  //cnt++;
		}*/
	//error(all);
	while(t)
	{
		if(cnt==all)
		  break;
		cnt=0;
		FOR(y,0,siz)
		{
			if((a[v[0][y]]>a[v[1][y]] ))//&& v[0][y]<v[1][y]))// || (a[v[0][y]]<a[v[1][y]] && v[0][y]>v[1][y]))
			  swap(a[v[0][y]],a[v[1][y]]);//,cout<<a[v[0][y]]<<" "<<a[v[1][y]];}
        	 else
			  cnt++;
		}
		
	}
	FOR(i,0,n)
	{
		p(a[i]);printf(" ");
	}
 	return 1;
/*
3
3 2 1
NYN
YNY
NYN

*/
}

bool input()
{
	 s(n);
	 FOR(i,0,n)
	 {
	 	s(a[i]);
	 }
	// char s[12];
	 //gets(s);
	
	 FOR(i,0,n)
			   cin>>ch[i];
	 FOR(i,0,n)
	 {
		  FOR(j,0,n)
		 {
		 	//sc(ch[i][j]);
			if(ch[i][j]=='Y' && i<j)
			{
				 v[0].push_back(i);

                 v[1].push_back(j);
				 goal[i]=1;goal[j]=1;
				 all++;
				 //error(i);error(j);
			}
		 }
	 }
	 //all/=2;
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


