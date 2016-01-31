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

int n, m=0 ;
int flag=0;
int b[10]={0};
int solve()
{
	int prev=0;
	if(b[0]==0 )
	{
		cout<<"-1";
		return 1;
	}
	if((m==0))
	{
			cout<<"0";
		return 1;
		
	}
	//sort(a,a+n);
	
	if(m%3==0)
	{
		FORs(i,9,0)
		{
			while(b[i]!=0)
			{
				cout<<i;
				b[i]--;
			}
		}
	}
	else
	{
		  FOR(i,1,10)
		  {
			if( b[i]>0 && (m-i)%3==0 )
				{
					          b[i]--;
					          flag=1;
					          m-=i;
					break;
				}
		 }
		 if(flag==0)
		 {
		 	FOR(i,1,10)
		 	{
		 		if(b[i]!=0)
		 		{
			
						if(i>=2 && (m-i-prev)%3==0)
						{
							b[i]--;b[prev]--;
							m-=i;m-=prev;
							break;
						}
     				else if(b[i]>=2 && (m-2*i)%3==0)
					  {
						  b[i]-=2;
						  m-=(2*i);
						  break;
					  }
					prev=i;
		 		}
		 	}
		 	
		 }
		 	if((m==0))
			{
					cout<<"0";
				return 1;

			}
		 FORs(i,9,0)
		{
		
			while(b[i]!=0)
			{
				cout<<i;
				b[i]--;
			}
		}
		  
	}
	return 1;
}

bool input()
{
	s(n);
	int a;
	FOR(i,0,n)
	{
		s(a);
		//if(a[i]==0)
		 //flag=1;
		 m+=a;
		 b[a]++;
	}
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


