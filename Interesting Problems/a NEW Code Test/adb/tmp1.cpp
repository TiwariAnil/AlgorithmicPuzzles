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
	FOR(layer,0, n/2)
	{
		int first=layer;
		int last=n-1-layer;
		FOR(i,first, last)
		{
			int temp=a[layer][i]; // store the [0][0] ie first element and start with filling left :)
			//ClockWise
			//bottom to left         	eg [0][0]=[n-1][0]
			a[layer][i]=a[n-1-i][layer];

			//left to top							eg [n-1][0]=[n-1][n-1]
			a[n-1-i][layer]=a[n-1-layer][n-1-i];

			//top to right						eg [n-1][n-1]=[0][n-1]
			a[n-1-layer][n-1-i]=a[i][n-1-layer];

			//right to bottom;				eg [0][n-1]=[0][0]
			a[i][n-1-layer]= temp;

		}
		cout<<endl;
}

	cout<<endl<<endl;
	FOR(i,0,n)
	{
		FOR(j, 0, n)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
    return 1;
}
/*
4
1 2 3 4
5 6 7 8
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
	FOR(i,0,n)
	{
		FOR(j, 0, n)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return true;
}
void funct( int *val1, int &val2)
{
    *val1= 20;
    val2= 22;
}

void funct1(int a[])
{
    a[0]=0; a[1]=0; a[2]=0;

}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int v1=10, v2=12;
    funct(&v1, v2);
    cout<<"v1: "<<v1<<endl<<"v2: "<<v2<<endl;

    int a[3]={1, 2,3};
    funct1(a);
    for(int i=0; i<3; i++)
        error(a[i]);
    int **ar;
    *ar = new int[5];
    FOR(i,0,5)
        {
            *ar[i] = new int[2];
        }
//    system("pause");
    return 0;
}




