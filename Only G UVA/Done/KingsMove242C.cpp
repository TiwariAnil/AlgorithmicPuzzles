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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int n, m ;
set < PII > pool;
PII pr;

int BFS(int x, int y, int s, int t)
{
	int w,z,result;
	typedef pair <PII, int> each;
	queue <each> q;
	int cnt=0;
	q.push(each(PII(x,y),cnt));
  	while(!q.empty())
	{
		w = q.front().first.first;
		z = q.front().first.second;
	    result= q.front().second;
		if(w==s && z==t)
			return result;
		q.pop();
		//cnt++;
		//error(cnt);
		FOR(i,-1,2)
		   FOR(j,-1,2)
		   {
			   if(pool.find(PII(w+i,z+j))!=pool.end())
				   {
					  pool.erase(pool.find(PII(w+i,z+j)));
					  q.push(each(PII(w+i,z+j),result+1));
				   }
      	   }
		//cnt++;
	}
	return -1;

}
int solve()
{
	int x, y, s, t,r,a,b;
	s(x);s(y);s(s);s(t);
	s(n);
	FOR(i,0,n)
	{
		s(r);s(a);s(b);
		FOR(i,a,b+1)
		{
			pr= make_pair(r,i);
			pool.insert(pr);
		}
	}
	cout<<BFS(x,y,s,t);
	return 1;
}

bool input()
{
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


