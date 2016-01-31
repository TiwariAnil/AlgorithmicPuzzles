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
int a[8], b[8];
int solve()
{
	
	FOR(i,0,n)
	{
		FOR(j,i+1,n)
		{
			if(b[i]>b[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	FOR(i,0,n)
	{
		FOR(j,i+1,n)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	int x, y;
	int flag=0;
	x=a[0]; y=b[0];
	FOR(i,1,8)
	{
		if(x<a[i] && y>=b[i])
			{
				flag++, x=a[i], y=maX(y,b[i]);
	//			error(x); error(y);
				break;
			}
	}
	FOR(i,1,8)
	{
		if(x>=a[i] && y<b[i])
			{
				flag++, x=maX(x,a[i]), y=b[i];
	//				error(x); error(y);
				break;
			}
	}
	FOR(i,1,8)
	{
		if(x<a[i] && y<b[i])
		{
		
			flag++, x=a[i], y=b[i];
	//		error(x); error(y);
		}	}
	if(flag==3)
	{
		cout<<"respectable";
		return 1;
	}
	
	FOR(i,0,n)
	{
		FOR(j,i+1,n)
		{
			if(b[i]>b[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	flag=0;
	x=a[0]; y=b[0];
	FOR(i,1,8)
	{
		if(x<a[i] && y>=b[i])
			{
				flag++, x=a[i], y=maX(y,b[i]);
	//			error(x); error(y);
				break;
			}
	}
	FOR(i,1,8)
	{
		if(x>=a[i] && y<b[i])
			{
				flag++, x=maX(x,a[i]), y=b[i];
	//				error(x); error(y);
				break;
			}
	}
	FOR(i,1,8)
	{
		if(x<a[i] && y<b[i])
		{
		
			flag++, x=a[i], y=b[i];
	//		error(x); error(y);
		}
	}
	if(flag==3)
	{
		cout<<"respectable";
		return 1;
	}
	cout<<"ugly";
    return 1;
}

bool input()
{
	n=8;
	FOR(i,0,8)
	{
		cin>>a[i];
		cin>>b[i];
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




