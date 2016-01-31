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
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int n, m ;
string s,t="http://",p="ftp://",f;
int solve()
{
	cin>>s;
	int flag=0;
	if(s[0]=='h')
	{int siz=s.length();
		f+=t;
		int j=3;
		while(j)
		{
			j++;
			if(s[j]=='r' && s[j+1]=='u'&& j!=4)
				{break;}//break;
			if(j==siz)
			{
				flag=1;
				break;
			}
			f+=s[j];
		}
		if(flag==1)
		{
			f+=".ru";
			
		}
		else
		{
			f+='.';
			f+=s[j];
			j++;
			f+=s[j];

			if(siz-j>1)
			{
				f+='/';
				j++;
				while(j<siz)
				{
					f+=s[j];
					j++;
				}
			}
		}
   }
	else
	{
		f+=p;
		int j=2;
		int siz=s.length();
		while(j)
		{
			j++;
			if(s[j]=='r' && s[j+1]=='u'&& j!=3)
				break;
			if(j==siz)
			{
				flag=1;
				break;
			}
			f+=s[j];
		}
		if(flag==1)
		{
			f+=".ru";
		}
		else
		{
			f+='.';
			f+=s[j];
			j++;
			f+=s[j];

			if(siz-j>1)
			{
				f+='/';
				j++;
				while(j<siz)
				{
					f+=s[j];
					j++;
				}
			}
		}
   }
   cout<<f;
	return 1;
}

bool input()
{
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


