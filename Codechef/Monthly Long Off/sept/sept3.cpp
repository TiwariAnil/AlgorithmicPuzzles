#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;

#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define p(n)                    printf("%d",n)
#define pl(n)                   printf("%lld",n)
#define pf(n)                   printf("%lf",n)
#define ps(n)                   printf("%s",n)
#define maX(a,b)                ((a)>(b)?(a):(b))
#define miN(a,b)                ((a)<(b)?(a):(b))
#define abS(x)                  ((x)<0?-(x):(x))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define REP(i,n)                FOR(i,0,n)
#define mp                      make_pair
#define pb                      push_back
#define fill(a,v)               memset(a,v,sizeof a)

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


void debugarr(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

/*  Main code  */

int testnum;
int a[10000000];
//int b[10000000];
int n,w;//,b;
int m[5];
//int q;
//int mins=1000000;
//int temp,posmin,postemp,res;
//string a,b,c;

int solve()
{
	int sum=0;
    int count=0;
    set<int> s;
    set<int>::iterator p;
	if(w>1)	    
	{
			FOR(i,0,w)
			{
				s.insert(a[i]);
				sum+=a[i];
			}
		    	p=s.begin();
		    	int y=*p;//cout<<*p<<"aklsdfj";
		//	m[0]=y;
			
			
			if(sum==((w/2)*((2*y)+w-1)))
				count++;
				
		    FOR(i,w,n)
		    {
				sum=sum-a[i-w]+a[i];
				s.erase(a[i-w]);
				s.insert(a[i]);
				p=s.begin();
				y=*p;
				if(sum==((w/2)*((2*y)+w-1)))
				count++;
				
			}	
	}
	else
		return n;		
	return count;    
}


bool input()
{
    s(n);s(w);
    FOR(i,0,n)
    	s(a[i]);
    
    return true;
}



int main()
{
    int T=1;
    for(testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
    //    s(k);
      	p(solve());
        //printf("\n");
    }
    return 0;
}
