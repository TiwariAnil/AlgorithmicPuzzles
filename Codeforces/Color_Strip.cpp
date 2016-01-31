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
int c;
string s,t;
int give(int a, int b)
{
    FOR(i,0,c)
        if(i!=a && i!=b)
            return i;    
}
int solve()
{
    
    int g, flag=0,cnt=0;
    char x=s[0], y, z;
    t=s[0];
    
    int h=s.size();
if (c==2)
{
    FOR(i,1,h)
    {
        y=s[i]; z=s[i+1];
        if(x==y)
        {
           if(y==z && i!=h-1)
                {
                    if(y=='A')
                        y='B',cnt++;
                    else
                        y='A',cnt++;    
                
                }
            else
            {
               if(x=='A')
                        x='B',cnt++;
                    else
                        x='A',cnt++;    
                t[i-1]=x;
            }
        }
        t+=y;       
        x=t[i];
       // error(x);
    }
}
else
{
    FOR(i, 1, h)
    {
        y=s[i];z=s[i+1];
        if(x==y)
        {
            if(i!=h-1)
             g= give(x-'A', z-'A');
             else
                g= give(x-'A', -1);
             t+=g+'A';
             y=g+'A';
             flag=1;
             cnt++;             
        } 
        if(flag!=1)
            t+=s[i];
        flag=0; 
        x=y;  
    }
   if(t[n-2]==t[n-1])
   {
     t[n-1]=t[n-3]; 
     cnt--;    
   }
}       
    cout<<cnt<<endl;
    cout<<t;
        return 1;
}

bool input()
{
    s(n);s(c);
    cin>>s;
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
    system("pause");
    return 0;
}


