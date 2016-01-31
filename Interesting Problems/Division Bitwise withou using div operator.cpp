//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<list>
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
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define mod 1000000007
#define MAXN 1000010
#define MP make_pair
#define INF mod
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
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

int n, m ,flag;

ALGO:
In essence, if you're doing Q = N/D:
Align the most-significant ones of N and D.
2.  Compute t = (N - D);.
3.	If (t >= 0), then set the least significant bit of Q to 1,
	and set N = t.
4.	Left-shift N by 1.
5.	Left-shift Q by 1.
6.	Go to step 2.

int binaryDivide(int dividend, int divisor)
{
		// complexity = log(n)
		// Ex: 25/3 = 8
    int current = 1;
    int denom = divisor;
    // This step is required to find the biggest current number[24]
    // (i.e divisible by denominator[3] like '11xxxxxxxxx' x='0' )which can be
    // divided with the number[25] safely.
    while (denom <= dividend)
    {
        current <<= 1;
        denom <<= 1;
    }

    error(current);
    error(denom);
    // Since we may have increased the denominator more than dividend
    // thus we need to go back one shift, and same would apply for current.

    denom >>= 1;
    current >>= 1;

    int answer = 0;
    // Now deal with the smaller number.

		error(answer);
    error(current);
    error(denom);cout<<endl;
    error("LOOPIING");
		int cnt=1;
    while (current != 0)
    {
        if (dividend >= denom)
        {
            dividend -= denom;
            answer |= current;
        }
        current >>= 1;
        denom >>= 1;

		error(cnt);
		error(answer);
    error(current);
    error(denom);
		cout<<endl;
		cnt++;
    }

    error(answer);
		error(denom);
		return answer;
}
// For DIGITS after decimal points, we have remainder = denom, now
// while remainder != 0 , keep doing this
//      remainder*=10, or remainder*=1000000
// and divide it in same way to get the digits after decimal points

int divide(int numerator, int denominator)
{
    int mask = 0x1;
    int quotient = 0;

    while (denominator <= numerator)
    {
        denominator <<= 1;
        mask <<= 1;
    }

    while (mask > 1)
    {
        denominator >>= 1;
        mask >>= 1;
        if (numerator >= denominator)
        {
            numerator -= denominator;
            quotient |= mask;
        }
    }

    return quotient;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    binaryDivide(29,5);



    return 0;
}
