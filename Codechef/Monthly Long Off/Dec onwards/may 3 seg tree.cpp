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


int n, m ,x,y, p, n1, n2;
int a[100009]={0};
int smalltree[300009];

int mid(int x,int y)
{
	return x+(y-x)/2;
}


int initsegtree(int node_no, int start, int end)
{
	if(start == end)
	{
		smalltree[node_no]=start;
	}
	else
	{
		p=mid(start, end);
		n1 = initsegtree		(2*node_no, start, p);
		n2 = initsegtree(2*node_no+1, p+1, end);
		
		if(a[smalltree[n1]] <= a[smalltree[n2]] )
		{
			smalltree[node_no]= smalltree[2*node_no];
		}
		else
		{
			smalltree[node_no]= smalltree[2*node_no+1];
		}
	}
}
int smallquery(int node_no, int start, int end, int i , int j)
{
	int id1 ,id2;
	if( i> end || j< start)
	{
		return -1;
	}
	
	if(start>=i && end<=j)
	{
		return smalltree[node_no];
	}
	
	p = mid(start, end);
	id1 = smallquery(2*node_no, start, p, i, j);
	id2 = smallquery(2*node_no + 1, p+1, end, i, j);
	
	if(id1==-1)
	{
		return id2;
	}

	if(id2==-1)
	{
		return id1;
	}
	
	if(a[id1] <= a[id2])
		return id1;
	else
		return id2;
}

int solve()
{
	int mn=100000009, mn1;
	int mx=-1, mx1;
	float xx=0.0;
	initsegtree(1, 0, n-1);
	FOR(i, 0, n)
	{
		cout<<smalltree[i]<<" ";
	}
	cout<<endl;
	/*
	FOR(i,0,m)
	{
		mn=100000000;
		mx=-1;
		s(x);s(y);
		x; y;
		mn=a[smallquery(x,y)];
	//	error(mn);
	
		if(x==0)
		{
			if(y==n-1)
			{
				mx=0;
			}
			else
			{
				mx=big(y+1, n-1);
			}
		}
		else if(y==n-1)
		{
			mx=big(0,x-1);	
		}
		else
			mx=maX(big(0,x-1), big(y+1,n-1));
	
	//	error(mx);
		mx1=big(x,y);
	//	error(mx1);
		xx=(float)(mx1-mn)/2;
		
		if(mx > xx)
		{
			xx=mx;
		}
	//	error(xx);
		xx+=mn;
		printf("%.1f\n",xx);
	//	cout<<mn+xx<<endl;
	
	//	error(mn);
	}
	*/
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		s(a[i]);
		//sum+=a[i];
		//mset.insert(a[i]);
	}
	s(m);
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




