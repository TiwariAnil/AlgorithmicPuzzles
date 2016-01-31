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

/*   INPUT

1000000009 , 100005
*/

int n, m ;
string s;
void add()
    {
        int l=1,cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]-'0'+l==2)
              s[i]='0',cnt++;
            else
            {s[i]='1';l=0;break;}
        }
        if(cnt==s.length())
        {
        	string p="1";
			p=p+s;
			s=p;
		}

    }
    

int solve()
{
	long long x=0;
	while(s.length()!=1)
	{
	//	cout<<s;
	//	cout<<endl;
		if(s[s.length()-1]=='1')
		{
			add();
			//else
			//s.length()--;
		}
		else
		s.erase(s.end()-1);
		x++;
	}
	cout<<x;
	
	
	
	
	
	
	/*int j=0;
	FORs(i,s.length()-1,0)
	{

		if(s[i]=='1')
		{
			x+=pow(2,j);
			//error(x);
		}
		j++;
	}

//	cout<<x;

//	return 1;
	int cnt=0;
	while(x!=1)
	{
	//	error(x);
	//	/*
		if(x%2==0)//(x & 1) == 0)
		 x=x>>1;
		 else
		 x++;
	//	 /
		cnt++;
	//	if(cnt>13)
	//	break;
	}
	cout<<cnt;
	*/
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


