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
#include<sstream>
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
#define all(c)                  (c).begin(),(c).end()
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


int n, m , query;
int bs[200][2];
int flag=0;
int chek[103];
int cnt=0;

void solve(int que, int  curr)
{
	chek[que]=1;
	if(flag==1)
	{
	//	cout<<"out retu\n";
		return ;
	}
	/*
	else
		cout<<"email it\n";
		//return ;
	cnt++;
	if(cnt>10)
		return ;
	error(flag);
	error(que);
	error(curr);
	*/
	FOR(i,1,query)
	{
	//	error(query);
		if(i!=que && chek[i]==0 &&( (bs[i][0] < bs[que][0] && bs[que][0] < bs[i][1] ) || (bs[i][0] < bs[que][1] && bs[que][1] < bs[i][1]) ))
		{
			/*
			cout<<"-------\n";
			error(i);
			error(que);	
			cout<<"-------\n";
			*/
				if(i==curr)
				{
			//		cout<<"flag set\n";
					flag=1; 
					return;
				}
				else
					solve(i, curr);
		}
		
	}
	
    return ;
}

bool input()
{
	s(n);
	int x, a, b, g, h;
	query=1;
	FOR(i,0,n)
	{
		s(x);
		if(x==1)
		{
			s(a); s(b);
			bs[query][0]=a;
			bs[query][1]=b;
			query++;
			
		}
		else
		{
			flag=0;
			s(a); s(b);
			FOR(i,0,query)
			{
				chek[i]=0;
			}
			solve(a, b);
			
			if(a>=query || b>=query)
			{
				cout<<"NO"<<endl;
				continue;
			}
			
			if( flag==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
			
		}
	}
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

       // solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




