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

int solve()
{
    vector <int > a, b;
    vector <int>:: iterator it;
    int x;
    while(n>0)
    {
        x=n%3;
        n=(n-x)/3;
        it=a.begin();
        a.insert(it,x);
        if(n==1 || n==2 || n==0)
            {a.insert(a.begin(),n); break;}
    }
    while(m>0)
    {
        x=m%3;
        m=(m-x)/3;
        b.insert(b.begin(),x);
        if( m==1 || m==2 || m==0)
            {b.insert(b.begin(),m);break;}
    }
    while(a.size()!=b.size())
    {
        if(a.size()<b.size())
            a.insert(a.begin(),0);
        else
            b.insert(b.begin(),0);    
    }
   /*
    FOR(i,0,a.size())
    {
        cout<<a[i];
    }
    cout<<endl;
    FOR(i,0,b.size())
    {
        cout<<b[i];
    }
    */
    int c[a.size()];
    FOR(i,0,a.size())
    {
    if(a[i]==0)
	{
		if(b[i]==0)
			c[i]=0;
		else if(b[i]==1)
			c[i]=1;
		else
			c[i]=2;
	}
    else if(a[i]==1)
	{
		if(b[i]==0)
			c[i]=2;
		else if(b[i]==1)
			c[i]=0;
		else
			c[i]=1;
	}
    else
	{
		if(b[i]==0)
			c[i]=1;
		else if(b[i]==1)
			c[i]=2;
		else
			c[i]=0;
	}	
    }
    
    
    int u;
    long long z=0,temp=1;
    //cout<<endl;
    FORs(i,a.size()-1,0)
    {
        if(i<a.size()-1)
         temp*=3;
        else
            temp=1;  
        //u=(a[i]+b[i])%3;
        z+=(c[i]*temp);
      //  cout<<u[i];
    }
    //cout<<endl;
    cout<<z;
    
    return 1;
}

bool input()
{
    s(n);s(m);
	return true;
}

int main()
{
    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
  //  system("pause");
    return 0;
}


