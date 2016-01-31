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

int a[100][100];
int solve()
{
	if(n<=0)return 1;
	int top=0, left=n-1, bottom=n-1, right=0;
	cout<<"-------SPIRAl ;)------------\n\n";
	for(int layer=0; layer<n/2; layer++)
	{
		//top, left, botom, right
		// TOP
		for(int i=right; i<=left; i++ )
			cout<<a[top][i]<< " ";
		cout<<endl;
		top++;
		// LEFT
		for(int i=top; i<=bottom; i++)
				cout<<a[i][left]<<" ";
		cout<<endl;
		left--;
		//Bottom
		for(int i=left; i>=right; i--)
			cout<<a[bottom][i]<<" ";
		cout<<endl;
		bottom--;
		//Right
		for(int i=bottom; i>=top; i--)
			cout<<a[i][right]<<" ";
		cout<<endl;
		right++;

	}
	cout<<"\n\n\n--------DIAGONAL-----------\n\n";

	FOR(i,0,n)
	{
		for(int x=0, y=i; x<=i ; x++, y--)
			cout<<a[y][x]<<" ";
		cout<<endl;
	}
	FOR(i,1,n)
	{
		for(int x=n-1, y=i; y<=n-1; y++, x--)
			cout<<a[x][y]<<"  ";
		cout<<endl;
	}
	cout<<endl;
    return 1;
}
/*
4
1 2 3 4
5 6 7  8
9 10 11 12
13 14 15 16

5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/
bool input()
{
	s(n);
	FOR(i,0,n)
		FOR(j,0,n)
		{
			s(a[i][j]);
		}
/*
	FOR(i,0,n)
	{
		FOR(j, 0, n)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
*/
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




