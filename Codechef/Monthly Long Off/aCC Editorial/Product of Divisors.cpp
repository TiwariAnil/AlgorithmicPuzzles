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

int divisors( int n )
{
    int res=0;
    int temp=sqrt(n);
    if(temp*temp==n)
         res--;
    FOR(i,1, (int)sqrt(n)+1 )
    {
        if (n%i==0)
           res+=2;
    }
    return res;
}

bool isSmaller;
int divs[500001];
int calc(int num, int a)
{
    isSmaller = true;
    if( a == 0) return 1;
    int p = a;
    int x = num;
    if(num > 9999)
	{
        isSmaller = false;
        x = x % 10000;
    }
    int r = 1;
    while(p != 1)
	{
        if(p&1)
		{
            r = (r * x);
            if(r > 9999)
			{
                isSmaller = false;
                r = r % 10000;
            }
        }
        p = p >> 1;
        x = (x * x);
        if(x > 9999)
		{
            isSmaller = false;
            x = x % 10000;
        }

    }
    r = r*x;
    if(r > 9999)
	{
        isSmaller = false;
        r = r % 10000;
    }
    return r;
}


void cal()
{
    for(int i = 2; i <= 708; i++)
	{
        for(int j = i; j <= 500000/i; j++)
		{
            if(i == j)
                divs[i*j]++;
            else
                divs[i*j]+=2;
        }
    }
}

int solve()
{
	int n, m ;
	s(n);
	int x=divs[n],result=1;

        if(x % 2 == 0)
		{
            result = calc(n, x/2);
        }
        else
		{
            result = calc(sqrt(n), x);
        }
        if(!isSmaller)
		{
            printf("%04d\n", result);
        }
        else
		    printf("%d\n", result);

		
		
		/*
		int p[6]={0},t=0;
		int ck=result;
		if(ck>9999 || ck==0)
		{
			while(result)
			{
				p[t]=result%10;
				result/=10;
				t++;
			}
			FORs(i,3,0)
			{
				p(p[i]);
			}
		}
		else
		  p(ck);
		printf("\n");
*/

		return 1;

	
	/*
	
	if(x%2==0)
	    result=calc(n,x/2);
	 else
	 {
	 	result=calc(n,(x-1)/2);
	 	int tep=sqrt(n);
	 	result=result*tep%10000;
	 }
/*	if(x%2==0)
	{ 2 3 4 6
6
3
4
12
25
957
10000
	//	/*
		FOR(i,0,x/2)
		{
			result=(result*n)%100000;

		}
	//	/
	}
	else
	{
		FOR(i,0,(x-1)/2)
		{
		 result=(result*n)%100000;
        }
        int y=sqrt(n);
		result=(result*y)%100000;
	}
	
	*/
}

bool input()
{
	//s(n);
	return true;
}

int main()
{
    int T=1;
	cal();
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        //if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


