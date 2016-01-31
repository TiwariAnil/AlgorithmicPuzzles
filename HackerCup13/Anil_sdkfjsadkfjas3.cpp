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

/*
5
97 39
34 37 656 97
186 75
68 16 539 186
137 49
48 17 461 137
98 59
6 30 524 98
46 18
7 11 9 46

1
97 39
34 37 656 97
2 4 7 8 16 17 21 24 26 28 34 36 39 40 41 42 43 48 50 51 59 62 64 66 69 71 73 75
76 78 79 81 82 83 84 87 89 91 92


*/
long long n, a, x, b, c, r, k, cnt=0;
//set <int> m;
//set<int>::iterator it;
vector <int> m;
int pool[100000009];	
int solve()
{
	/*
5
186 75
68 16 539 186
97 39
34 37 656 97
137 49
48 17 461 137
98 59
6 30 524 98
46 18
7 11 9 46
*/

/*
	FOR(i,0,k)
	{
		cout<<m[i]<<" ";
	}
*/
	cnt=n-k;
	FOR(i,k,n)
	{
		
		if(i==2*k-2)
		{
			cout<<">>>>>\n";
			FOR(i,0,k)
			{
				cout<<m[i]<<" ";
			}
			cout<<">>>>>\n";

		}
		
		
		/*cout<<"\n{";
		FOR(t,0,k)
		{
		cout<<m[t]<<" ";
		}
		cout<<"}\n";
*/
		FOR(j,0,100000000)
		{
			if(pool[j]!=1)
			{
				error(j);
				pool[j]=1;  
				pool[m[0]]=0;
				
				m.erase(m.begin());
				m.push_back(j);
				if(i==n-1)
					{             
						
					 cout<<"\t\t";error(j);cout<<endl; return 1;
					 
					 }			
				break;
			}	
		}
	}
    return 1;
}

bool input()
{//m[0] = a
//m[i] = (b * m[i - 1] + c) % r, 0 < i < k

	sl(n); sl(k);
	sl(a);sl(b);sl(c);sl(r);
	m.clear();
	FOR(i,0,10000000)//0000)
	{
		pool[i]=0;
	}
	m.push_back(a);
	pool[a]=1;
	
	b=b%r;
	c=c%r;
	int prev=a%r;
	
	FOR(i,1,k)
	{
		
		x=(b*prev)%r;
		x=x+c;
		x%=r;
		prev=x;
		pool[prev]=1;
		m.push_back(prev);
		//*/
		//x = (b * m[i - 1] + c) % r;
		//pool[x]=1;
	}
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




