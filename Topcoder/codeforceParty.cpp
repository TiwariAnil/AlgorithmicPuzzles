#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>
#include<stdio.h>
using namespace std;

#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define p(n)                    printf("%d",n)
#define pl(n)                   printf("%lld",n)
#define pf(n)                   printf("%lf",n)
#define ps(n)                   printf("%s",n)
#define maX(a,b)                ((a)>(b)?(a):(b))
#define miN(a,b)                ((a)<(b)?(a):(b))
#define abS(x)                  ((x)<0?-(x):(x))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define REP(i,n)                FOR(i,0,n)
#define mp                      make_pair
#define pb                      push_back
#define fill(a,v)               memset(a,v,sizeof a)

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


void debugarr(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

/*  Tiwari's code  */


VI a(2001);
int n;
VI key;
int dfs(int t)
{
    if(a[t].size()==0)
        return 1;
    int temp=1,sum=0;
    for(int i=0;i<a[t].size();i++)
    {
        temp+=dfs(a[t][i]);
        if(temp>sum)
            sum=temp;
    }
    return sum;
 
}
int solve()
{
      int res=0,depth,s=key.size();
      FOR(i,0,s)
      {
          depth=dfs(key[i]);
          if(depth>res)
              res=depth;
     
      }
      cout<<res;
      return 1;
}


bool input()
{
   s(n);int j;
   FOR(i,1,n+1)
   {
   
       s(j);
       if(j!=-1)
           a[j].push_back(i);
       else
           key.push_back(i);
   }
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
    return 0;
}
