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
/*  Tiwari's code  */

string s1,s2;
int solve()
{
	

	string y2,y3,y4,y5;int flag;int cnt=0;
	int l1=s1.length();int l2=s2.length();
	//int l1=strlen(s1);int l2=strlen(s2);
	FOR(i,0,l1)
	{
		
		if(s1[i]!='<' && s1[i]!='>')
        cout<<s1[i];
	}
	cout<<endl;
    
	FOR(i,0,l2)
	{
		if(s2[i]=='.')
            break;
		else
            cout<<s2[i];
	}
	int u=0;
	for(u=0;u<l1;u++)
        if(s1[u]=='<')
           break;
     u++;      
     for(u;u<l1;u++)
         if(s1[u]!='>')
		      y2+=s1[u];
		  else
		     break;
	u++;		 	     
	for(u;u<l1;u++)
         if(s1[u]!='<')
		      y3+=s1[u];
		  else
		     break;
	u++;
	for(u;u<l1;u++)
         if(s1[u]!='>')
		      y4+=s1[u];
		  else
		     break;
	u++;	     
	for(u;u<l1;u++)
          y5+=s1[u];
		  
	
	cout<<y4<<y3<<y2<<y5;
	cout<<endl;

      return 1;
}

bool input()
{
 	 
	  getline(cin,s1);getline(cin,s2);
   	  return true;
}

int main()
{
    int T=1;
    s(T);
    getchar();
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    //int s;
    //cin>>s>>T;
    return 0;
}

