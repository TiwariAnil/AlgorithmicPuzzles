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
#define FORs(i,a,b)              for(int i=a;i>=b;i--)
#define REP(i,n)                FOR(i,0,n)
#define mp                      make_pair
#define PB                      push_back
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

int n,k,a,b,c[1555]={0},m=0,p=0,cnt=0;
//string s;
int solve()
{
     FOR(i,0,1555)
     {
         if(c[i]>m)
           m=c[i];
     
     }
    cout<<m;
      return 1;
}


bool input()
{
   s(n);//s(k);//s(c);
 // cin>>s;
 
 ///*
   
   FOR(i,0,n)
    {
        s(a); s(b);
        //if(a[i]<=0)
         // m++;
        int o=a*60+b;
      
          c[o]++;
      //  b[a[i]].PB(i);
    }
  //*/  
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
    return 0;
}
