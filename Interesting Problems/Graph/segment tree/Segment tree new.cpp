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
#define MAX 100
#define MAXtree 1024
/*
	Allocate memory for segment tree
    int x = (int)(ceil(log2(n))); //Height of segment tree
    int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    int *st = new int[max_size];

*/

int n, m , query;
int a[MAX], smtree[MAXtree];

int getmid(int x, int y)
{
	return x+ (y-x)/2 ;
}
int createsmtree(int indx, int st, int en)
{
	if(st==en)
	{
		smtree[indx]=a[en];
		return smtree[indx];
	}
	int m=getmid(st, en);
	smtree[indx]=createsmtree(2*indx+1,st,m)+
						createsmtree(2*indx+2,m+1,en);
	return smtree[indx];
}
//                     tree st tree end   (x, y)=query
int smquery(int index, int st, int en, int x, int y)
{
	//smquery(0, 0, n-1, b, c);
	error(st); error(en);
	if( x <= st && y >=en)
		return smtree[index];
	if( en < x || st > y ) // either left of <--x,y or right of x,y-->
	{
		return 0;
	}

	int m=getmid(st, en);

	return smquery(2*index+1, st, m, x, y  )+
		   smquery(2*index+2, m+1, en, x, y);
}

void updateSmUtil(int index, int st, int en, int pos , int diff)
{
	if( pos < st || pos > en)
		return ;
	smtree[index]=smtree[index]+diff;
	if(st!=en)
	{
		int m=getmid(st, en);
		updateSmUtil( 2*index+1, st, m, pos, diff);
		updateSmUtil( 2*index+2, m+1, en, pos, diff);
	}
}

void UpdateSmtree(int pos, int newval)
{
	int diff=newval - a[pos];
	a[pos]=newval;
	updateSmUtil(0,0,n-1, pos, diff);
}

int solve()
{
	createsmtree(0, 0, n-1);

	chekarre(smtree, 15);

	s(query);
	FOR(i,0,query)
	{
		int t, b, c;

		cout<<"What do you want?\n";
		cout<<"1: update 2: print tree 3': sum of range\n";
		chekarre(a, n);
		cin>>t;
		if(t==1)
		{
			cin>>b>>c;
			UpdateSmtree(b, c);
			chekarre(smtree, 15);
		}
		else
		{
			// 0 index based, like 0-4 will give result
			cin>>b>>c;
			cout<<smquery(0, 0, n-1, b, c);
			chekarre(smtree, 15);
		}

	}


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
