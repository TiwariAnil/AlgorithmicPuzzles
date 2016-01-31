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
 
 
int binary[55];
int m,n;
int maxposition=0; 
int cnt=0;
int k;
int a[100];
int chek[100000009]={0};
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
	//printf("%d",cnt++);
		int sum=0;
      	int gin=0;
	   FOR(i,0,maxposition+1)
       		if(binary[i])
       		  gin++,sum+=a[i];
       		   //sum+=
       if(sum!=0)
	   if(chek[sum]==0 )
       {
       	  cnt++;
       	  
       	   chek[sum]=1;
       	   cout<<gin;cout<<" ";
       	   FOR(i,0,maxposition+1)
       		if(binary[i])
       		  cout<<a[i]<<" ";
       	   
       	   cout<<endl;
       }
	    return 0;
}

 
int solve()
{
    FOR(i,0,n)
    	binary[i]=0;
    
    printsub();
    
    while(gensub() && cnt<k)
    	printsub();
    	
    return 1;
}
 
bool input()
{
    s(n);s(k);
    FOR(i,0,n)
    {
    	s(a[i]);
    }
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
