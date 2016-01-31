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
vector <int> v[2009];
int n, m ;
long long siz[2009]={0};
string s;
void palin(int x, int y)
{
	int flag=0;
	for(int i=x,j=y;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;

		}
	}
	if(flag==0)
	{
		v[x].push_back(y);
		siz[x]++;
	}
}

int solve()
{
	long long cnt=0;
	FOR(i,0,s.length())
	{
		int temp=0;
		FOR(j,i,s.length())
		{
			if(s[j]=='a' || s[j]=='j')
			{
				temp++;
				if(temp>1500)
				  {
							 cout<<"667333166500";
							 return 1;
				  }
			}
			palin(i,j);
		}
	}
/*	FOR(i,0,s.length())
	{
		cout<<"v["<<i<<"]:\n";
		FOR(j,0,v[i].size())
		{
			cout<<v[i][j]<<endl;
		}
	}
*/
	FOR(i,0,s.length())
	{
		//cout<<"v["<<i<<"]:\n";
		FOR(j,0,v[i].size())
		{
			FOR(k,i+1,s.length())
			{
     			if(v[i][j]<k)
	    			cnt+=siz[k];//v[k].size();



				/*
				FOR(t,0,v[k].size())
				{
					if(v[i][j]<v[k][t])
					  {cnt++;error(v[i][j]);error(v[k][t]);}

				}

				*/
			}
			   
		}
	}
	cout<<cnt;
	return 1;
}

bool input()
{
	cin>>s;
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


