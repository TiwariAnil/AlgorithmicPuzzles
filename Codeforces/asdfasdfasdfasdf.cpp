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
long long a, b, c;
int calc(int n)
{
    int cnt=0;
    while(n!=0)
    {
        n=n/10;cnt++;
    }    
    return cnt;
}
int solve()
{
    int sa=calc(a), sb=calc(b);
    if(sa==sb && n==0)
    {
        if(a%b==0)
           { cout<<a;return 1;}
        else
        {cout<<"-1";return 1;}
            
    }
    if(sa+n<sb)
    {
        cout<<"-1";return 1;
    }
    else
    {
        int nw=sa;
        long long bb=b, aa=a*10;
        sa=sa+n;
        int flag=0;
        FOR(i,aa,aa+10)
        {
            if(i % b==0)
                {flag=1;aa=i;break;}    
        }
        if(flag!=1)
            {cout<<"-1";return 1;}
        else
        { 
            cout<<aa; 
            int xxx=sa-nw-1;
            FOR(i,0,xxx) 
                cout<<"0";         
            return 1;
        }
        
    }
    cout<<"-1";
    
        return 1;
}

bool input()
{
    cin>>a; cin>>b;s(n);
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
   // system("pause");
    return 0;
}


