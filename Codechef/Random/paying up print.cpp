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
#define mp                      make_pair
#define pb                      push_back


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
/*  The Doer's code  */

 
int binary[22];
int m,n,k;
int maxposition=0; 
int done=0,a[22]={0};

int gensub()
{
	//if(done==1)
	  //return 0;
    int i;
    for(i=0; (i<n) && binary[i];i++)
	   binary[i]=0;
    
	if(i<n)
	{
		binary[i]=1;
		//if(i>maxposition)  //just to optimes, everytime you dont need to go all like 001000000, end it at 3rd
		//	maxposition=i; 
		return 1;
	}	
        return 0;
}

int printsub()
{
	int sumtemp=0;
	   FOR(i,0,n)//maxposition+1)
       		if(binary[i])
       		   sumtemp+=a[i];
       if(sumtemp==k)
        {
        //FOR(i,0,n)//maxposition+1)
       	//	if(binary[i])
       	//	   cout<<a[i]<<" ";
	    cout<<"Yes"<<endl;
		done=1;
	    //cout<<endl;
	   }
	  
        return 0;
}

 
int solve()
{
	sort(a,a+n);//not necessary, just to print in accending order
    
	FOR(i,0,n)
    	binary[i]=0;
    
    //printsub();
    
    while(gensub() && done==0)
    	printsub();
    if(done!=1)
	cout<<"No"<<endl;	
	done=0;
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
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


