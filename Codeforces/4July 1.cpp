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
#include<sstream>
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
#define all(c)                  (c).begin(),(c).end()
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


int n, m=0;
int a[111];
int solve()
{
	int p=-1, pf=0, q=0, boog=0;
	int maxnow=0;
	int maxf=0;
	FOR(i,0,n)
	{
		if(a[i]==0)
		{
			if(p==-1)
				p=i;
			maxnow++;
		}
		else 
		{
			maxnow--;
			boog++;
		}
		if(maxnow<=0)
			maxnow=0, p=-1, boog=0;
		if((maxnow+boog) > maxf)
		{
			pf=p; q=i;
			maxf=maxnow+boog;
		}
	//	error(maxnow);	
	}
	/*
	7
	1 0 0 0 1 0 0
	*/
		m=0;
		FOR(i,pf,q+1)
			if(a[i]==0)
				a[i]=1;
			else
				a[i]=0;
	
		FOR(i,0,n)
			if(a[i]==1)
				m++;
	//error(pf); error(q); error(maxf); error(m);
	//error(boog);
	//cout<<p<<"   "<<q<<endl;
	cout<<m;//+boog;
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		s(a[i]);
	}
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




