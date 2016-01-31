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


int n;
int solve()
{
	int res=0;//char s[143];
	char ch[12];
    string s;
    //cin>>ch;
	gets(ch);
	FOR(i,0,n)
	{
	   
		
		getline(cin,s);
				//gets(s);
		int m=s.length();
		//int m=strlen(s);
		int e=0,f=0,t=0,flag=1;
		for(int j=m-1;flag && s[j]!=' ';j--)
		{
			//if(s[j]==' ')// && (e!=0 ||flag!=0 ||t!=0 ||f!=0 ))
			  //break;
			//else
			 if(s[j]=='8')
			  e++;  
			else if(s[j]=='5')
			  f++;
			 else if(s[j]=='3')
			   t++;
			 else if(s[j]>='0' && s[j]<='9')
			   {flag=0;}  
		}
		if(e>=f && f>=t && flag==1 && e!=0)
		  res++;
	}
	cout<<res;

      return 1;
}

bool input()
{
 s(n);
 //getchar();
   
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


