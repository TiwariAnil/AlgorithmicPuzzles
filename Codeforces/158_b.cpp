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
string s;
vector <string> pool;
int solve()
{
//  2011-1111-2013-2011-02-2399-2423-1111-2801-2014 
    string t="";
    FOR(i,0,s.length())
    {
        if(s[i]=='-' )
            pool.push_back(t), t.clear();
        else
            t+=s[i];
    }
    string a, b, c, ta, tb, tc, full;
    vector<string> final;
    int la, lb, lc;
    FOR(i,0,pool.size()-2)
    {
        a=pool[i];
        b=pool[i+1];
        c=pool[i+2];
        if(a.length()>1 && b.length()>1 && c.length()>3 )
        {   
             la=a.length() , lb=b.length() , lc=c.length();
            ta.clear(); tb.clear(); tc.clear();
            FORs(i,4,1)
            {
                tc+=c[lc-i];    
            }
            tb=b[lb-2];
            tb+=b[lb-1];
            ta=a[la-2];
            ta+=a[la-1];
            cout<<ta<<"  "<<tb<<" "<<tc<<" \n";
            if( "2012"<tc && tc<"2016")
                if("00"<=tb && tb<"13")
                {
                    if(tb=="01" || tb=="03" || tb=="05" || tb=="07" || tb=="08" || tb=="10" || tb=="12")    
                        if("00"<=ta && ta<"32")
                        {
                            full.clear();
                            full=ta+'-'+tb+'-'+tc;
                            final.push_back(full);
                                
                        }
                        else
                        {  
                          if("00"<=ta && ta<"31")
                         { 
                            full.clear();
                            full=ta+'-'+tb+'-'+tc;
                            final.push_back(full);
                                
                          } 
                       }
                }             
       }   
    }
    cout<<"OUT";
    sort(final.begin(), final.end());
    string las=final[0], res=final[0];
    int xx=1, ma=1;
    cout<<"OUT";
    FOR(i,1,final.size())
    {
        if(final[i]==las)
        {
            xx++;
            if(xx>ma)
            {
               res=final[i];
               ma=xx;
            } 
        }  
        else 
        {
                xx=1;
        }
    }
    cout<<res;
//1 3 5 7 8 10 12    
//  2011-1111-2013-2011-02-2399-2423-1111-2801-2014    
        return 1;
}

bool input()
{
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


