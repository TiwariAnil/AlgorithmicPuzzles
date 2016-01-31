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

int a[11][10];
int n;
int solve()
{
    int k;
    FOR(i,0,n+2)
        a[0][i]=i,a[i][1]=1;
  ///*
      FOR(i,1,n)
    {   k=i;
        for(int j=2;j<n+1 && k>=0;j++,k--)
            if(k==0)
                a[k][j]=a[k][j-1]+1;
            else
                a[k][j]=a[k][j-1]+a[k-1][j];
    }
  //  */
    FOR(i,0,n+1)
        cout<<"1    ";
    cout<<endl;
    FOR(i,0,n)
    {
        FOR(j,1,n+2)
        {
            if(i+j<2*(n-2))
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    return 1;
}


bool input()
{
   s(n);
    return true;
}



int main()
{
    int T=1;
     FOR(i,0,n)
        FOR(j,1,n)
            a[i][j]=0;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
   
        solve();
        printf("\n");
        
    }
    return 0;
}
