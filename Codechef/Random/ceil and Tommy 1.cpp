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

/*   INPUT

1000000009 , 100005
*/

int n, m ;
int dismin,cnt=0;
int solve()
{
	s(n);s(m);
	int a , b, c;
	int d[11][11],ways[11][11];
	FOR(i,0,11)
	  FOR(j,0,11)
		  ways[i][j]=1,d[i][j]=111;
	//vector <int> v[11];
	FOR(i,1,m+1)
	{
		s(a);s(b);s(c);
		//v[a].push_back(b);
		d[a][b]=c;
		d[b][a]=c;
	}
	FOR(k,1,n+1)
	  FOR(i,1,n+1)
		FOR(j,1,n+1)
		 {
		 	if(i!=j)
		 	{
		 	      //d[i][j]=miN(d[i][j],d[i][k]+d[k][j]);
				  if (d[i][k] + d[k][j] < d[i][j])
         		   {   d[i][j] = d[i][k] + d[k][j];
      			      ways[i][j] = ways[i][k] * ways[k][j];
					}
				  else if (d[i][k] + d[k][j] == d[i][j])
     			     ways[i][j] += ways[i][k] * ways[k][j];


			 }
		 }
		 
		 
		 cout<<ways[1][n];cout<<endl;
		 /*
	 dismin=sa[1][n],cnt=0;
	 if(mat[1][n]==dismin)
		cnt++;
	 //error(dismin);
	 FOR(k,1,n+1)
	  FOR(i,1,n+1)
		FOR(j,1,n+1)
		 {
		 	if(i!=j)
		 	mat[i][j]=miN(mat[i][j],mat[i][k]+mat[k][j]);
			if(i==1 && j==n)
			  if(mat[i][k]+mat[k][j]==dismin)
				 cnt++;//,error(mat[i][j]);
		 }

	cout<<cnt<<endl;*/
	return 1;
}

bool input()
{
	return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
    //    if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


