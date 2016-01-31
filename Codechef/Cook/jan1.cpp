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


int n, m ;
string st;
string::iterator it;
string s[16]={"????", "???F" , "??E?" , "??EF" , "?H??" , "?H?F" , "?HE?", "?HEF", "C???" , "C??F" , "C?E?" , "C?EF", "CH??", "CH?F", "CHE?", "CHEF" }; 
int solve()
{
	FORs(i,st.length()-4, 0)
	{// error(st.substr(i,4));
		if(st[i]=='?' || st[i]=='C')
		if(st[i+1]=='?' || st[i+1]=='H')
		if(st[i+2]=='?' || st[i+2]=='E')
		if(st[i+3]=='?' || st[i+3]=='F')
		FOR(j,0,16)
		{
	//		error(s[j]);
			if(st.substr(i,4) == s[j] )
				{
					//FOR(k,i,i+4)
					//	st[k]=s[j][i-k];
					//error(st);
					it=st.begin();	
					st.replace(  it+i , it+i+4 , s[15] );
					i-=3;
					break;
				}
		}
		
	}
	FOR(i,0,st.length())
	{
		if(st[i]=='?')
			cout<<"A";
		else
			cout<<st[i];
	}
	cout<<endl;
    return 1;
}

bool input()
{
	s(n);
	FOR(i,0,n)
	{
		cin>>st;
		solve();
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

        //solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




