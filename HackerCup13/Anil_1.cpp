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


//int n, mz=0 ;
string str;
char ch[22];
int a[30];
int solve()
{
	FOR(i,0,30)
		a[i]=0;
	int mm=0;
	int k=26;
	int n=str.length();
	vector <int> v;
	//error(n);
	FOR(i,0,n)
	{
		//cout<<str[i];
		
			if(str[i]<='Z' && str[i]>='A')
				mm=str[i]-'A'+1, a[mm]++;
			else if(str[i]<='z' && str[i]>='a')
				mm=str[i]-'a'+1, a[mm]++;
		
		
	}
	FOR(i,0,30)
	{
		if(a[i]!=0)
			v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	mm=0;
	FORs(i,v.size()-1, 0)
	{
		mm+=(v[i]*k);
		k--;
	}
	//sort(a, a+27);
	
	//cout<<endl;
	cout<<mm<<endl;
	//mz=0;
    return 1;
}

bool input()
{
	getline(cin, str);
	return true;
}

int main()
{
    //freopen("test1.txt","r",stdin);
    //freopen("result1.txt","w",stdout);

    int T=1;
    s(T);
    getchar();
    //gets(ch);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) 
			break;
		cout<<"Case #"<<testnum<<": ";
        solve();
        
		//printf("\n");

    }
    //cout<<
//    system("pause");
    return 0;
}




