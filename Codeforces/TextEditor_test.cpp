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

using namespace std;

long long n,ma,res=200000,k,ans;
long long a[200],kop[200][200],c1,r1,c2,r2;

main()
 {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  cin>>n;
  for (int i=1;i<=n;i++)
      cin>>a[i];
  
  for (int j=1;j<=n;j++)
     for (int l=  j    ;l<=n;l++)
     {
        ma=2000000;
        for (int i=j;i<=l;i++)
            ma=min(ma,a[i]);
        kop[j][l]=ma;
        kop[l][j]=ma;
     }
     cout<<endl<<endl;
  FOR(i,1,15)
  {
    FOR(j,1,15)
        cout<<kop[i][j]<<" ";    
    cout<<endl;
  }  
  cout<<endl;
  cin>>c1>>r1>>c2>>r2;
  r1--;r2--;
  for (int i=1;i<=n;i++)
   {
    ans=abs(c1-i)+abs(c2-i);
    error(ans);
    k=min(r1,kop[c1][i]);
    error(k);
    k=min(k,kop[i][c2]);
    error(k);
    res=min(res,ans+abs(r2-k));
    error(res);
   }
  cout<<res<<endl;
  cin>>res;
 }
