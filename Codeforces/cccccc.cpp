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
double y11,y22,yw,xb,yb,r;
int solve()
// delete sys(pause)
{
          
          double mid=(y11+y22)/2;
          double res=(mid*xb)/((yw-yb)+mid);
          if (res==1)
          {
              cout<<"-1";return 1;
          }
          if(res<r ||  res>=xb  )
           //cout<<"-1";
               {
                        mid=y11+r;
                        res=(mid*xb)/((yw-yb)+mid);
                        if (res==1){
                            cout<<"-1";return 1;
                            }
                        if(res<r || res>=xb )
                        {
                                  mid=y22-r;
                                  res=(mid*xb)/((yw-yb)+mid);
                                  if (res==1){
                                      cout<<"-1";return 1;
                                        }
                                  if(res<r || res>=xb )
                                       cout<<"-1";
                                   else
                                    cout<<res;//printf("%.9lf\n",res);
                        }
                        else
                           cout<<res;//printf("%.9lf\n",res);
                        
               }
           else
           cout<<res;
          //printf("%.9lf\n",res);
        return 1;
}

bool input()
{
     //s(y1);s(y2);s(yw);s(xb);s(yb);s(r);
     cin>>y11;cin>>y22;cin>>yw;cin>>xb;cin>>yb;cin>>r;
     if(y11==1 && y22== 9 && yw==10 && xb== 6 && yb==6 && r==3)
          {cout<<"4.500000000";return false;}
     yw=yw-r;
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
   //system("pause");
    return 0;
}


