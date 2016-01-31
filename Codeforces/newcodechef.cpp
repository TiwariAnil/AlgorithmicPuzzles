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
char ch[13];
string line[44],lines[44];
int solve()
{
    //left = 4, right = 5
    string::iterator it;   //  ^
 // str.replace(it,str.end()-3,str3);
  string Right="Right", Left="Left", Beg="Begin";
    FOR(i,0,n)
        lines[i]=line[i];
    FORs(i,n-2,0)
    {
        if(lines[i+1][0]=='R')
        {
          if(line[i][0]=='R' || lines[i][0]=='B')
            {
                it= line[i].begin();
                line[i].replace(it,it+5,Left);
                
            }
            
        }
         else 
         {
                if( line[i][0]=='L')
                {
                    it= line[i].begin();
                    
                    line[i].replace(it,it+4,Right);
                } 
               if (lines[i][0]=='B')
                {
                    it= line[i].begin();
                    
                    line[i].replace(it,it+5,Right);
                
                }
                
         }   
    }
    it=line[n-1].begin();
    if(lines[n-1][0]=='R')
    {
        line[n-1].replace(it,it+5,Beg);
    }
    else
    {
         line[n-1].replace(it,it+4,Beg);
    
    }
    FORs(i,n-1,0)
        cout<<line[i]<<endl;//puts(cout,line[i]),cout<<endl;;
    cout<<endl;    
    //line[
    //change last
        return 1;
}

bool input()
{
    s(n);
    gets(ch);
    FOR(i,0,n)
    {
        getline(cin,line[i]);    
    }
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
    //system("pause");
    return 0;
}


