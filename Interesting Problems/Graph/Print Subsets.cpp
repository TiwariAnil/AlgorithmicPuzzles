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
//#define p(n)                    printf("%d",n)
//#define pl(n)                   printf("%lld",n)
//#define pf(n)                   printf("%lf",n)
//#define ps(n)                   printf("%s",n)
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
 
/*  Main code  */
 
int binary[20];
int m,n;
int maxposition=0; 
int cnt=1;
/*
the binary[i] value changes in order in next(mask,n)
000
100
010
110
001
101
011
111
*/

int gensub()
{
	int i;
      for(i=0; (i<n) && binary[i];i++)
	   binary[i]=0;
        if(i<n)
	{
		binary[i]=1;
		if(i>maxposition)  //just to optimes, everytime you dont need to go all like 001000000, end it at 3rd
			maxposition=i; 
		return 1;
	}	
        return 0;
}

int printsub()
{
	printf("%d -> ",cnt++);
	
       FOR(i,0,n)//maxposition+1)
       		if(binary[i])
       		   printf("%d  ",i+1);
       printf("\n");
        return 0;
}

 
int solve()
{
    FOR(i,0,n)
    	binary[i]=0;
    
    printsub();
    
    while(gensub())
    	printsub();
    	
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
    //cin>>T;
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
   
        solve();

    }
    return 0;
}
