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


int n, m, a, b, c ;
set <string> s1, s2, s3;
set <string>::iterator it;
int solve()
{
	int x=0, y=0, z=0;
	string t;

	while(!s1.empty())
	{
	//	error(x); error(y); error(z);
		it=s1.begin();
		t=(string)*it;
	//	error(t);
		if(s2.find(t)!=s2.end())
		{
			if(s3.find(t)!=s3.end())
			{
				s1.erase(t);
				s2.erase(t);
				s3.erase(t);
				x++; y++; z++;
			}
			else
			{
				s1.erase(t);
				s2.erase(t);
			
				x+=2;
				y+=2;
			}
		}
		else if(s3.find(t)!=s3.end())
		{
//			error("3rd");
			s1.erase(t);
			s3.erase(t);
			x+=2;
			z+=2;
		}
		else
		{
			s1.erase(t);
			x+=3;
		}
	}
	
	
	while(!s2.empty())
	{
		it=s2.begin();
		t=*it;
		if(s3.find(t)!=s3.end())
		{
				s2.erase(t);
				s3.erase(t);
				 y+=2; z+=2;
		}
		else
		{
				s2.erase(t);
				y+=3;
		}
	}
	z=z+(s3.size()*3);	
	int mx=maX(x,maX(y, z));
	int flag=0;
	//error(mx);
	//error(x); error(y); error(z);
	if(x==mx )
	{
		flag++;
	}
	if(y==mx)
	{
		flag++;
	}
	if(z==mx)
	{
		flag++;
	}
	//error(flag);
	if(flag>1)
	{
		cout<<"Tie";
	}
	else if(mx==x)
	{
		cout<<"Raju";
	}
	else if(mx==y)
	{
		cout<<"Ramu";
	}
	else
	{
		cout<<"Rakesh";
	}
	cout<<endl;
	s1.clear(); s2.clear(); s3.clear();
    return 1;
}

bool input()
{
	string t;
	s(a); s(b); s(c);
	FOR(i,0, a)
	{
		cin>>t;
		s1.insert(t);
	}
	FOR(i,0, b)
	{
		cin>>t;
		s2.insert(t);
	}
	FOR(i,0, c)
	{
		cin>>t;
		s3.insert(t);
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




