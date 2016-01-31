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
typedef pair <string , string>  str;
typedef pair <str, int > full;
int solve()
{
	
	str strr;
	
	full fulll;
	vector <full> vec;
	string s1, s2, s3;
	int rs,sum=0;
	s(n);
	n--;
	FOR(i,0,n)
	{
		cin>>s1;
		cin>>s2;
		s(rs);
		cin>>s3;
		strr = make_pair(s1,s2);
		fulll = make_pair(strr, rs);
		vec.push_back(fulll);
	}
	
	    sort(vec.begin(), vec.end());
	    cout<<vec[0].first.first;
		cout<<" ";
		cout<<vec[0].first.second;
		cout<<" ";
		cout<<vec[0].second;
		cout<<"$";
		sum+=vec[0].second;
		s3=vec[0].first.second;

	//vec.erase(vec.begin());
	cout<<endl;

	while(n--)
	{
		FOR(i,0,vec.size())
		if(vec[i].first.first==s3)
		{
			cout<<vec[i].first.first;
			cout<<" ";
			cout<<vec[i].first.second;
			cout<<" ";
			cout<<vec[i].second;
			cout<<"$";
			sum+=vec[i].second;
			s3=vec[i].first.second;
		//	vec.erase(vec.begin()+i);
			cout<<endl;
			break;
		}
	}

	cout<<sum<<"$";
	cout<<endl;
	return 1;
}

bool input()
{
	
	return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        //if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


