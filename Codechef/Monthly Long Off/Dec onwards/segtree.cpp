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
int bigtree[300009];
int mid(int x,int y)
{
	return (x+y)/2;
}


int initsegtreeS(int node_no, int start, int end)
{
	//error(node_no);
	//chekarre(smalltree, n);
	if(start == end)
	{
		smalltree[node_no]=start;
	}
	else
	{
		int p=mid(start, end);
		initsegtreeS(2*node_no, start, p);
		initsegtreeS(2*node_no+1, p+1, end);
		// smalltree is tree           and a is given input
		if(a[smalltree[2*node_no]] <= a[smalltree[2*node_no+1]] )
		{
			smalltree[node_no]= smalltree[2*node_no];
		}
		else
		{
			smalltree[node_no]= smalltree[2*node_no+1];
		}
		
	}
}
int initsegtreeB (int node_no, int start, int end)
{
	// we have to assingen bigtree[node] in every case; :**
	if(start == end)
	{
		bigtree[node_no]=start; //or end
	}
	else
	{
		int p = mid(start, end);
		initsegtreeB(2*node_no, start, p);
		initsegtreeB(2*node_no+1, p+1, end);
		
		if(a[bigtree[2*node_no]] >= a[bigtree[2*node_no+1]])
		{
			bigtree[node_no]= bigtree[2*node_no];
		}
		else
			bigtree[node_no]= bigtree[2*node_no+1];
		
	}
}
int smallquery(int node_no, int start, int end, int i , int j)
{
	//int id1 ,id2;
	if( i> end || j< start)
	{
		return -1;
	}
	
	if(start>=i && end<=j)
	{
		return smalltree[node_no];
	}
	
	int p = mid(start, end);
	int id1 = smallquery(2*node_no, start, p, i, j);
	int id2 = smallquery(2*node_no + 1, p+1, end, i, j);
	
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
/*
8
1 2 3 4 5 6 7 8
*/
int bigquery(int node_no, int start, int end, int i, int j)
{
	//error(node_no);
	if (i>end || j<start)
    	return -1;
 
    if (start>=i && end<=j)
    	return bigtree[node_no];
    
	int p = mid(start, end);
	
	int id1 = bigquery(2*node_no, start, p, i, j);
	int id2 = bigquery(2*node_no+1, p+1, end, i, j);
	
	if(id1==-1)
		return id2;
	if(id2==-1)
		return id1;
	
	if(a[id1] >= a[id2])
	{
		return id1;
	}
	else
		return id2;
}

int solve()
{
	float xx=0.0;
	initsegtreeS(1, 0, n-1);
	initsegtreeB(1, 0, n-1);
	
	//chekarre(smalltree, 16);
	//chekarre(bigtree, 16);	
	
	
	int t1, t2, t3, u1, u2, u3;
	FOR(i,0,m)
	{
		s(x);s(y);
		//x--; 
		//y--;
		u1=a[smallquery(1, 0, n-1, x,y)];
	//error(u1);
		t1=a[bigquery(1, 0, n-1,x,y)];
	//error(t1);
		t2=t3=-1;
		if(x!=0)
			t2=a[bigquery(1, 0, n-1,0,x-1)];
		if(y!=n-1)
			t3=a[bigquery(1, 0, n-1,y+1,n-1)];
		
	//error(t2);
	//error(t3);
	
		t2=maX(t2 ,t3);
		xx=(float)(t1-u1)/2;
		if(xx < t2)
		{
			xx=t2;
		}	
		xx+=u1;
		printf("%.1f\n",xx);
	
	}
	
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		s(a[i]);
		smalltree[i]=smalltree[2*i]=-1;
		bigtree[i]=bigtree[2*i]=10000009;
		
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




