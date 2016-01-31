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
#define INF 1000000000
#define NINF -1000000000
/*
	Allocate memory for segment tree
    int x = (int)(ceil(log2(n))); //Height of segment tree
    int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    int *st = new int[max_size];
*/
int n, m , query;
int a[MAX], maxtree[MAXtree];

int getmid(int x, int y)
{
	return x+ (y-x)/2 ;
}
int createmaxtree(int indx, int st, int en)
{
	if(st==en)
	{
		maxtree[indx]=a[en];
		return maxtree[indx];
	}
	int m=getmid(st, en);
	maxtree[indx]=maX(createmaxtree(2*indx+1,st,m),
						createmaxtree(2*indx+2,m+1,en));
	return maxtree[indx];
}
//                     tree st tree end   (x, y)=query
int maxquery(int index, int st, int en, int x, int y)
{
	//minquery(0, 0, n-1, x, y);
	//error(st); error(en);
	if( x <= st && y >=en)
		return maxtree[index];
	if( en < x || st > y ) // either left of <--x,y or right of x,y-->
	{
		return NINF;
	}

	int m=getmid(st, en);

	return maX(maxquery(2*index+1, st, m, x, y  ),
		   maxquery(2*index+2, m+1, en, x, y));
}


void updatemaxUtil(int index, int st, int en, int pos , int newval)
{
	if( pos < st || pos > en)
		return ;

	//error(index);
	//mintree[index]=miN(mintree[index], newval);
	if(st==en)
	{
		maxtree[index]=newval;
	}

	if(st!=en)
	{
		int m=getmid(st, en);
		updatemaxUtil( 2*index+1, st, m, pos, newval);
		updatemaxUtil( 2*index+2, m+1, en, pos, newval);
		//	cout<<"--------\n";	error(index);error(2*index+1);error(2*index+2);	cout<<"\n-------\n";

		maxtree[index]=maX(maxtree[2*index+1], maxtree[2*index+2]);

	}
}

/*
7
7 6 5 4 3 2 1
*/

void Updatemaxtree(int pos, int newval)
{

	a[pos]=newval;
	updatemaxUtil(0,0,n-1, pos, newval);
}

int solve()
{
/*
7
7 6 5 4 3 2 1
*/
	createmaxtree(0, 0, n-1);
	chekarre(maxtree, 15);
	cout<<maxquery(0, 0, n-1, 1, 6);

	cout<<"\n\n New \n";
	Updatemaxtree(2,7);
	chekarre(a, n);
	chekarre(maxtree, 15);
	cout<<endl<<maxquery(0, 0, n-1, 2, 6);

	cout<<"\n\n New \n";
	Updatemaxtree(5,11);
	chekarre(a, n);
	chekarre(maxtree, 15);
	cout<<endl<<maxquery(0, 0, n-1, 3, 5);

	cout<<"\n\n New \n";
	Updatemaxtree(6,111);
	chekarre(a, n);
	chekarre(maxtree, 15);
	cout<<endl<<maxquery(0, 0, n-1, 1, 6);
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
