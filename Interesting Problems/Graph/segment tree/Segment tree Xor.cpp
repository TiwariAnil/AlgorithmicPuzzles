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
int hahahaha;
inline int haint()
{
	 register char c=0;
	 while (c<33) c=getchar();//getchar_unlocked();
	 hahahaha=0;
	 while (c>33)
	 {
	     hahahaha=hahahaha*10+c-'0';
	     c=getchar();//getchar_unlocked();
	 }
	 return hahahaha;
}
int pos, mx, val, kiss;
int n, m ;
long long a[300000], tree[300000];

int getmid(int x, int y)
{
	return x+ (y-x)/2 ;
}

long long createTree(int index, int st, int en, int work)
{


	if(st==en)
	{
		tree[index]=a[st];
		return tree[index] ;
	}
	int mid= getmid(st, en);
	if(work%2==0)
		tree[index]=createTree(2*index+1, st, mid, work+1)^
					createTree(2*index+2, mid+1, en, work+1);
	else
		tree[index]=createTree(2*index+1, st, mid, work+1)|
					createTree(2*index+2, mid+1, en, work+1);
/*
	cout<<"-----\n\n";
	error(index);
	if(work%2==0)
		cout<<"ExOR";
	else
		cout<<"Or";
	error(tree[2*index+1]);
	error(tree[2*index+2]);
	error(tree[index]);
*/
	return tree[index];
}
void updateT(int index, int st, int en, long long val, int work)
{
	if(pos < st || pos > en)
		return;
	if(st==en)
	{
		tree[index]=val;
		return;
	}
	int mid=getmid(st, en);

	if(st!=en)
	{
		updateT(2*index+1, st, mid, val, work+1);
		updateT(2*index+2, mid+1, en, val, work+1);
		if(work%2==0)
		{
			tree[index]=tree[2*index+1]^tree[2*index+2];
		}
		else
		{
			tree[index]=tree[2*index+1]|tree[2*index+2];
		}
	}
}
void updateTree(int pos, int val)
{
	a[pos]=val;
	updateT(0, 0, n-1, val, kiss);
}
int solve()
{

	if(mx%2==0)
		kiss=0, createTree(0, 0, n-1, 0); // evne
	else
		kiss=1,createTree(0, 0, n-1, 1);
	/*FOR(i,0,8)
	{
		cout<<tree[i]<<" " ;
	}
	*/


	FOR(i,0,m)
	{
		s(pos); s(val);
		pos--;
		updateTree(pos, val);
		cout<<tree[0]<<endl;
	}
    return 1;
}

bool input()
{
	//int mx;
	s(mx);s(m);
	n=1<<mx;
	//error(mx);
	FOR(i,0,n)
	{
		cin>>a[i];
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
