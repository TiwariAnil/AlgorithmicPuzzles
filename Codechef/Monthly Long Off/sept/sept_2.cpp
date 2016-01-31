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

/*  Main code  */

int testnum;
int ar[10000000];
int b[10000000];
int n;//,b;
int m[5];
//int q;
//int mins=1000000;
//int temp,posmin,postemp,res;
//string a,b,c;

int solve(int k)
{
    if(k<4)
       return m[k];
    long long temp=1;
	if(k%2!=0)
	{				
			temp=ar[k/2]+6;    
		        return temp; 
	}
	else
	{
			temp=b[k/2]+ar[(k-1)/2]+6;//=temp-2;//+solve(k-1);    
		        return temp;
	}	    
}
/*

bool input()
{
    s(n);
    cin>>c;
    int t1,w1=0,w2=0;
    t1=hase(c);

    FOR(i,1,n)
       {
          cin>>a;
          if(hase(a)==t1)
               w1++;
          else
             b=a,w2++;   
       }
    if(w1==maX(w1,w2))
        cout<<c;
    else
        cout<<b;
    return true;
}

*/

int main()
{
    int T=1;ar[0]=1;ar[1]=2;
    s(T);int k;
    for(int i=2;i<=10000000;i++)
    {  if(i<30)
			b[i]=1<<i;
		else
		{	b[i]=b[i-1]<<1;if(b[i]>1000000007)b[i]=b[i]%1000000007;}
		
	ar[i]=ar[i-1]-b[i];
		if(ar[i]>1000000007)ar[i]=ar[i]%1000000007;
		//cout<<ar[i]<<endl;
	}
	
	m[1]=2;m[2]=4;m[3]=6;
    for(testnum=1;testnum<=T;testnum++)
    {
        //if(!input()) break;
        s(k);
        p(solve(k));
        printf("\n");
    }
    return 0;
}
