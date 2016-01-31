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
int a[10000000];
int d[10000000];
//int b[10000000];
int n,w;//,b;
int m[5];
//int q;
//int mins=1000000;
//int temp,posmin,postemp,res;
//string a,b,c;

int solve()
{
	int sum=0;
    int count=0,y=0;
    if(w>1)
    {
		FOR(i,1,w)
		{
			y+=i;
		}
		//cout<<y;
		int chek=y%w;
		d[0]=0;
 			
			FOR(i,0,w)
			{
				sum+=a[i];
			}
	
// 1 2 3 4
// 0 1 1 1
//10 3 
//3 8 7 6 9 5 1 4 2 10
/*
8 4
1 2 3 4 5 6 7 8
*/
			int min=100000000;
		    if(sum%w==chek)
			{	FOR(j,0,w)
					if(min>a[j])
						min=a[j];
				if(((w*min)+y)==sum)
				count++;
			}
			
			//cout<<count;
		    FOR(i,w,n)
		    {
				sum=sum+a[i]-a[i-w];
				//cout<<"sum= "<<sum;
				if(sum%w==chek)
				{
					int ram=(sum-y)/w;
					//cout<<"sum= "<<sum;cout<<"y= "<<y;
					//cout<<"ram= "<<ram<<endl;
					//cout<<"chek="<<chek;
					FOR(j,i-w+1,i+1)
						if(a[j]>ram+w-1 || a[j]<ram)
							{goto c ;}
						//if(min>a[j])   cout<<a[i];
						//	min=a[j];
					//if(((w*min)+y)==sum)
					count++;
				}
					c :
				min=100000000;
			
			}	
	}
	else
		return n;
	return count;    
}


bool input()
{
    s(n);s(w);
    FOR(i,0,n)
    	s(a[i]);
    
    return true;
}



int main()
{
    int T=1;
    for(testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
    //    s(k);
    
    //cout<<"\n\nfinal ans: ";
      	p(solve());
        //printf("\n");
    }
    return 0;
}
