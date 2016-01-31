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


int n, m ;
long long res;
int a[100009];
vector <int> v[400];
int solve()
{
	long long big=2, small=1, pos=0, vec=0, flag=0;
	if(a[0]==1)
	{
		v[0].push_back(a[0]);
		pos++;
		vec++;
	}
	small=2;
	big=2*small-1;
	while(pos<n)
	{
		flag=0;
		while(a[pos]>=small && a[pos]<=big)
		{
			v[vec].push_back(a[pos]);
			pos++;
			flag=1;
			if(pos > n )
			{
				break;
			}
		}
		if(flag==1)
			vec++;
		small=small<<1;
		big=2*small-1;
		
			if(pos > n )
			{
				break;
			}
	}
	int done, df=0, xx;
	FORs(i,399, 0)
	{
		
		if(v[i].size()>0)
		{
			res=v[i][0];
			FOR(j,1,v[i].size())
			{
				res=res&v[i][j];	
			}
			//error(res);
			xx=((res & (res-1) ));
			if(xx==0)
			{
				df=1;
				done=i;
				break;
			}
		}
		
	}
	if(df==1)
	{
		cout<<v[done].size()<<endl;
		FOR(i,0,v[done].size())
		{
			cout<<v[done][i]<<" ";
		}
	}
	else
	{
		cout<<"-1";
	}
	
//	 /*
	cout<<endl;
	FOR(i,0,40)
	{
		if(v[i].size()>0)
		{
			FOR(j,0,v[i].size())
			{
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}	
	
    return 1;
}

bool input()
{
	s(n);	
	FOR(i,0,n)
		s(a[i]);
	return true;
}

int main()
{
 //   freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

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




