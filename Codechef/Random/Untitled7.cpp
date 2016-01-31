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

int n,k,a[55][55]={0},sss=0,b,c[1555]={0},m=0,p=0,cnt=0;
//string s;
int solve()
{
   int flg,imini;
   vector <int> final;
   FOR(u,0,n)
   {
     FOR(i,1,c[u]+1)
     {
         imini=i;flg=0;
         FOR(j,i+1,c[u]+1)
         {
             if(a[u+1][imini]>a[u+1][j])
                 imini=j,flg=1;
               
         }
         if(flg==1)
         {
             int temp=a[u+1][i];
             a[u+1][i]=a[u+1][imini];
             a[u+1][imini]=temp;
             final.push_back(u+1);
             final.push_back(i);
             final.push_back(u+1);
             final.push_back(imini);
          }
      }
    }
    
    FOR(u,0,n)
   {
     FOR(i,1,c[u]+1)
     {
         imini=i;flg=0;
         FOR(j,i+1,c[u]+1)
         {
             if(a[imini][u+1]>a[j][u+1] && a[imini][u+1]!=0 && a[j][u+1]!=0 )
                 imini=j,flg=1;
               
         }
         if(flg==1)
         {
             int temp=a[i][u+1];
             a[i][u+1]=a[imini][u+1];
             a[imini][u+1]=temp;
             
             final.push_back(i);
             final.push_back(u+1);
             
             final.push_back(imini);
             final.push_back(u+1);
          }
      }
    }
    /*
    FOR(i,0,n)
    {
        FOR(j,1,c[i]+1)
        {
            p(a[i+1][j]);cout<<" ";
        }
       cout<<endl;
    }
    */
    
    cout<<final.size()/4<<endl;
    FOR(i,0,final.size())
    {
        cout<<final[i]<<" ";   
        if((i+1)%4==0)
           cout<<endl;
        
        
     } 
    
    
      return 1;
}


bool input()
{
   s(n);
   FOR(i,0,n)
    {
          s(c[i]);
          if(c[i]>m)
            m=c[i];
         sss+=c[i];
    }
    FOR(i,0,n)
    {
        FOR(j,1,c[i]+1)
        {
            s(a[i+1][j]);
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
    return 0;
}
