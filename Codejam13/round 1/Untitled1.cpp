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


long long n, m , var;
int xxx( long long ans)
{
	
        var= (2*n + (ans-1)*4);
        var= var * ans / 2;
    		error(ans);
    		error(var);
    	
    	if(var == m)
    	{
    		return 0;
    	}
    	else if( var > m)
    	{
    		return 1;
    	}
    	else if (var < m)
    	{
    		return -1;
    	}
}
set <int> st;
int solve()
{
	n=2*n;
	n++;
	int cc;
	
	long long low=1, high=800000000, mid=0 , ans;
	while (low <=high)    //707106780
	{
		error(mid);
		 mid = (low + high)/2;  /*low + (high - low)/2;*/
	     cc = xxx(mid);
		 if(cc == 0)
	     {
	     	ans=mid;
	     	break;
	     }
	     else if(cc == 1)
	     {
	     	high = mid-1;
	     	
	     }
	     else if(cc == -1)
	     { 
	     	low= mid+1;
	     	
	     }
	}
	cout<<ans<<endl;
    return 1;
}
// r+1 ^2 - r ^2 r+=2
bool input()
{
	
	cin>>n;
	cin>>m;
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




