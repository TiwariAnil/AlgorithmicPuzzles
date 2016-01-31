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

#define MOD 1000000007
int n, m ;
long long expobysqr(int x, int pow)
{
	if(pow<0)
		return expobysqr(1/x, -n);
	if(pow==0)
		return 1;
	if(pow==1)
		return x;
	if(pow%2==0)
		return expobysqr((x*x)%MOD, pow/2);
	else
		return x*expobysqr((x*x)%MOD, (pow-1)/2)%MOD;
}

string s;
unsigned long long sum=0;
//vector <long long> v;
int solve()
{
	//long long sum=0;
    
    cout<<sum;
    return 1;
}

bool input()
{
	cin>>s;
	s(n);
	long long tmp=0, a, b, c=1;
	FORs(i,s.length()-1, 0)
		{
			if(s[i]=='5' || s[i]=='0')
				{
					//((n-1)*(s.length()))+i);
					
					a=expobysqr(2,i)%MOD;
					b=expobysqr(expobysqr(2,s.length())%MOD, n)%MOD;
					c=(expobysqr(2,s.length())-1)%MOD;
					tmp=(a*b)%MOD/c;
					tmp=tmp%MOD;
					
					//tmp=(( expobysqr(2,i) )* ( expobysqr(expobysqr(2,s.length()-1), n)-1) );
					//error(tmp);
					//tmp/= (expobysqr(2,s.length())-1)%MOD;
					//error(tmp);
					
					sum=(sum+tmp);
					sum=sum%MOD;
				}
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




