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
string s[10];


int x[]={1,1,1,0,0,-1,-1,-1};
int y[]={1,0,-1,1,-1,1,0,-1};
int rc[8][9]={0};
int cnt=0;
void moves()
{
	FORs(i,7,0)
	   FOR(j,0,8)
	   {
	   	if(s[i][j]=='S')
		 {
			s[i][j]='.';
			if(i+1<8)
			{
				s[i+1][j]='S';
				rc[i+1][j]=0;
			}
	     }
	   }
}
void movem()
{

	FORs(i,7,0)
	{
		FOR(j,0,8)
		{
			if(s[i][j]=='M' && rc[i][j]!=cnt+1)
			{
				//cout<<rc[i][j];
				FOR(k,0,8)
				{
					int xx=i+x[k];
					int yy=j+y[k];
					if(xx>=0 && xx<8 && yy>=0 && yy<8 && s[xx][yy]!='S'&& s[xx][yy]!='M')
					{
						s[xx][yy]='M';
						rc[xx][yy]=cnt+1;
					}
				}
			}
		}
		
	}
	cnt++;
}
int chek()
{
	int m=0, sc=0;
	FOR(i,0,8)
	  FOR(j,0,8)
	  {
	//	cout<<s[i][j];
	  	if(s[i][j]=='S')
	    	sc++;
	  	if(s[i][j]=='M')
	  	    m++;
	  }
	 // error(m);error(sc);
	  if(m==0)
	   return 2;
	  if(sc==0)
		return 1;
	  return 0;
}
void prints()
{
	cout<<endl;
	FOR(i,0,8)
	{
		cout<<s[i];
	cout<<endl;
	}
}
int solve()
{
	int flag=1,px,py;
	/*
	FOR(i,0,8)
	FOR(j,0,8)
	{
		if(s[i][j]=='M')
		{
			px=i,py=j;
			break;
        }
	}
	*/
	while(flag)
	{
		movem();
	//	prints();
		moves();
	//	prints();
		int c=chek();
		//error(c);
		if(c==1)
		{
			cout<<"WIN";
			break;
		}
		if(c==2)
		{
			cout<<"LOSE";
			break;
		}
	}
	return 1;
}

bool input()
{
	FOR(i,0,8)
	cin>>s[i];
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

/*

SSSSS...
........
........
........
........
......SS
........
M.......
*/
