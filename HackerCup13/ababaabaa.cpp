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
#include<sstream>
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
#define all(c)                  (c).begin(),(c).end()
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
/*



20
a(a)::(((::)))())((a)(:((:a())):((::(:()(a)))i am trapped in a test case generator :(:(a(:::))
():)((()():(:())))::aa((((:(((:)))::a:(:))()a)):(a):::((()a((a(aa(():))(():())((::a)a)):)()
aa:a:((a)(aa(::((((::((())aaa(()a(()a)))::a(((:(():()aa))a((:a:(:()((:(












*/

using namespace std;

string str;
char ch[22];
int a[30];
int solve()
{
	int n=str.length(), end=str.length(), beg=0;
	int prechek=0;
	FORs(i, n-1, 0)
	{
		if(str[i]==')')
			break;
		if(str[i]=='(')
		{
			if(str[i-1]!=':')
				{
					prechek=1; break;
				}
			else
			{
				end=i; break;
			}
				
		}
	}
	if(prechek==1)
	{
	cout<<"NO\n"; return 1;
	}
	FOR(i,0,n)
	{
		if(str[i]=='(')
			break;
		if(str[i]==')')
		{
			if(str[i-1]!=':')
				{
					prechek=1; break;
				}
			else
			{
				beg=i+1; break;
			}				
		}
	}
	if(prechek==1)
	{
		cout<<"NO\n"; return 1;
	}
	int open=0, close=0, flag=0, x=0 ,y=0, sad=0, hap=0;
	FOR(i,beg,end)
	{
		if(str[i]=='(')
		{
			open++;
			if(str[i-1]==':')
				sad++;
		}
		if(str[i]==')')
		{
			close++;
			if(str[i-1]==':')
				hap++;
			if(close-hap>open  )
			{
				prechek=1; break;
			}
		}
	}
	if(prechek==1)
	{
		cout<<"NO\n"; return 1;
	}
	if(open!=close)
	{
		if(open>close)
		{
			if(open-sad>close)
			{
				cout<<"NO\n"; return 1;
			}
		}
		else
		{	if(close-hap>open)
			{
				cout<<"NO\n"; return 1;
			}
		}
	}
	cout<<"YES\n"; return 1;
	
    return 1;
}

bool input()
{
	getline(cin, str);
	return true;
}

int main()
{
	
    //freopen("test2.txt","r",stdin);
    //freopen("result2.txt","w",stdout);

    int T=0;
    
    s(T);
    getchar();
    for(int t=1;t<=T;t++)
    {
        if(!input()) 
			break;
		cout<<"Case #"<<t<<": ";
        solve();
        
    }
    return 0;
}




